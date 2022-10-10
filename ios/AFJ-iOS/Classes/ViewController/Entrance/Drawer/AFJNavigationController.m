//
//  AFJNavigationController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/9.
//

#import "AFJNavigationController.h"
#import "UIViewController+MMDrawerController.h"

@interface AFJNavigationController ()

@end

@implementation AFJNavigationController

- (UIStatusBarStyle)preferredStatusBarStyle {
    if (self.mm_drawerController.showsStatusBarBackgroundView) {
        return UIStatusBarStyleLightContent;
    } else {
        return UIStatusBarStyleDefault;
    }
}

@end
