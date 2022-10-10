//
//  AFJUnityViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/30.
//

#import "AFJUnityViewController.h"

@interface AFJUnityViewController ()

@end

@implementation AFJUnityViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupWebViewWith:nil];
}

- (void)jumpToDemo {
    [kAppDelegate showUnityView];
}

@end
