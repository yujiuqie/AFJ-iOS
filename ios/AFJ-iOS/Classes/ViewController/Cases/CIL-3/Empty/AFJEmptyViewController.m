//
//  AFJEmptyViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/15.
//

#import "AFJEmptyViewController.h"
#import "AFJEmptyDetailTableViewController.h"
#import "Application.h"
#import "UIColor+Hexadecimal.h"
#import "UIScrollView+EmptyDataSet.h"

@interface AFJEmptyViewController () <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>

@property (nonatomic, strong) NSArray *applications;

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJEmptyViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    __weak typeof(self) weakSelf = self;
    NSMutableArray *dataArray = [NSMutableArray array];

    for (int i = 1; i <= 8; i++) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = [NSString stringWithFormat:@"示例 %d", i];
        item.didSelectAction = ^(id data) {
            UITableViewController *vc = [[NSClassFromString([NSString stringWithFormat:@"HQLEmptyDataSetExample%d", i]) alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    
    NSString *path = [[NSBundle mainBundle] pathForResource:@"applications" ofType:@"json"];
    self.applications = [Application applicationsFromJSONAtPath:path];
    
    for (Application *obj in _applications) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = obj.displayName;
        item.didSelectAction = ^(id data) {
            AFJEmptyDetailTableViewController *vc = [[AFJEmptyDetailTableViewController alloc] initWithApplication:obj];
            vc.applications = weakSelf.applications;
            vc.allowShuffling = YES;
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    
    [self.tableView reloadDataArray:dataArray];
}

@end

