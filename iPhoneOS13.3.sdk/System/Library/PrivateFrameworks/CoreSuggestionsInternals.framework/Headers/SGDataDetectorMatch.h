//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, NSTimeZone;

@interface SGDataDetectorMatch : NSObject <NSSecureCoding>
{
    BOOL _allDay;
    unsigned int _matchType;
    int _parsecDomain;
    NSString *_valueString;
    NSString *_labelString;
    NSString *_parsecWikidataQid;
    NSDate *_detectedDate;
    NSTimeZone *_detectedTimeZone;
    _NSRange _range;
    _NSRange _labelRange;
    _NSRange _valueRange;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSTimeZone *detectedTimeZone; // @synthesize detectedTimeZone=_detectedTimeZone;
@property(readonly, nonatomic) NSDate *detectedDate; // @synthesize detectedDate=_detectedDate;
@property(readonly, nonatomic) NSString *parsecWikidataQid; // @synthesize parsecWikidataQid=_parsecWikidataQid;
@property(readonly, nonatomic) int parsecDomain; // @synthesize parsecDomain=_parsecDomain;
@property(readonly, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property(readonly, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(readonly, nonatomic) _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(readonly, nonatomic) _NSRange labelRange; // @synthesize labelRange=_labelRange;
@property(readonly, nonatomic) _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataDetectorMatch:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDetectedDate:(id)arg1 detectedTimeZone:(id)arg2 matchType:(unsigned int)arg3 range:(_NSRange)arg4 labelRange:(_NSRange)arg5 labelString:(id)arg6 valueRange:(_NSRange)arg7 valueString:(id)arg8 allDay:(BOOL)arg9;
- (id)initWithLookupHintInDomain:(int)arg1 range:(_NSRange)arg2 labelRange:(_NSRange)arg3 labelString:(id)arg4 valueRange:(_NSRange)arg5 valueString:(id)arg6 qid:(id)arg7;
- (id)initWithMatchType:(unsigned int)arg1 range:(_NSRange)arg2 labelRange:(_NSRange)arg3 labelString:(id)arg4 valueRange:(_NSRange)arg5 valueString:(id)arg6;

@end
