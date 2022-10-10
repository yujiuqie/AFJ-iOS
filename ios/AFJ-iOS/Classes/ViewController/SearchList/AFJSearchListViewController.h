//
//  AFJSearchListViewController.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import "AFJBaseTableViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface AFJSearchListViewController : AFJBaseTableViewController

@property(nonatomic, strong) AFJCaseItemData *item;

- (instancetype)initWith:(AFJCaseItemData *)item;

@end

NS_ASSUME_NONNULL_END
