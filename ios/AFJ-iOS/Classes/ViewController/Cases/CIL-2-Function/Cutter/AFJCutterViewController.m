//
//  AFJCutterViewController.m
//  AFJ-iOS
//
//  Created by viktyz on 2022/9/4.
//

#import "AFJCutterViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJCutterViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJCutterViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    __weak typeof(self) weakSelf = self;

    for (int i = 0; i < 5; i++) {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = [self titleArray][i];
        item.cType = [self vcArray][i];
        item.didSelectAction = ^(id data) {
            [weakSelf didClick:data];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

- (void)didClick:(AFJCaseItemData *)item {
    UIViewController *vc = [[NSClassFromString(item.cType) alloc] init];
    vc.title = item.cName;
    [self.navigationController pushViewController:vc animated:YES];
}

- (NSArray *)titleArray {
    return @[@"UIViewController截屏-无导航",
            @"UIViewController截屏-有导航",
            @"UITableview截屏",
            @"UICollectionView截屏",
            @"UIWebView截屏"];
}

- (NSArray *)vcArray {
    return @[@"UIViewControllerCutter",
            @"UIViewControllerCutter2",
            @"UITableviewCutter",
            @"UICollectionViewCutter",
            @"UIWebViewCutter"];
}

@end

