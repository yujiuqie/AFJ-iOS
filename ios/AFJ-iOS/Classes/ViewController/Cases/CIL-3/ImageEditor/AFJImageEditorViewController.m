//
//  AFJImageEditorViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/20.
//

#import "AFJImageEditorViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJImageSampleViewController.h"
#import "AFJPasterImageViewController.h"

@interface AFJImageEditorViewController()

@property (nonatomic, strong) GPJDataDrivenTableView  *tableView;

@end

@implementation AFJImageEditorViewController

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
        item.cName = @"CLImageEditor";
        item.didSelectAction = ^(id data) {
            AFJImageSampleViewController *vc = [[AFJImageSampleViewController alloc] initWithNibName:@"AFJImageSampleViewController" bundle:nil];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"图像处理(滤镜、标签、贴纸)";
        item.didSelectAction = ^(id data) {
            AFJPasterImageViewController *vc = [[AFJPasterImageViewController alloc] init];
            [weakSelf.navigationController pushViewController:vc animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
