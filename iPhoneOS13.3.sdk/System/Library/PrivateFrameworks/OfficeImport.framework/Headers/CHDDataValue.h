//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValue : NSObject
{
    struct CHDDataPoint mDataPoint;
}

+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue )arg2;
+ (id)dataValue;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (id)contentFormatWithResources:(id)arg1;
- (void)setDataPoint:(struct CHDDataPoint )arg1;
- (struct CHDDataPoint )dataPoint;
- (void)setValue:(struct EDValue )arg1;
- (struct EDValue )value;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (id)initWithIndex:(long long)arg1 value:(struct EDValue )arg2;
- (id)init;
- (void)setContentFormatId:(NSUInteger)arg1;
- (NSUInteger)contentFormatId;

@end

