//
//  AFJTableViewCellViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/22.
//

#import "AFJTableViewCellViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJSampleCell1ViewController.h"

@interface AFJTableViewCellViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJTableViewCellViewController

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
        item.cName = @"Cell 菜单样式一";
        item.didSelectAction = ^(id data) {
            AFJSampleCell1ViewController *vc = [[AFJSampleCell1ViewController alloc] initWithNibName:@"AFJSampleCell1ViewController" bundle:nil];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
