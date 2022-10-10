/*
 Copyright (C) 2015 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 The data model object describing the product displayed in both main and results tables.
 */

#import "AFJProduct.h"

@implementation AFJProduct


#pragma mark - Encoding/Decoding

NSString *const AFJNameKey = @"AFJNameKey";
NSString *const AFJEntranceKey = @"AFJEntranceKey";
NSString *const AFJHasDemoKey = @"AFJHasDemoKey";
NSString *const AFJLinkKey = @"AFJLinkKey";

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    if (self) {
        _title = [aDecoder decodeObjectForKey:AFJNameKey];
        _entrance = [aDecoder decodeObjectForKey:AFJEntranceKey];
        _hasDemo = [aDecoder decodeObjectForKey:AFJHasDemoKey];
        _link = [aDecoder decodeObjectForKey:AFJLinkKey];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [aCoder encodeObject:self.title forKey:AFJNameKey];
    [aCoder encodeObject:self.entrance forKey:AFJEntranceKey];
    [aCoder encodeObject:self.hasDemo forKey:AFJHasDemoKey];
    [aCoder encodeObject:self.link forKey:AFJLinkKey];
}

@end
