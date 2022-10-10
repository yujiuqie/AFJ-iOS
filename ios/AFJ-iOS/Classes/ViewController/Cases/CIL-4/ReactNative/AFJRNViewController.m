//
//  AFJRNViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/29.
//

#import "AFJRNViewController.h"
#import <React/RCTRootView.h>

@interface AFJRNViewController ()

@end

@implementation AFJRNViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor whiteColor];
    [self initRCTRootView];
}

- (void)initRCTRootView {
    NSURL *jsCodeLocation;

    // jsCodeLocation = [NSURL URLWithString:@"http://localhost:8081/index.bundle?platform=ios"]; //手动拼接jsCodeLocation用于开发环境 //jsCodeLocation = [[NSBundle mainBundle] URLForResource:@"main" withExtension:@"jsbundle"]; //release之后从包中读取名为main的静态js bundle

    //    TODO:: RN 发布 npm run build
    jsCodeLocation = [[NSBundle mainBundle] URLForResource:@"rn" withExtension:@"jsbundle"];
    //    TODO:: RN 调试 npm run start
//    jsCodeLocation = [[RCTBundleURLProvider sharedSettings] jsBundleURLForBundleRoot:@"index" fallbackResource:nil];

    RCTRootView *rootView = [[RCTRootView alloc] initWithBundleURL:jsCodeLocation moduleName:@"App" initialProperties:nil
                                                     launchOptions:nil];
    self.view = rootView;
}

@end
