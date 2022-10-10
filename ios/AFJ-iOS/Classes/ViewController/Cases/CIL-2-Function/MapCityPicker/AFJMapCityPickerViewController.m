//
//  AFJMapCityPickerViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/13.
//

#import "AFJMapCityPickerViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "HQLCityPickerController.h"

@interface AFJMapCityPickerViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJMapCityPickerViewController

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
        item.cName = @"定位并选择当前城市";
        item.didSelectAction = ^(id data) {
            HQLCityPickerController *cityPickerController = [[HQLCityPickerController alloc] initWithStyle:UITableViewStylePlain];
            cityPickerController.completionBlock = ^(NSString *_Nonnull cityCode, NSString *_Nonnull cityName) {
                [weakSelf showToastWithMessage:[NSString stringWithFormat:@"选择城市 ： %@(%@)", cityName, cityCode]];
            };
            [weakSelf.navigationController pushViewController:cityPickerController animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
