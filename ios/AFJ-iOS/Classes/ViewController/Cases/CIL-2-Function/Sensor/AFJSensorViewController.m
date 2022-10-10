//
//  AFJSensorViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/17.
//

#import "AFJSensorViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "FingerprintViewController.h"
#import "DeviceMotionViewController.h"
#import "AccelerometerViewController.h"
#import "DistanceSensorViewController.h"
#import "LightSensitiveViewController.h"
#import "CompassViewController.h"
#import "GyroscopeViewController.h"

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

@interface AFJSensorViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJSensorViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"传感器示例";

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    NSArray *array = @[
//                        @[@"指纹识别",@"FingerprintViewController"],
            @[@"运动传感器 - 图片旋转", @"DeviceMotionViewController"],
            @[@"加速计 物理学 - 滚动小球", @"AccelerometerViewController"],
            @[@"距离传感器 - 扬声器/听筒切换", @"DistanceSensorViewController"],
            @[@"环境光感 - 利用摄像头捕捉光感参数", @"LightSensitiveViewController"],
            @[@"磁力计 - 仿系统的指南针", @"CompassViewController"],
            @[@"陀螺仪", @"GyroscopeViewController"]
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
