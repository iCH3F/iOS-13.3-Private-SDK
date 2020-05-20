//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SPSchedulerInformation : NSObject <NSSecureCoding>
{
    long long _advertisementCount;
    long long _priorityCount;
    long long _lowBatteryCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long lowBatteryCount; // @synthesize lowBatteryCount=_lowBatteryCount;
@property(nonatomic) long long priorityCount; // @synthesize priorityCount=_priorityCount;
@property(nonatomic) long long advertisementCount; // @synthesize advertisementCount=_advertisementCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

