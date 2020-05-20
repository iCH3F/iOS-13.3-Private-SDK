//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>


@class NSNumber;

@interface HFPercentFormatter : NSNumberFormatter <NSCopying>
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
+ (id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
// - (void).cxx_destruct;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 range:(inout _NSRange )arg3 error:(out id )arg4;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForRelativePercentValue:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;

@end

