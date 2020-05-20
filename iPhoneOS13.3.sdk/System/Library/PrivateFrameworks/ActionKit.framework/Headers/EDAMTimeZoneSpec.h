//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMTimeZoneSpec : FATObject
{
    NSString *_id;
    NSNumber *_rawUTCOffsetMillis;
    NSNumber *_dstSavingsAdjustmentMillis;
    NSNumber *_nextEnterDaylightSavings;
    NSNumber *_nextLeaveDaylightSavings;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *nextLeaveDaylightSavings; // @synthesize nextLeaveDaylightSavings=_nextLeaveDaylightSavings;
@property(retain, nonatomic) NSNumber *nextEnterDaylightSavings; // @synthesize nextEnterDaylightSavings=_nextEnterDaylightSavings;
@property(retain, nonatomic) NSNumber *dstSavingsAdjustmentMillis; // @synthesize dstSavingsAdjustmentMillis=_dstSavingsAdjustmentMillis;
@property(retain, nonatomic) NSNumber *rawUTCOffsetMillis; // @synthesize rawUTCOffsetMillis=_rawUTCOffsetMillis;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
// - (void).cxx_destruct;

@end

