//
//  CustomCollectionView.h
//  SwipeTableView
//
//  Created by Roy lee on 16/4/1.
//  Copyright © 2016年 Roy lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STCollectionView.h"

@interface CustomCollectionView : STCollectionView

- (void)refreshWithData:(id)data atIndex:(NSInteger)index;

@end
