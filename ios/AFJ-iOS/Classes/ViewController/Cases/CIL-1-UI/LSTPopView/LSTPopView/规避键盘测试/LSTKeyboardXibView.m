//
//  LSTKeyboardXibView.m
//  LSTPopView_Example
//
//  Created by LoSenTrad on 2020/4/15.
//  Copyright © 2020 490790096@qq.com. All rights reserved.
//

#import "LSTKeyboardXibView.h"

@implementation LSTKeyboardXibView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/


- (IBAction)addBtnAction:(UIButton *)sender {
    if (self.addBlock) {
        self.addBlock(sender);
    }

}


@end
