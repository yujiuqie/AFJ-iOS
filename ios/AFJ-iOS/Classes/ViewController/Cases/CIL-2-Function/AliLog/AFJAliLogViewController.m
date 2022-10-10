//
//  AFJAliLogViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/28.
//

#import "AFJAliLogViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"

@interface AFJAliLogViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJAliLogViewController

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
        item.cName = @"测试日志写入";
        item.didSelectAction = ^(id data) {
            TLogBiz *log = [TLogFactory createTLogForModuleName:@"AFJAliLogViewController"];
            [log error:@"AFJAliLogViewController error message test"];
            [log warn:@"AFJAliLogViewController warn message test"];
            [log debug:@"AFJAliLogViewController debug message test"];
            [log info:@"AFJAliLogViewController info message test"];
            [weakSelf showToastWithMessage:@"已写入测试日志"];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"测试日志上传";
        item.didSelectAction = ^(id data) {
            [AlicloudTlogProvider uploadTLog:@"AFJAliLogViewController Test Log"];
            [weakSelf showToastWithMessage:@"已上传测试日志"];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end

