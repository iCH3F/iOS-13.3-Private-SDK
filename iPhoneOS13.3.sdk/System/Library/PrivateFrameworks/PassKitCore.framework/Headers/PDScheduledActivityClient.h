//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;
@protocol OS_dispatch_queue, PDScheduledActivityClient;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding>
{
    id <PDScheduledActivityClient> _clientInstance;
    NSObject<OS_dispatch_queue> *_activityQueue;
    NSMutableDictionary *_activityRegistrations;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *activityRegistrations; // @synthesize activityRegistrations=_activityRegistrations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) __weak id <PDScheduledActivityClient> clientInstance; // @synthesize clientInstance=_clientInstance;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2;

@end

