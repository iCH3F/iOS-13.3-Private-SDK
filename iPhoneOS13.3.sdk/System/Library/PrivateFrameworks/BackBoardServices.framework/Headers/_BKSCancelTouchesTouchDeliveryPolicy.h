//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject;
@protocol OS_xpc_object;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy
{
    unsigned int _contextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
    double _initialTouchTimestamp;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double initialTouchTimestamp; // @synthesize initialTouchTimestamp=_initialTouchTimestamp;
@property(readonly, nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
// - (void).cxx_destruct;
- (id)matchSharingTouchesPolicy:(id /* CDUnknownBlockType */)arg1 orCancelTouchesPolicy:(id /* CDUnknownBlockType */)arg2 orCombinedPolicy:(id /* CDUnknownBlockType */)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextId:(unsigned int)arg1 initialTouchTimestamp:(double)arg2;

@end

