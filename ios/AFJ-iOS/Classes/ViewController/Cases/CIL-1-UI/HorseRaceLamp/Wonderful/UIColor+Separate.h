//
//  UIColor+Separate.h
//  Wonderful
//
//  Created by dongshangxian on 15/11/1.
//  Copyright © 2015年 Sankuai. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SXColorType) {
    SXColorTypeRed = 1,
    SXColorTypeGreen = 2,
    SXColorTypeBlue = 3,
    SXColorTypeAlpha = 4
};

@interface UIColor (Separate)

- (CGColorSpaceModel)colorSpaceModel;

- (CGFloat)red;

- (CGFloat)green;

- (CGFloat)blue;

- (CGFloat)alpha;

- (UIColor *)reverseColor;

- (NSString *)printDetail;

- (UIColor *)up:(SXColorType)type num:(NSInteger)num;

- (UIColor *)down:(SXColorType)type num:(NSInteger)num;

@end