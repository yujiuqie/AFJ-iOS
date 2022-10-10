//
//  AFJGraph2ViewController.m
//  AFJ-iOS
//
//  Created by viktyz on 2022/8/25.
//

#import "AFJGraph2ViewController.h"
#import "Demo1ViewController.h"
#import "Demo2ViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "DemoListViewController.h"

@interface AFJGraph2ViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJGraph2ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    __weak typeof(self) weakSelf = self;
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"示例一";
        item.didSelectAction = ^(id data) {
            Demo1ViewController *demo1 = [[Demo1ViewController alloc] init];
            [weakSelf.navigationController pushViewController:demo1 animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"示例二";
        item.didSelectAction = ^(id data) {
            Demo2ViewController *demo2 = [[Demo2ViewController alloc] init];
            [self.navigationController pushViewController:demo2 animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"示例三（Charts）";
        item.didSelectAction = ^(id data) {
            DemoListViewController *demo2 = [[DemoListViewController alloc] init];
            [self.navigationController pushViewController:demo2 animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
