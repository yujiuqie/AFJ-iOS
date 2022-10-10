//
//  AFJLoginRegistViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/8.
//

#import "AFJLoginRegistViewController.h"
#import "SUPRegisterViewController.h"
#import "AFJLoginSampleViewController.h"

@interface AFJLoginRegistViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJLoginRegistViewController

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
        item.cName = @"登录示例";
        item.didSelectAction = ^(id data) {
            AFJLoginSampleViewController *vc = [[AFJLoginSampleViewController alloc] init];
            [weakSelf presentViewController:vc animated:YES completion:nil];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"注册示例";
        item.didSelectAction = ^(id data) {
            SUPRegisterViewController *vc = [[SUPRegisterViewController alloc] init];
            UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
            [weakSelf presentViewController:nav animated:YES completion:nil];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

