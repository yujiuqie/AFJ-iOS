//
//  AFJSearchListViewController.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AFJProduct : NSObject <NSCoding>

@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *entrance;
@property(nonatomic, copy) NSString *hasDemo;
@property(nonatomic, copy) NSString *link;

@end
