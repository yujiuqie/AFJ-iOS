//
//  AFJVisualStateManager.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/9.
//

#import "AFJVisualStateManager.h"

#import <QuartzCore/QuartzCore.h>

@implementation AFJVisualStateManager

+ (AFJVisualStateManager *)sharedManager {
    static AFJVisualStateManager *_sharedManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedManager = [[AFJVisualStateManager alloc] init];
        [_sharedManager setLeftDrawerAnimationType:MMDrawerAnimationTypeParallax];
        [_sharedManager setRightDrawerAnimationType:MMDrawerAnimationTypeParallax];
    });

    return _sharedManager;
}

- (MMDrawerControllerDrawerVisualStateBlock)drawerVisualStateBlockForDrawerSide:(MMDrawerSide)drawerSide {
    MMDrawerAnimationType animationType;
    if (drawerSide == MMDrawerSideLeft) {
        animationType = self.leftDrawerAnimationType;
    } else {
        animationType = self.rightDrawerAnimationType;
    }

    MMDrawerControllerDrawerVisualStateBlock visualStateBlock = nil;
    switch (animationType) {
        case MMDrawerAnimationTypeSlide:
            visualStateBlock = [MMDrawerVisualState slideVisualStateBlock];
            break;
        case MMDrawerAnimationTypeSlideAndScale:
            visualStateBlock = [MMDrawerVisualState slideAndScaleVisualStateBlock];
            break;
        case MMDrawerAnimationTypeParallax:
            visualStateBlock = [MMDrawerVisualState parallaxVisualStateBlockWithParallaxFactor:2.0];
            break;
        case MMDrawerAnimationTypeSwingingDoor:
            visualStateBlock = [MMDrawerVisualState swingingDoorVisualStateBlock];
            break;
        default:
            visualStateBlock = ^(MMDrawerController *drawerController, MMDrawerSide drawerSide, CGFloat percentVisible) {

                UIViewController *sideDrawerViewController;
                CATransform3D transform;
                CGFloat maxDrawerWidth;

                if (drawerSide == MMDrawerSideLeft) {
                    sideDrawerViewController = drawerController.leftDrawerViewController;
                    maxDrawerWidth = drawerController.maximumLeftDrawerWidth;
                } else if (drawerSide == MMDrawerSideRight) {
                    sideDrawerViewController = drawerController.rightDrawerViewController;
                    maxDrawerWidth = drawerController.maximumRightDrawerWidth;
                }

                if (percentVisible > 1.0) {
                    transform = CATransform3DMakeScale(percentVisible, 1.f, 1.f);

                    if (drawerSide == MMDrawerSideLeft) {
                        transform = CATransform3DTranslate(transform, maxDrawerWidth * (percentVisible - 1.f) / 2, 0.f, 0.f);
                    } else if (drawerSide == MMDrawerSideRight) {
                        transform = CATransform3DTranslate(transform, -maxDrawerWidth * (percentVisible - 1.f) / 2, 0.f, 0.f);
                    }
                } else {
                    transform = CATransform3DIdentity;
                }
                [sideDrawerViewController.view.layer setTransform:transform];
            };
            break;
    }
    return visualStateBlock;
}
@end

