//
//  AFJMoreViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/11.
//

#import "AFJMoreViewController.h"

@interface AFJMoreViewController ()

@end

@implementation AFJMoreViewController

- (id)init {
    self = [super init];
    if (self) {
        [self setRestorationIdentifier:@"AFJRightSideDrawerController"];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor greenColor];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
