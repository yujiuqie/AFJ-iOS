//
//  AFJMiniAppViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/29.
//

#import "AFJMiniAppViewController.h"
#import <FinApplet/FinApplet.h>

@interface AFJMiniAppViewController ()

@end

@implementation AFJMiniAppViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    [self setupWebViewWith:nil];
}

- (void)jumpToDemo {
    FATAppletRequest *request = [[FATAppletRequest alloc] init];
    request.appletId = @"630c7a8b73a4600001ead50a";
    request.apiServer = @"https://api.finclip.com";
    request.transitionStyle = FATTranstionStyleUp;
    request.startParams = @{@"test key": @"test value"};

    [[FATClient sharedClient] startAppletWithRequest:request InParentViewController:self completion:^(BOOL result, FATError *error) {
        NSLog(@"打开小程序:%@", error);
    }                                closeCompletion:^{
        NSLog(@"关闭小程序");
    }];
}


@end
