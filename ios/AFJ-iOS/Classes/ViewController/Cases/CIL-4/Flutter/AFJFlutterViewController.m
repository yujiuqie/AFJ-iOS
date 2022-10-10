//
//  AFJFlutterViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/27.
//

#import "AFJFlutterViewController.h"

@interface AFJFlutterViewController ()

@property(nonatomic, strong) FlutterViewController *vc;

@end

@implementation AFJFlutterViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    FlutterViewController *vc = [[FlutterViewController alloc] initWithEngine:[kAppDelegate flutter_eng] nibName:nil bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
