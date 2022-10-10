//
//  AFJButtonViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/15.
//

#import "AFJButtonViewController.h"
// Controller
#import "ButtonTypeViewController.h"
#import "ButtonStateViewController.h"
#import "ButtonBasicUsageViewController.h"
#import "ButtonTemplate01ViewController.h"
#import "PPNumberButtonViewController.h"
#import "BEMCheckBoxViewController.h"

@interface AFJButtonViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJButtonViewController

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
        item.cName = @"基础用法";
        item.didSelectAction = ^(id data) {
            ButtonBasicUsageViewController *vc = [[ButtonBasicUsageViewController alloc] init];
            vc.title = @"基础用法";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"UIButtonType";
        item.didSelectAction = ^(id data) {
            // UIButtonType
            ButtonTypeViewController *vc = [[ButtonTypeViewController alloc] init];
            vc.title = @"UIButtonType";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"UIControlState";
        item.didSelectAction = ^(id data) {
            // UIControlState
            ButtonStateViewController *vc = [[ButtonStateViewController alloc] init];
            vc.title = @"UIControlState";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"模版：页面底部按钮";
        item.didSelectAction = ^(id data) {
            ButtonTemplate01ViewController *vc = [[ButtonTemplate01ViewController alloc] init];
            vc.title = @"模版：页面底部按钮";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"PPNumberButton示例";
        item.didSelectAction = ^(id data) {
            // PPNumbre Button 示例
            PPNumberButtonViewController *vc = [[PPNumberButtonViewController alloc] init];
            vc.title = @"PPNumberButton示例";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"BEMCheckBox 示例";
        item.didSelectAction = ^(id data) {
            BEMCheckBoxViewController *vc = [[BEMCheckBoxViewController alloc] init];
            vc.title = @"BEMCheckBox 示例";
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }

    [self.tableView reloadDataArray:dataArray];
}

@end
