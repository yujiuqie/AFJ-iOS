//
//  AFJCalendarViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/22.
//

#import "AFJCalendarViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJCalendarViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJCalendarViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];
    
    NSMutableArray *dataArray = [NSMutableArray array];
    
    NSArray *array = @[
            @[@"Range Picker", @"RangePickerViewController"],
            @[@"DIY", @"DIYExampleViewController"],
            @[@"Prev-Next Buttons", @"ButtonsViewController"],
            @[@"Hides Placeholder", @"HidePlaceholderViewController"],
            @[@"Delegate Appearance", @"DelegateAppearanceViewController"],
            @[@"Full Screen ", @"FullScreenExampleViewController"],
            @[@"LoadView", @"LoadViewExampleViewController"]
    ];

    __weak typeof(self) weakSelf = self;
    for (NSArray *arr in array) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = [arr firstObject];
        item.cType = [arr lastObject];
        item.didSelectAction = ^(id data) {
            UIViewController *vc = [[NSClassFromString(item.cType) alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    
    [self.tableView reloadDataArray:dataArray];
}

@end
