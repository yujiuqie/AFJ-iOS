//
//  NSTimer+JKBlocks.m
//
//  Created by Jiva DeVoe on 1/14/11.
//  Copyright 2011 Random Ideas, LLC. All rights reserved.
//

@implementation NSTimer (JKBlocks)

+ (id)jk_scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)(void))inBlock repeats:(BOOL)inRepeats {
    void (^block)(void) = [inBlock copy];
    id ret = [self scheduledTimerWithTimeInterval:inTimeInterval target:self selector:@selector(jk_jdExecuteSimpleBlock:) userInfo:block repeats:inRepeats];
    return ret;
}

+ (id)jk_timerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)(void))inBlock repeats:(BOOL)inRepeats {
    void (^block)(void) = [inBlock copy];
    id ret = [self timerWithTimeInterval:inTimeInterval target:self selector:@selector(jk_jdExecuteSimpleBlock:) userInfo:block repeats:inRepeats];
    return ret;
}

+ (void)jk_jdExecuteSimpleBlock:(NSTimer *)inTimer; {
    if ([inTimer userInfo]) {
        void (^block)(void) = (void (^)(void)) [inTimer userInfo];
        block();
    }
}

@end
