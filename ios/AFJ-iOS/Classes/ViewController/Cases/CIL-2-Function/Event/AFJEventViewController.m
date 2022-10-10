//
//  AFJEventViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/8.
//

#import "AFJEventViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "YBEventCalendar.h"

@interface AFJEventViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJEventViewController

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
        item.cName = @"添加日历事件";
        item.didSelectAction = ^(id data) {
            [YBEventCalendar createEventCalendarTitle:@"事件测试" location:@"上海" startDate:[[NSDate date] dateByAddingDays:1] endDate:[[NSDate date] dateByAddingDays:2] allDay:YES alarmArray:@[@"-86400", @"-43200", @"-21600", @"-3600"] completion:^(BOOL granted, NSError *error) {

                if (error) {
                    [self.view makeToast:error.localizedDescription];
                } else {
                    [MBProgressHUD showSuccess:@"添加成功" ToView:self.view];
                }
            }];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
