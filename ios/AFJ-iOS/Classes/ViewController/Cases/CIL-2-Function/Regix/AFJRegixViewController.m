//
//  AFJRegixViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/15.
//

#import "AFJRegixViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJRegularMatchViewController.h"
#import "HQLRegixViewController.h"

@interface AFJRegixViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJRegixViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    __weak typeof(self) weakSelf = self;
    NSMutableArray *dataArray = [NSMutableArray array];
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"正则测试一";
        item.didSelectAction = ^(id data) {
            HQLRegixViewController *vc = [[HQLRegixViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"正则测试二";
        item.didSelectAction = ^(id data) {
            AFJRegularMatchViewController *vc = [[AFJRegularMatchViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

