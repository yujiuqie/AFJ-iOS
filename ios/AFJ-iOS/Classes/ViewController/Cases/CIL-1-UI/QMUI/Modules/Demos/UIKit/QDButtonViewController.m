//
//  QDButtonViewController.m
//  qmui
//
//  Created by QMUI Team on 14/11/6.
//  Copyright (c) 2014年 QMUI Team. All rights reserved.
//

#import "QDButtonViewController.h"
#import "QDNormalButtonViewController.h"
#import "QDNavigationButtonViewController.h"
#import "QDToolBarButtonViewController.h"
#import "QDButtonEdgeInsetsViewController.h"

@implementation QDButtonViewController

- (void)initDataSource {
    self.dataSource = @[@"QMUIButton",
            @"QMUINavigationButton",
            @"QMUIToolbarButton"];
}

- (void)didSelectCellWithTitle:(NSString *)title {
    UIViewController *viewController = nil;
    if ([title isEqualToString:@"QMUIButton"]) {
        viewController = [[QDNormalButtonViewController alloc] init];
    } else if ([title isEqualToString:@"QMUINavigationButton"]) {
        viewController = [[QDNavigationButtonViewController alloc] init];
    } else if ([title isEqualToString:@"QMUIToolbarButton"]) {
        viewController = [[QDToolBarButtonViewController alloc] init];
    }
    viewController.title = title;
    [self.navigationController pushViewController:viewController animated:YES];
}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    if (motion == UIEventSubtypeMotionShake) {
        QDButtonEdgeInsetsViewController *viewController = [[QDButtonEdgeInsetsViewController alloc] init];
        QDNavigationController *navController = [[QDNavigationController alloc] initWithRootViewController:viewController];
        [self presentViewController:navController animated:YES completion:NULL];
    }
}

@end
