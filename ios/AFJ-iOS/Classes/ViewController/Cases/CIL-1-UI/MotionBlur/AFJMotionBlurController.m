//
//  AFJMotionBlurController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/24.
//

#import "AFJMotionBlurController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJMotionBluSamplerController.h"

@interface AFJMotionBlurController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJMotionBlurController

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
        item.cName = @"运动模糊效果";
        item.didSelectAction = ^(id data) {
            AFJMotionBluSamplerController *vc = [[AFJMotionBluSamplerController alloc] initWithNibName:@"AFJMotionBluSamplerController" bundle:nil];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

