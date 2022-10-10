//
//  AFJStatusBarNotificationViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/24.
//

#import "AFJStatusBarNotificationViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "SBExampleViewController.h"
#import "SBNMainViewController.h"

@interface AFJStatusBarNotificationViewController ()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJStatusBarNotificationViewController

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
        item.cName = @"JDStatusBarNotification";
        item.cType = @"";
        item.didSelectAction = ^(id data) {
            SBExampleViewController *vc = [[SBExampleViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"CRToast";
        item.cType = @"";
        item.didSelectAction = ^(id data) {
            SBNMainViewController *vc = [[SBNMainViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

