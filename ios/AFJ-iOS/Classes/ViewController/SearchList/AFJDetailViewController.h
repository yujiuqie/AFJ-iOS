//
//  AFJDetailViewController.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AFJProduct;

@interface AFJDetailViewController : UIViewController

@property(nonatomic, strong) AFJProduct *product;

@end

NS_ASSUME_NONNULL_END
