//
//  AFJLayoutViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/26.
//

#import "AFJLayoutViewController.h"
#import "VerticalViewController.h"
#import "HorizontalViewController.h"
#import "ZLVerticalViewController.h"
#import "ZLHorzontalViewController.h"

@interface AFJLayoutViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJLayoutViewController

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
        item.cName = @"Vertical 示例";
        item.didSelectAction = ^(id data) {
            VerticalViewController *vc = [[VerticalViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"Horizontal 示例";
        item.didSelectAction = ^(id data) {
            HorizontalViewController *vc = [[HorizontalViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"复杂 Vertical 示例";
        item.didSelectAction = ^(id data) {
            ZLVerticalViewController *vc = [ZLVerticalViewController new];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"复杂 Horizontal 示例";
        item.didSelectAction = ^(id data) {
            ZLHorzontalViewController *vc = [ZLHorzontalViewController new];
            [self.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

- (void)colorCellAction:(id)data {
    AFJCaseItemData *item = data;
    NSLog(@"click %@ item", item.cName);
}

@end
