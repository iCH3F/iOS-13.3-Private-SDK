//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModernAssertionSourceResolution-Protocol.h>

@class DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, DNDSModeAssertionInvalidationPredicate, NSDate, NSString, NSUUID;

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying>
{
    NSUUID *_UUID;
    DNDSModeAssertionInvalidationPredicate *_predicate;
    NSDate *_requestDate;
    DNDModeAssertionInvalidationDetails *_details;
    DNDModeAssertionSource *_source;
    NSUInteger _reason;
    NSUInteger _reasonOverride;
}

+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(NSUInteger)arg5 reasonOverride:(NSUInteger)arg6;
+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(NSUInteger)arg4;
@property(readonly, nonatomic) NSUInteger reasonOverride; // @synthesize reasonOverride=_reasonOverride;
@property(readonly, nonatomic) NSUInteger reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) DNDModeAssertionSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(NSUInteger)arg6 reasonOverride:(NSUInteger)arg7;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

@end

