//
//  AFJGestureLockViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/16.
//

#import "AFJGestureLockViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "WHC_GestureUnlockScreenVC.h"
#import "AFJCaseItemData.h"

@interface AFJGestureLockViewController () {
    WHC_GestureUnlockScreenVC *vc;
}

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJGestureLockViewController

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
        item.cName = @"设置数字锁屏样式";
        item.didSelectAction = ^(id data) {
            [WHC_GestureUnlockScreenVC setUnlockScreenWithType:ClickNumberType];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"设置路径锁屏样式";
        item.didSelectAction = ^(id data) {
            [WHC_GestureUnlockScreenVC setUnlockScreenWithType:GestureDragType];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"修改手势密码";
        item.didSelectAction = ^(id data) {
            if (![WHC_GestureUnlockScreenVC modifyUnlockPasswrodWithVC:self]) {
                [weakSelf showToastWithMessage:@"先设置手势密码再修改"];
            }

        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"删除手势密码";
        item.didSelectAction = ^(id data) {
            if (![WHC_GestureUnlockScreenVC modifyUnlockPasswrodWithVC:self]) {
                [weakSelf showToastWithMessage:@"先设置手势密码再删除"];
            }

        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
