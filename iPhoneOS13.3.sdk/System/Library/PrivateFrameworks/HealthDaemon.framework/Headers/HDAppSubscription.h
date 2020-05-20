//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKObjectType, NSString;

@interface HDAppSubscription : NSObject
{
    NSString *_bundleIdentifier;
    long long _dataCode;
    NSUInteger _updateFrequency;
    NSUInteger _lastAnchor;
    long long _lastAckTime;
    long long _launchTimeHysteresis;
}

@property(readonly, nonatomic) long long launchTimeHysteresis; // @synthesize launchTimeHysteresis=_launchTimeHysteresis;
@property(readonly, nonatomic) long long lastAckTime; // @synthesize lastAckTime=_lastAckTime;
@property(readonly, nonatomic) NSUInteger lastAnchor; // @synthesize lastAnchor=_lastAnchor;
@property(readonly, nonatomic) NSUInteger updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property(readonly, nonatomic) long long dataCode; // @synthesize dataCode=_dataCode;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKObjectType *objectType;
- (id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2;
- (id)init;

@end

