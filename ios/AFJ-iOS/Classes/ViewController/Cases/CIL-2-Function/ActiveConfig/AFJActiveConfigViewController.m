//
//  AFJActiveConfigViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/18.
//

#import "AFJActiveConfigViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJActiveConfigViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJActiveConfigViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"AB Test 示例";

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"更新 AB Test 配置";
        item.cType = @"MSSettingsViewController";
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf colorCellAction:data];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"应用 AB Test 配置";
        item.cType = @"MSSampleViewController";
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf colorCellAction:data];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

- (void)colorCellAction:(id)data {
    AFJCaseItemData *item = data;
    NSLog(@"click %@ item", item.cName);

    UIViewController *vc = [[NSClassFromString(item.cType) alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
