//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SDTraceItem : NSObject <NSCopying>
{
    double _startTime;
    long long _identifier;
    double _duration;
    NSString *_label;
    NSObject *_data;
    NSString *_string;
}

+ (void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3;
+ (id)stringFromReferenceDate:(double)arg1;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;

@end

