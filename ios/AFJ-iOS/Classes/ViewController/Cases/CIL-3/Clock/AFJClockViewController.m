//
//  AFJClockViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/26.
//

#import "AFJClockViewController.h"
#import "AFJClockSampleViewController.h"

@interface AFJClockViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJClockViewController

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
        item.cName = @"数字时钟";
        item.didSelectAction = ^(id data) {
            AFJClockSampleViewController *vc = [[AFJClockSampleViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
            [vc setupClockType:1];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"指针时钟";
        item.didSelectAction = ^(id data) {
            AFJClockSampleViewController *vc = [[AFJClockSampleViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
            [vc setupClockType:2];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

