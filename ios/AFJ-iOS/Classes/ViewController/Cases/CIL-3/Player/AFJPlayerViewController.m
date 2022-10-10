//
//  AFJPlayerViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/7.
//

#import "AFJPlayerViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "ZFViewController.h"
#import "ZFNotAutoPlayViewController.h"

@interface AFJPlayerViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJPlayerViewController

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
        item.cName = @"各类视频播放样式";
        item.didSelectAction = ^(id data) {
            ZFViewController *zfVC = [[ZFViewController alloc] init];
            [weakSelf.navigationController pushViewController:zfVC animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"更多视频播放示例";
        item.didSelectAction = ^(id data) {
            ZFNotAutoPlayViewController *vc = [[ZFNotAutoPlayViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
