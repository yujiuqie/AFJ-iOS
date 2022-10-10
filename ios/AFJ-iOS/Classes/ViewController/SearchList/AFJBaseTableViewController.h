//
//  AFJBaseTableViewController.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AFJProduct;

extern NSString *const kAFJCellIdentifier;

@interface AFJBaseTableViewController : UITableViewController

- (void)configureCell:(UITableViewCell *)cell forProduct:(AFJProduct *)product;

@end

NS_ASSUME_NONNULL_END
