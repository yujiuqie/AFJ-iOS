//
//  AFJGCDViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/14.
//

#import "AFJGCDViewController.h"
#import "NSThreadViewController.h"
#import "GCDViewController.h"
#import "GCD2ViewController.h"

@interface AFJGCDViewController ()
@property(nonatomic, copy) NSArray *items;
@end

@implementation AFJGCDViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"GCD 编程示例";
    self.items = @[@"NSThread", @"GCD1", @"GCD2"];

    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cell"];
}

#pragma mark - <UITableViewDataSource>

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.items.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:indexPath];
    cell.textLabel.text = self.items[indexPath.row];
    return cell;
}

#pragma mark - <UITableViewDelegate>

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    switch (indexPath.row) {
        case 0: {
            NSThreadViewController *vc = [[NSThreadViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
            break;
        }
        case 1: {
            GCDViewController *vc = [[GCDViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
            break;
        }
        case 2: {
            GCD2ViewController *vc = [[GCD2ViewController alloc] init];
            [self.navigationController pushViewController:vc animated:YES];
            break;
        }
        case 3: {

            break;
        }
        default:
            break;
    }

}

@end
