//
//  DemoMenu.m
//  BKDevMenu
//
//  Created by luzz on 2021/11/12.
//

#import "DemoMenu.h"


@implementation DemoMenu
- (void)addingTestPages {


    //    /// 添加全局切换状态模块
    [self addTestSegmentWithTitle:@"样式" segments:@[@"侧滑", @"TAB"] defaultIndex:^NSInteger {
        return [kAppDelegate rVCType];
    }                   segAction:^(NSInteger index, UINavigationController *_Nonnull nav) {
        /// 根据index自行实现切换逻辑
        [kAppDelegate setRVCType:index];
    }];

    //    /// 添加全局切换状态模块
    [self addTestSegmentWithTitle:@"导航" segments:@[@"显示", @"隐藏"] defaultIndex:^NSInteger {
        return [kAppDelegate navHome].navigationBarHidden ? 1 : 0;
    }                   segAction:^(NSInteger index, UINavigationController *_Nonnull nav) {
        /// 根据index自行实现切换逻辑
        if (index == 0) {
            [nav setNavigationBarHidden:NO animated:YES];
        } else {
            [nav setNavigationBarHidden:YES animated:YES];
        }
    }];

    [self addTestPageWithTitle:@"返回" andAction:^(UINavigationController *_Nonnull nav) {
        [kAppDelegate back];
    }];

    [self addTestPageWithTitle:@"首页" andAction:^(UINavigationController *_Nonnull nav) {
        [kAppDelegate backHome];
    }];

    /// 添加沙盒文件浏览器模块
    NSUserDefaults *df = [[NSUserDefaults alloc] initWithSuiteName:@"www.demo.luzz"];
    [self addSandBoxViewer:@[df]];

    /// 添加app内置控制台模块
    [self addAppConsole];


//    /// 添加快速登陆模块
//    [self addQuickLoginUserListWithLoginAction:^(UINavigationController * _Nonnull nav, BKDevQuickLoginUserModel * _Nonnull user) {
//        // 具体实现登陆的逻辑
//    }];

}
@end
