//
//  AFJVisualStateManager.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/9.
//

#import <Foundation/Foundation.h>
#import "MMDrawerVisualState.h"

typedef NS_ENUM(NSInteger, MMDrawerAnimationType) {
    MMDrawerAnimationTypeNone,
    MMDrawerAnimationTypeSlide,
    MMDrawerAnimationTypeSlideAndScale,
    MMDrawerAnimationTypeSwingingDoor,
    MMDrawerAnimationTypeParallax,
};

@interface AFJVisualStateManager : NSObject

@property(nonatomic, assign) MMDrawerAnimationType leftDrawerAnimationType;
@property(nonatomic, assign) MMDrawerAnimationType rightDrawerAnimationType;

+ (AFJVisualStateManager *)sharedManager;

- (MMDrawerControllerDrawerVisualStateBlock)drawerVisualStateBlockForDrawerSide:(MMDrawerSide)drawerSide;

@end
