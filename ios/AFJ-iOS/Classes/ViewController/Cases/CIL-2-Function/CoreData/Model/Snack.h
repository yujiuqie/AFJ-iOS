//
//  Snack.h
//  TMagicalRecord
//
//  Created by 黑花白花 on 2017/3/18.
//  Copyright © 2017年 黑花白花. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Snack : NSObject

@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *taste;

@property(assign, nonatomic) float size;
@property(assign, nonatomic) float price;
@property(assign, nonatomic) NSInteger snackId;

+ (instancetype)instanceWithId:(NSUInteger)ID;
@end
