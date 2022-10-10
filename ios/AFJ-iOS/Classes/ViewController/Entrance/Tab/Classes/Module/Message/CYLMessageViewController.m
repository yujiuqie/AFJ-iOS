//
//  CYLMessageViewController.m
//  CYLTabBarController
//
//  v1.21.x Created by 微博@iOS程序犭袁 ( http://weibo.com/luohanchenyilong/ ) on 10/20/15.
//  Copyright © 2018 https://github.com/ChenYilong . All rights reserved.
//

#import "CYLMessageViewController.h"
#import "CYLMainRootViewController.h"
#import <MJRefresh/MJRefresh.h>
#import "AFJLogManager.h"
#import "AFJLogCell.h"
#import "AFJLogResultsTableController.h"
#import "AFJLog.h"
#import "AFJLogManager.h"

@interface CYLMessageViewController ()
        <
        UISearchBarDelegate,
        UISearchControllerDelegate,
        UISearchResultsUpdating
        >


@property(nonatomic, strong) UISearchController *searchController;
@property(nonatomic, assign) NSUInteger taptime;
//@property (nonatomic, strong) NSMutableArray *logs;


// our secondary search results table view
@property(nonatomic, strong) AFJLogResultsTableController *resultsTableController;

// for state restoration
@property BOOL searchControllerWasActive;
@property BOOL searchControllerSearchFieldWasFirstResponder;

@end

@implementation CYLMessageViewController

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.navigationItem.title = @"日志";    //✅sets navigation bar title.The right way to set the title of the navigation
    self.tabBarItem.title = @"日志";   //❌sets tab bar title. Even the `tabBarItem.title` changed, this will be ignored in tabbar.
    //self.title = @"消息1";                //❌sets both of these. Do not do this‼️‼️ This may cause something strange like this : http://i68.tinypic.com/282l3x4.jpg .
    __weak __typeof(self) weakSelf = self;
    self.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
        //Call this Block When enter the refresh status automatically
        NSUInteger delaySeconds = 1;
        dispatch_time_t when = dispatch_time(DISPATCH_TIME_NOW, (int64_t) (delaySeconds * NSEC_PER_SEC));
        dispatch_after(when, dispatch_get_main_queue(), ^{
            [weakSelf.tableView.mj_header endRefreshing];
        });
    }];

    [self.tableView registerNib:[UINib nibWithNibName:@"AFJLogCell" bundle:nil] forCellReuseIdentifier:kAFJLogCellIdentifier];
    self.title = @"日志";

    _resultsTableController = [[AFJLogResultsTableController alloc] init];
    _searchController = [[UISearchController alloc] initWithSearchResultsController:self.resultsTableController];
    self.searchController.searchResultsUpdater = self;
    [self.searchController.searchBar sizeToFit];
    self.tableView.tableHeaderView = self.searchController.searchBar;
    self.tableView.estimatedRowHeight = 11;

    // we want to be the delegate for our filtered table so didSelectRowAtIndexPath is called for both tables
    self.resultsTableController.tableView.delegate = self;
    self.searchController.delegate = self;
    self.searchController.dimsBackgroundDuringPresentation = NO; // default is YES
    self.searchController.searchBar.delegate = self; // so we can monitor text changes + others

    // Search is now just presenting a view controller. As such, normal view controller
    // presentation semantics apply. Namely that presentation will walk up the view controller
    // hierarchy until it finds the root view controller or one that defines a presentation context.
    //
    self.definesPresentationContext = YES;  // know where you want UISearchController to be displayed
}

- (void)refresh {
    [self.tableView.mj_header beginRefreshing];
    NSUInteger delaySeconds = 1;
    dispatch_time_t when = dispatch_time(DISPATCH_TIME_NOW, (int64_t) (delaySeconds * NSEC_PER_SEC));
    dispatch_after(when, dispatch_get_main_queue(), ^{
        [self.tableView.mj_header endRefreshing];
    });
}

#pragma mark - Methods

- (void)viewDidAppear:(BOOL)animated {
    [self.navigationItem.leftBarButtonItem cyl_showBadge];

//    if (self.searchControllerWasActive) {
//        self.searchController.active = self.searchControllerWasActive;
//        _searchControllerWasActive = NO;
//        
//        if (self.searchControllerSearchFieldWasFirstResponder) {
//            [self.searchController.searchBar becomeFirstResponder];
//            _searchControllerSearchFieldWasFirstResponder = NO;
//        }
//    }

    [self.tableView reloadData];
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

- (void)configureCell:(AFJLogCell *)cell forIndexPath:(NSIndexPath *)indexPath {
    AFJLog *selectedProduct = [[AFJLogManager sharedInstance] logs][indexPath.row];
    cell.logLabel.text = selectedProduct.title;
}

#pragma mark - Table view

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    AFJLogCell *cell = (AFJLogCell *) [self.tableView dequeueReusableCellWithIdentifier:@"AFJLogCell" forIndexPath:indexPath];
    [self configureCell:cell forIndexPath:indexPath];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    AFJLog *selectedProduct = (tableView == self.tableView) ?
            [[AFJLogManager sharedInstance] logs][indexPath.row] : self.resultsTableController.filteredLogs[indexPath.row];

    NSUInteger curr = [[NSDate date] timeIntervalSince1970];

    if (curr - self.taptime < 1) {
        UIPasteboard *board = [UIPasteboard generalPasteboard];
        board.string = selectedProduct.title;

        [self.view makeToast:@"已复制到粘贴板"
                    duration:2
                    position:CSToastPositionCenter];
    }

    self.taptime = curr;
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
//    NSNumber *badgeNumber = @(indexPath.row);
//    self.navigationItem.title = [NSString stringWithFormat:@"首页(%@)", badgeNumber]; //sets navigation bar title.

    //    [self.navigationController.tabBarItem setBadgeValue:[NSString stringWithFormat:@"%@", badgeNumber]];

    //    CYLTabBarControllerConfig *tabBarControllerConfig = [[CYLTabBarControllerConfig alloc] init];
    //    CYLTabBarController *tabBarController = tabBarControllerConfig.tabBarController;
    //    tabBarController.delegate = self;
    //
    //    [self cyl_showBadgeValue:[NSString stringWithFormat:@"%@", @(indexPath.row)] animationType:CYLBadgeAnimationTypeScale];
    //    [self pushToNewViewController];
//    CYLTabBarController *tabBarController = [[CYLMainRootViewController new] createNewTabBarWithContext:NSStringFromClass([self class])];
//    [self.navigationController pushViewController:tabBarController animated:YES];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [[[AFJLogManager sharedInstance] logs] count];
}

#pragma mark - UISearchResultsUpdating

- (void)updateSearchResultsForSearchController:(UISearchController *)searchController {
    // update the filtered array based on the search text
    NSString *searchText = searchController.searchBar.text;
    NSMutableArray *searchResults = [[[AFJLogManager sharedInstance] logs] mutableCopy];

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
        // each searchString creates an OR predicate for: name, yearIntroduced, introPrice
        //
        // example if searchItems contains "iphone 599 2007":
        //      name CONTAINS[c] "iphone"
        //      name CONTAINS[c] "599", yearIntroduced ==[c] 599, introPrice ==[c] 599
        //      name CONTAINS[c] "2007", yearIntroduced ==[c] 2007, introPrice ==[c] 2007
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

        // at this OR predicate to our master AND predicate
        NSCompoundPredicate *orMatchPredicates = [NSCompoundPredicate orPredicateWithSubpredicates:searchItemsPredicate];
        [andMatchPredicates addObject:orMatchPredicates];
    }

    // match up the fields of the Product object
    NSCompoundPredicate *finalCompoundPredicate =
            [NSCompoundPredicate andPredicateWithSubpredicates:andMatchPredicates];
    searchResults = [[searchResults filteredArrayUsingPredicate:finalCompoundPredicate] mutableCopy];

    // hand over the filtered results to our search results table
    AFJLogResultsTableController *tableController = (AFJLogResultsTableController *) self.searchController.searchResultsController;
    tableController.filteredLogs = searchResults;
    [tableController.tableView reloadData];
}

#pragma mark - UIStateRestoration

// we restore several items for state restoration:
//  1) Search controller's active state,
//  2) search text,
//  3) first responder

NSString *const AFJLog2ViewControllerTitleKey = @"AFJLog2ViewControllerTitleKey";
NSString *const AFJLog2SearchControllerIsActiveKey = @"AFJLog2SearchControllerIsActiveKey";
NSString *const AFJLog2SearchBarTextKey = @"AFJLog2SearchBarTextKey";
NSString *const AFJLog2SearchBarIsFirstResponderKey = @"AFJLog2SearchBarIsFirstResponderKey";

- (void)encodeRestorableStateWithCoder:(NSCoder *)coder {
    [super encodeRestorableStateWithCoder:coder];

    // encode the view state so it can be restored later

    // encode the title
    [coder encodeObject:self.title forKey:AFJLog2ViewControllerTitleKey];

    UISearchController *searchController = self.searchController;

    // encode the search controller's active state
    BOOL searchDisplayControllerIsActive = searchController.isActive;
    [coder encodeBool:searchDisplayControllerIsActive forKey:AFJLog2SearchControllerIsActiveKey];

    // encode the first responser status
    if (searchDisplayControllerIsActive) {
        [coder encodeBool:[searchController.searchBar isFirstResponder] forKey:AFJLog2SearchBarIsFirstResponderKey];
    }

    // encode the search bar text
    [coder encodeObject:searchController.searchBar.text forKey:AFJLog2SearchBarTextKey];
}

- (void)decodeRestorableStateWithCoder:(NSCoder *)coder {
    [super decodeRestorableStateWithCoder:coder];

    // restore the title
    self.title = [coder decodeObjectForKey:AFJLog2ViewControllerTitleKey];

    // restore the active state:
    // we can't make the searchController active here since it's not part of the view
    // hierarchy yet, instead we do it in viewWillAppear
    //
    _searchControllerWasActive = [coder decodeBoolForKey:AFJLog2SearchControllerIsActiveKey];

    // restore the first responder status:
    // we can't make the searchController first responder here since it's not part of the view
    // hierarchy yet, instead we do it in viewWillAppear
    //
    _searchControllerSearchFieldWasFirstResponder = [coder decodeBoolForKey:AFJLog2SearchBarIsFirstResponderKey];
    // restore the text in the search field
    self.searchController.searchBar.text = [coder decodeObjectForKey:AFJLog2SearchBarTextKey];
}

@end
