//
//  AFJAudioViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/13.
//

#import "AFJAudioViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJAudioViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJAudioViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    NSArray *array = @[
            @[@"录制示例一", @"FirstViewController"],
            @[@"录制示例二", @"SecondViewController"],
            @[@"录制示例三", @"HQLRecorderViewController"],
            @[@"播放示例：StreamingKit", @"StreamViewController"]
    ];

    __weak typeof(self) weakSelf = self;
    for (NSArray *arr in array) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = [arr firstObject];
        item.cType = [arr lastObject];
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

    UIViewController *vc = [[NSClassFromString(item.cType) alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
