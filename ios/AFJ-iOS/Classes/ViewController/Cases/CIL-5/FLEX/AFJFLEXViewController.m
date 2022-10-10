//
//  AFJFLEXViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/17.
//

#import "AFJFLEXViewController.h"
#import "FLEX.h"

@interface AFJFLEXViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;
@property(nonatomic, strong) NSTimer *repeatingLogExampleTimer;
@property(nonatomic, assign) NSInteger exampleLogSent;

@end

@implementation AFJFLEXViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"FLEX 示例";

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"测试 FLEX 日志显示";
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf testFlexLog];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"测试 FLEX 网络日志";
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf testFlexNetwork];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"测试 FLEX 归档日志";
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf testFlexArchiver];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"打开 FLEX";
        item.didSelectAction = ^(id data) {
            [[FLEXManager sharedManager] showExplorer];
        };
        [dataArray addObject:item];
    }

    [self.tableView reloadDataArray:dataArray];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    [self.repeatingLogExampleTimer invalidate];
}

- (void)testFlexLog {

    [self showToastWithMessage:@"已生成 9 条 Example Log"];

    __weak typeof(self) weakSelf = self;
    [self.repeatingLogExampleTimer invalidate];
    self.repeatingLogExampleTimer = [NSTimer scheduledTimerWithTimeInterval:3 repeats:YES block:^(NSTimer *_Nonnull timer) {
        NSLog(@"Example log : %ld", (long) weakSelf.exampleLogSent);
        weakSelf.exampleLogSent += 1;
        if (weakSelf.exampleLogSent >= 10) {
            [weakSelf.repeatingLogExampleTimer invalidate];
        }
    }];

}

- (void)testFlexNetwork {
    [self showToastWithMessage:@"已发送 HTTP 及 WebSocket 测试请求"];

    [MiscNetworkRequests sendExampleRequests];
}

- (void)testFlexArchiver {
    [self showToastWithMessage:@"已保存 Bob.plist 测试文件"];

    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    NSString *bobPath = [documentsDirectory stringByAppendingPathComponent:@"Bob.plist"];
    if (@available(iOS 11.0, *)) {
        [[NSKeyedArchiver archivedDataWithRootObject:[Person bob] requiringSecureCoding:NO error:nil] writeToURL:[NSURL fileURLWithPath:bobPath] options:NSDataWritingAtomic error:nil];
    } else {
        // Fallback on earlier versions
    }
}

@end
