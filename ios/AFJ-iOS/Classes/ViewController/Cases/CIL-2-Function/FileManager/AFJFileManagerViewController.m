//
//  AFJFileManagerViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/14.
//

#import "AFJFileManagerViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "HQLSandBoxPathViewController.h"
#import "HQLConvertPathViewController.h"
#import "HQLFileBasicUsageViewController.h"
#import "HQLFIleManagerUsuallyMethodViewController.h"

@interface AFJFileManagerViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJFileManagerViewController

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
        item.cName = @"沙盒目录路径示例";
        item.didSelectAction = ^(id data) {
            HQLSandBoxPathViewController *vc = [[HQLSandBoxPathViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"路径类型转换";
        item.didSelectAction = ^(id data) {
            HQLConvertPathViewController *vc = [[HQLConvertPathViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"复制、移动、删除、枚举";
        item.didSelectAction = ^(id data) {
            HQLFileBasicUsageViewController *vc = [[HQLFileBasicUsageViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"常用操作";
        item.didSelectAction = ^(id data) {
            HQLFIleManagerUsuallyMethodViewController *vc = [[HQLFIleManagerUsuallyMethodViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
