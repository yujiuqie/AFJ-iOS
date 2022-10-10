//
//  AFJMenuViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/9.
//

#import "AFJMenuViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "AFJSearchListViewController.h"
#import "AFJProduct.h"
#import "UIViewController+MMDrawerController.h"
#import "MMDrawerBarButtonItem.h"
#import "AFJProductManager.h"

@interface AFJMenuViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *homeTableView;

@end

@implementation AFJMenuViewController

- (id)init {
    self = [super init];
    if (self) {
        [self setRestorationIdentifier:@"AFJCenterControllerRestorationKey"];
    }
    return self;
}


- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"示例";

    self.homeTableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.homeTableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.homeTableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cType = @"0";
        item.cName = @"全部";
        item.cList = [[AFJProductManager sharedInstance] fullProductList];
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf colorCellAction:data];
        };
        [dataArray addObject:item];
    }

    NSArray *fullItems = [[AFJProductManager sharedInstance] fullItemList];
    for (AFJCaseItemData *item in fullItems) {
        __weak typeof(self) weakSelf = self;
        item.didSelectAction = ^(id data) {
            [weakSelf colorCellAction:data];
        };
        [dataArray addObject:item];
    }

    [self.homeTableView reloadDataArray:dataArray];
}

- (void)colorCellAction:(id)data {
    [self.mm_drawerController closeDrawerAnimated:YES completion:^(BOOL finished) {
        if (finished) {
            AFJCaseItemData *item = data;
            NSLog(@"click %@ item", item.cName);
            [kAppDelegate selectedLeftVCIndex:item];
        }
    }];
}

@end
