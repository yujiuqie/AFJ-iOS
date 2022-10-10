//
//  AFJBaseTableViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import "AFJBaseTableViewController.h"
#import "AFJProduct.h"
#import "AFJProductCell.h"

NSString *const kAFJCellIdentifier = @"AFJcellID";
NSString *const kAFJTableCellNibName = @"AFJTableCell";

@interface AFJBaseTableViewController ()

@end

@implementation AFJBaseTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // we use a nib which contains the cell's view and this class as the files owner
    [self.tableView registerNib:[UINib nibWithNibName:@"AFJProductCell" bundle:nil] forCellReuseIdentifier:kAFJCellIdentifier];
    self.tableView.estimatedRowHeight = 11;
}

- (void)configureCell:(UITableViewCell *)cell forProduct:(AFJProduct *)product {
    cell.textLabel.text = product.title;
    cell.accessoryType = [product.hasDemo isEqualToString:@"1"] ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    cell.textLabel.numberOfLines = 0;
}


@end
