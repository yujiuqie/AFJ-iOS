//
//  AFJBarrageViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/17.
//

#import "AFJBarrageViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "VideoDemoViewController.h"
#import "LiveDemoViewController.h"

@interface AFJBarrageViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJBarrageViewController

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
        item.cName = @"VideoMode";
        item.didSelectAction = ^(id data) {
            VideoDemoViewController *vc = [[VideoDemoViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"LiveMode";
        item.didSelectAction = ^(id data) {
            LiveDemoViewController *vc = [[LiveDemoViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
