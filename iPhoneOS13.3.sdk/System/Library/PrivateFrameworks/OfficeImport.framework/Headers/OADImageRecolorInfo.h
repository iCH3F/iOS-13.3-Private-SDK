//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface OADImageRecolorInfo : NSObject
{
    NSDictionary *mColors;
    NSDictionary *mFills;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)fills;
- (id)colors;
- (id)initWithColors:(id)arg1 fills:(id)arg2;

@end

