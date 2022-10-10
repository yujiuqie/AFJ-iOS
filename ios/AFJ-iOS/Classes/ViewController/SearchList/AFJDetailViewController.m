//
//  AFJDetailViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import "AFJDetailViewController.h"
#import "AFJProduct.h"

@interface AFJDetailViewController ()

@property(nonatomic, strong) UILabel *yearLabel;
@property(nonatomic, strong) UILabel *priceLabel;

@end

@implementation AFJDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = self.product.title;

//    self.yearLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 200, 500, 80)];
//    [self.view addSubview:_yearLabel];
//    self.priceLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 400, 500, 80)];
//    [self.view addSubview:_priceLabel];
//    
//    self.yearLabel.text = (self.product.hasDemo).stringValue;
//    
//    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
//    numberFormatter.numberStyle = NSNumberFormatterCurrencyStyle;
//    NSString *priceString = [numberFormatter stringFromNumber:self.product.link];
//    self.priceLabel.text = priceString;
}

#pragma mark - UIStateRestoration

NSString *const AFJViewControllerProductKey = @"AFJViewControllerProductKey";

- (void)encodeRestorableStateWithCoder:(NSCoder *)coder {
    [super encodeRestorableStateWithCoder:coder];

    // encode the product
    [coder encodeObject:self.product forKey:AFJViewControllerProductKey];
}

- (void)decodeRestorableStateWithCoder:(NSCoder *)coder {
    [super decodeRestorableStateWithCoder:coder];

    // restore the product
    self.product = [coder decodeObjectForKey:AFJViewControllerProductKey];
}

@end
