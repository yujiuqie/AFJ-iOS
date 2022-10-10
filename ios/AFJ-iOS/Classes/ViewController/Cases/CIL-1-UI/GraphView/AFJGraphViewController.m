//
//  AFJGraphViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/17.
//

#import "AFJGraphViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "YMGraphView.h"
#import "GraphViewController.h"

@interface AFJGraphViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJGraphViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"图表示例";

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    NSArray *array = @[
            @[@"散点图", @(YMGraphViewStyleScatter)],
            @[@"饼状图", @(YMGraphViewStylePie)],
            @[@"柱状图", @(YMGraphViewStyleHist)],
            @[@"环状图", @(YMGraphViewStyleAnnular)],
            @[@"折线线", @(YMGraphViewStyleLine)],
            @[@"多条折线", @(YMGraphViewStyleMultiLine)],
            @[@"函数", @(-1)]
    ];

    __weak typeof(self) weakSelf = self;
    for (NSArray *arr in array) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = [arr firstObject];
        item.cType = [[arr lastObject] stringValue];
        item.didSelectAction = ^(id data) {
            [weakSelf colorCellAction:data];
        };
        [dataArray addObject:item];
    }

    [self.tableView reloadDataArray:dataArray];
}

- (void)colorCellAction:(id)data {
    AFJCaseItemData *item = data;
    NSLog(@"click %@ item", item.cName);

    GraphViewController *graphVC = [[GraphViewController alloc] init];
    graphVC.style = (YMGraphViewStyle) [item.cType integerValue];
    [self.navigationController pushViewController:graphVC animated:YES];
}

@end
