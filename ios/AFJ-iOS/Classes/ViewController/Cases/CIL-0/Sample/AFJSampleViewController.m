//
//  AFJSampleViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/17.
//

#import "AFJSampleViewController.h"

@interface AFJSampleViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJSampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    NSArray *array = @[
            @[@"模拟qq扫码界面", @"qqStyle"],
            @[@"模仿支付宝扫码区域", @"ZhiFuBaoStyle"],
            @[@"模仿微信扫码区域", @"weixinStyle"],
            @[@"无边框，内嵌4个角", @"InnerStyle"],
            @[@"4个角在矩形框线上,网格动画", @"OnStyle"],
            @[@"自定义颜色", @"changeColor"],
            @[@"只识别框内", @"recoCropRect"],
            @[@"改变尺寸", @"changeSize"],
            @[@"条形码效果", @"notSquare"],
            @[@"二维码/条形码生成", @"createBarCode"],
            @[@"相册", @"openLocalPhotoAlbum"]
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
