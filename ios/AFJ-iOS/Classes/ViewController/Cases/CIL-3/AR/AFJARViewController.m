//
//  AFJARViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/17.
//

#import "AFJARViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "ARViewController.h"

@interface AFJARViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJARViewController

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
        item.cName = @"AR 示例";
        item.didSelectAction = ^(id data) {
            ARViewController *vc = [[ARViewController alloc] initWithNibName:@"ARViewController" bundle:nil];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
