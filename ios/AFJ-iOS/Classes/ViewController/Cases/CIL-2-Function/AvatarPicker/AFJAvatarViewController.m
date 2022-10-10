//
//  AFJAvatarViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/7.
//

#import "AFJAvatarViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJImagePickerViewController.h"

@interface AFJAvatarViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJAvatarViewController

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
        item.cName = @"快速获取相册图片";
        item.didSelectAction = ^(id data) {
            [FHXAvatarPicker startSelected:^(UIImage *_Nonnull image) {
                if (image) {
                    [weakSelf showAlertWithImage:image];
                }
            }];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"定制化获取相册图片";
        item.didSelectAction = ^(id data) {
            AFJImagePickerViewController *imagePickerVC = [[AFJImagePickerViewController alloc] init];
            [weakSelf.navigationController pushViewController:imagePickerVC animated:YES];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
