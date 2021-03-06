//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class HMFMessageDestination, NSArray, NSObject, NSString;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject>
{
    NSUInteger _hash;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMFMessageReceiver> _receiver;
    NSString *_name;
    HMFMessageDestination *_destination;
    NSArray *_policies;
}

+ (id)logCategory;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
@property(readonly, copy) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
@property(readonly) NSUInteger hash; // @synthesize hash=_hash;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3;
- (BOOL)invokeWithMessage:(id)arg1;

@end

