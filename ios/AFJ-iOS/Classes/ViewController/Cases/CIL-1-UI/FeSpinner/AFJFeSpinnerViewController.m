//
//  AFJFeSpinnerViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/24.
//

#import "AFJFeSpinnerViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

#import "FeEqualizerViewController.h"
#import "FeHandwritingViewController.h"
#import "FeHourGlassViewController.h"
#import "FeLoadingBoxViewController.h"
#import "FeRollingViewController.h"
#import "FeSpinnerTenDotViewController.h"
#import "FeThreeDotGlowViewController.h"
#import "FeVietNamLoaderViewController.h"
#import "FeWifiManViewController.h"
#import "FeZeroLoaderViewController.h"

@interface AFJFeSpinnerViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJFeSpinnerViewController

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
        item.cName = @"Three Dot Glow";
        item.didSelectAction = ^(id data) {
            FeThreeDotGlowViewController *vc = [FeThreeDotGlowViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Handwriting";
        item.didSelectAction = ^(id data) {
            FeHandwritingViewController *vc = [FeHandwritingViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Rolling";
        item.didSelectAction = ^(id data) {
            FeRollingViewController *vc = [FeRollingViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Zero";
        item.didSelectAction = ^(id data) {
            FeZeroLoaderViewController *vc = [FeZeroLoaderViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Equalizer";
        item.didSelectAction = ^(id data) {
            FeEqualizerViewController *vc = [FeEqualizerViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"HourGlass";
        item.didSelectAction = ^(id data) {
            FeHourGlassViewController *vc = [FeHourGlassViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"WifiManHub";
        item.didSelectAction = ^(id data) {
            FeWifiManViewController *vc = [FeWifiManViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Viet Nam Loader";
        item.didSelectAction = ^(id data) {
            FeVietNamLoaderViewController *vc = [FeVietNamLoaderViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Loading Box";
        item.didSelectAction = ^(id data) {
            FeLoadingBoxViewController *vc = [FeLoadingBoxViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Spinner Ten Dot";
        item.didSelectAction = ^(id data) {
            FeSpinnerTenDotViewController *vc = [FeSpinnerTenDotViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
