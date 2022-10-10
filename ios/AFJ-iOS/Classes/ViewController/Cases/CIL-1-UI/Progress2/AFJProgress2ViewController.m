//
//  AFJProgress2ViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/11.
//

#import "AFJProgress2ViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJProgress2ViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJProgress2ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH - StatusBarAndNavigationBarHeight)];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    NSArray *array = @[
            @[@"Ring", @"RingViewController"],
            @[@"Segmented Ring", @"SegmentedRingViewController"],
            @[@"Pie", @"PieViewController"],
            @[@"Bar", @"BarViewController"],
            @[@"Segmented Bar", @"SegmentedBarViewController"],
            @[@"Bordered Bar", @"BorderedBarViewController"],
            @[@"Striped Bar", @"StripedBarViewController"],
            @[@"Progress Bar", @"M13ProgressViewBarNavigationControllerViewController"],
            @[@"Image", @"ImageViewController"],
            @[@"Filtered Image", @"FilteredImageViewController"],
            @[@"Metro", @"MetroViewController"],
            @[@"Radiative", @"RadiativeViewController"],
            @[@"Letterpress", @"LetterpressViewController"],
            @[@"HUD", @"ProgressHUDViewController"],
            @[@"Console", @"ConsoleViewController"],
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
