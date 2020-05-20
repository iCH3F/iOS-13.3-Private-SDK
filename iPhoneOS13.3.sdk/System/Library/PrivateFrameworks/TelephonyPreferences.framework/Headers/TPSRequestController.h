//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMapTable, NSMutableOrderedSet, TPSRequest;
@protocol OS_dispatch_queue;

@interface TPSRequestController : NSObject
{
    TPSRequest *_pendingRequest;
    NSMapTable *_delegateToQueue;
    NSMutableOrderedSet *_requests;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    CoreTelephonyClient *_telephonyClient;
}

@property(readonly, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(retain, nonatomic) NSMutableOrderedSet *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(retain, nonatomic) TPSRequest *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
// - (void).cxx_destruct;
- (void)postResponse:(id)arg1;
- (void)executeRequest:(id)arg1;
- (void)execute;
- (void)addRequest:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

