//
//  AFJCacheViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/7.
//

#import "AFJCacheViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJCacheViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJCacheViewController

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
        item.cName = @"点击查看缓存大小";
        item.didSelectAction = ^(id data) {
            [weakSelf showToastWithMessage:[NSString stringWithFormat:@"当前缓存大小：%0.1f M", [[ClearCacheManager shareClearCacheManager] getCacheSize]]];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"点击清理缓存";
        item.didSelectAction = ^(id data) {
            [[ClearCacheManager shareClearCacheManager] removeCache];
            [weakSelf showToastWithMessage:@"缓存清理完成"];
        };
        [dataArray addObject:item];
    }

    [self.tableView reloadDataArray:dataArray];
}

@end
