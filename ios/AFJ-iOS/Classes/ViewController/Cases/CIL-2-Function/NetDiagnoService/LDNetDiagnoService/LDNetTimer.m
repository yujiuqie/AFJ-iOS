//
//  LDNetTimer.m
//  LDNetDiagnoServieDemo
//
//  Created by zhaojian on 14-10-29.
//  Copyright (c) 2017年 zhaojian. All rights reserved.
//
#include <sys/time.h>
#import "LDNetTimer.h"

@implementation LDNetTimer

/**
 * Retourne un timestamp en microsecondes.
 */
+ (long)getMicroSeconds {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_usec;
}

/**
 * Calcule une durée en millisecondes par rapport au timestamp passé en paramètre.
 */
+ (long)computeDurationSince:(long)uTime {
    long now = [LDNetTimer getMicroSeconds];
    if (now < uTime) {
        return 1000000 - uTime + now;
    }
    return now - uTime;
}


@end
