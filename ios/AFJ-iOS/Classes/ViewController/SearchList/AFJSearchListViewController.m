//
//  AFJSearchListViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import "AFJSearchListViewController.h"
#import "AFJDetailViewController.h"
#import "AFJResultsTableController.h"
#import "AFJProduct.h"
#import "AFJRootViewController.h"
#import "AFJIMViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJSearchListViewController.h"
#import "UIViewController+MMDrawerController.h"
#import "MMDrawerBarButtonItem.h"
#import "AFJProductManager.h"

@interface AFJSearchListViewController ()
        <
        UISearchBarDelegate,
        UISearchControllerDelegate,
        UISearchResultsUpdating
        >


@property(nonatomic, strong) UISearchController *searchController;
@property(nonatomic, copy) NSArray *products;

// our secondary search results table view
@property(nonatomic, strong) AFJResultsTableController *resultsTableController;

// for state restoration
@property BOOL searchControllerWasActive;
@property BOOL searchControllerSearchFieldWasFirstResponder;

@end


#pragma mark -

@implementation AFJSearchListViewController

- (id)init {
    self = [super init];
    if (self) {
        [self setRestorationIdentifier:@"AFJCenterControllerRestorationKey"];
    }
    return self;
}

- (instancetype)initWith:(AFJCaseItemData *)item {
    self = [self init];
    if (self) {
        _item = item;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    _resultsTableController = [[AFJResultsTableController alloc] init];
    _searchController = [[UISearchController alloc] initWithSearchResultsController:self.resultsTableController];
    self.searchController.searchResultsUpdater = self;
    [self.searchController.searchBar sizeToFit];
    self.tableView.tableHeaderView = self.searchController.searchBar;

    // we want to be the delegate for our filtered table so didSelectRowAtIndexPath is called for both tables
    self.resultsTableController.tableView.delegate = self;
    self.searchController.delegate = self;
    self.searchController.dimsBackgroundDuringPresentation = NO; // default is YES
    self.searchController.searchBar.delegate = self; // so we can monitor text changes + others

    // Search is now just presenting a view controller. As such, normal view controller
    // presentation semantics apply. Namely that presentation will walk up the view controller
    // hierarchy until it finds the root view controller or one that defines a presentation context.
    //

    if (kAppDelegate.rVCType == AJFRootVCType_Drawer) {
        [self setupLeftMenuButton];
        [self setupRightMenuButton];
    }

    self.definesPresentationContext = YES;  // know where you want UISearchController to be displayed

    if (!_item) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cType = @"0";
        item.cName = @"全部";
        item.cList = [[AFJProductManager sharedInstance] fullProductList];
        [self setItem:item];
    } else {
        [self setItem:_item];
    }
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];

    // restore the searchController's active state
    if (self.searchControllerWasActive) {
        self.searchController.active = self.searchControllerWasActive;
        _searchControllerWasActive = NO;

        if (self.searchControllerSearchFieldWasFirstResponder) {
            [self.searchController.searchBar becomeFirstResponder];
            _searchControllerSearchFieldWasFirstResponder = NO;
        }
    }
}

#pragma mark -

- (void)setItem:(AFJCaseItemData *)newItem {
    _item = newItem;
    self.title = _item.cName;
    [self setupProducts:_item.cList];
    self.searchControllerWasActive = NO;
    self.searchController.active = NO;
    [self.tableView reloadData];
}

- (void)setupProducts:(NSArray *)objects {
    NSMutableArray *dataArray = [NSMutableArray array];
    for (NSDictionary *dic in objects) {
        AFJProduct *product = [[AFJProduct alloc] init];
        product.title = [dic objectForKey:@"title"];
        product.entrance = [dic objectForKey:@"entrance"];
        product.hasDemo = [dic objectForKey:@"hasDemo"];
        product.link = [dic objectForKey:@"link"];
        [dataArray addObject:product];
    }

    self.products = dataArray;
}

#pragma mark - UISearchBarDelegate

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
    [searchBar resignFirstResponder];
}


#pragma mark - UISearchControllerDelegate

// Called after the search controller's search bar has agreed to begin editing or when
// 'active' is set to YES.
// If you choose not to present the controller yourself or do not implement this method,
// a default presentation is performed on your behalf.
//
// Implement this method if the default presentation is not adequate for your purposes.
//
- (void)presentSearchController:(UISearchController *)searchController {

}

- (void)willPresentSearchController:(UISearchController *)searchController {
    // do something before the search controller is presented
}

- (void)didPresentSearchController:(UISearchController *)searchController {
    // do something after the search controller is presented
}

- (void)willDismissSearchController:(UISearchController *)searchController {
    // do something before the search controller is dismissed
}

- (void)didDismissSearchController:(UISearchController *)searchController {
    // do something after the search controller is dismissed
}


#pragma mark - UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.products.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = (UITableViewCell *) [self.tableView dequeueReusableCellWithIdentifier:kAFJCellIdentifier forIndexPath:indexPath];

    AFJProduct *product = self.products[indexPath.row];
    [self configureCell:cell forProduct:product];

    return cell;
}

// here we are the table view delegate for both our main table and filtered table, so we can
// push from the current navigation controller (resultsTableController's parent view controller
// is not this UINavigationController)
//
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    AFJProduct *selectedProduct = (tableView == self.tableView) ?
            self.products[indexPath.row] : self.resultsTableController.filteredProducts[indexPath.row];

    UIViewController *controller = nil;

    //TODO::特殊处理逻辑
    if ([selectedProduct.entrance isEqualToString:@"AFJIMViewController"]) {
        controller = [AFJIMViewController sharedIMViewController];
    } else if ([selectedProduct.entrance isEqualToString:@"AFJFlutterViewController"]) {
        controller = [[FlutterViewController alloc] initWithEngine:[kAppDelegate flutter_eng] nibName:nil bundle:nil];
    } else {
        controller = [NSClassFromString(selectedProduct.entrance) new];
        if ([controller respondsToSelector:@selector(setProduct:)]) {
            [controller performSelector:@selector(setProduct:) withObject:selectedProduct];
        }
    }

    [self.navigationController pushViewController:controller animated:YES];
    [tableView deselectRowAtIndexPath:indexPath animated:NO];
}


#pragma mark - UISearchResultsUpdating

- (void)updateSearchResultsForSearchController:(UISearchController *)searchController {
    // update the filtered array based on the search text
    NSString *searchText = searchController.searchBar.text;
    NSMutableArray *searchResults = [self.products mutableCopy];

    // strip out all the leading and trailing spaces
    NSString *strippedString = [searchText stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];

    // break up the search terms (separated by spaces)
    NSArray *searchItems = nil;
    if (strippedString.length > 0) {
        searchItems = [strippedString componentsSeparatedByString:@" "];
    }

    // build all the "AND" expressions for each value in the searchString
    //
    NSMutableArray *andMatchPredicates = [NSMutableArray array];

    for (NSString *searchString in searchItems) {
        // each searchString creates an OR predicate for: name, type3, link
        //
        // example if searchItems contains "iphone 599 2007":
        //      name CONTAINS[c] "iphone"
        //      name CONTAINS[c] "599", type3 ==[c] 599, link ==[c] 599
        //      name CONTAINS[c] "2007", type3 ==[c] 2007, link ==[c] 2007
        //
        NSMutableArray *searchItemsPredicate = [NSMutableArray array];

        // Below we use NSExpression represent expressions in our predicates.
        // NSPredicate is made up of smaller, atomic parts: two NSExpressions (a left-hand value and a right-hand value)

        // name field matching
        NSExpression *lhs = [NSExpression expressionForKeyPath:@"title"];
        NSExpression *rhs = [NSExpression expressionForConstantValue:searchString];
        NSPredicate *finalPredicate = [NSComparisonPredicate
                predicateWithLeftExpression:lhs
                            rightExpression:rhs
                                   modifier:NSDirectPredicateModifier
                                       type:NSContainsPredicateOperatorType
                                    options:NSCaseInsensitivePredicateOption];
        [searchItemsPredicate addObject:finalPredicate];

        // type3 field matching
//        NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
//        numberFormatter.numberStyle = NSNumberFormatterNoStyle;
//        NSNumber *targetNumber = [numberFormatter numberFromString:searchString];
//        if (targetNumber != nil) {   // searchString may not convert to a number
//            lhs = [NSExpression expressionForKeyPath:@"type3"];
//            rhs = [NSExpression expressionForConstantValue:targetNumber];
//            finalPredicate = [NSComparisonPredicate
//                              predicateWithLeftExpression:lhs
//                              rightExpression:rhs
//                              modifier:NSDirectPredicateModifier
//                              type:NSEqualToPredicateOperatorType
//                              options:NSCaseInsensitivePredicateOption];
//            [searchItemsPredicate addObject:finalPredicate];
//
//            // price field matching
//            lhs = [NSExpression expressionForKeyPath:@"link"];
//            rhs = [NSExpression expressionForConstantValue:targetNumber];
//            finalPredicate = [NSComparisonPredicate
//                              predicateWithLeftExpression:lhs
//                              rightExpression:rhs
//                              modifier:NSDirectPredicateModifier
//                              type:NSEqualToPredicateOperatorType
//                              options:NSCaseInsensitivePredicateOption];
//            [searchItemsPredicate addObject:finalPredicate];
//        }

        // at this OR predicate to our master AND predicate
        NSCompoundPredicate *orMatchPredicates = [NSCompoundPredicate orPredicateWithSubpredicates:searchItemsPredicate];
        [andMatchPredicates addObject:orMatchPredicates];
    }

    // match up the fields of the Product object
    NSCompoundPredicate *finalCompoundPredicate =
            [NSCompoundPredicate andPredicateWithSubpredicates:andMatchPredicates];
    searchResults = [[searchResults filteredArrayUsingPredicate:finalCompoundPredicate] mutableCopy];

    // hand over the filtered results to our search results table
    AFJResultsTableController *tableController = (AFJResultsTableController *) self.searchController.searchResultsController;
    tableController.filteredProducts = searchResults;
    [tableController.tableView reloadData];
}


#pragma mark - UIStateRestoration

// we restore several items for state restoration:
//  1) Search controller's active state,
//  2) search text,
//  3) first responder

NSString *const AFJViewControllerTitleKey = @"AFJViewControllerTitleKey";
NSString *const AFJSearchControllerIsActiveKey = @"AFJSearchControllerIsActiveKey";
NSString *const AFJSearchBarTextKey = @"AFJSearchBarTextKey";
NSString *const AFJSearchBarIsFirstResponderKey = @"AFJSearchBarIsFirstResponderKey";

- (void)encodeRestorableStateWithCoder:(NSCoder *)coder {
    [super encodeRestorableStateWithCoder:coder];

    // encode the view state so it can be restored later

    // encode the title
    [coder encodeObject:self.title forKey:AFJViewControllerTitleKey];

    UISearchController *searchController = self.searchController;

    // encode the search controller's active state
    BOOL searchDisplayControllerIsActive = searchController.isActive;
    [coder encodeBool:searchDisplayControllerIsActive forKey:AFJSearchControllerIsActiveKey];

    // encode the first responser status
    if (searchDisplayControllerIsActive) {
        [coder encodeBool:[searchController.searchBar isFirstResponder] forKey:AFJSearchBarIsFirstResponderKey];
    }

    // encode the search bar text
    [coder encodeObject:searchController.searchBar.text forKey:AFJSearchBarTextKey];
}

- (void)decodeRestorableStateWithCoder:(NSCoder *)coder {
    [super decodeRestorableStateWithCoder:coder];

    // restore the title
    self.title = [coder decodeObjectForKey:AFJViewControllerTitleKey];

    // restore the active state:
    // we can't make the searchController active here since it's not part of the view
    // hierarchy yet, instead we do it in viewWillAppear
    //
    _searchControllerWasActive = [coder decodeBoolForKey:AFJSearchControllerIsActiveKey];

    // restore the first responder status:
    // we can't make the searchController first responder here since it's not part of the view
    // hierarchy yet, instead we do it in viewWillAppear
    //
    _searchControllerSearchFieldWasFirstResponder = [coder decodeBoolForKey:AFJSearchBarIsFirstResponderKey];

    // restore the text in the search field
    self.searchController.searchBar.text = [coder decodeObjectForKey:AFJSearchBarTextKey];
}

#pragma mark -

- (void)setupLeftMenuButton {
    MMDrawerBarButtonItem *leftDrawerButton = [[MMDrawerBarButtonItem alloc] initWithTarget:self action:@selector(leftDrawerButtonPress:)];
    [self.navigationItem setLeftBarButtonItem:leftDrawerButton animated:YES];
}

- (void)setupRightMenuButton {
    MMDrawerBarButtonItem *rightDrawerButton = [[MMDrawerBarButtonItem alloc] initWithTarget:self action:@selector(rightDrawerButtonPress:)];
    [self.navigationItem setRightBarButtonItem:rightDrawerButton animated:YES];
}

#pragma mark - Button Handlers

- (void)leftDrawerButtonPress:(id)sender {
    [self.mm_drawerController toggleDrawerSide:MMDrawerSideLeft animated:YES completion:nil];
}

- (void)rightDrawerButtonPress:(id)sender {
    [self.mm_drawerController toggleDrawerSide:MMDrawerSideRight animated:YES completion:nil];
}


@end

