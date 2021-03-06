//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/TSgPTPNetworkPortClient-Protocol.h>

@class TSgPTPPort;
@protocol OS_dispatch_queue;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    /* void * CDUnknownFunctionPointerType _macLookupTimeoutCallback */;
    void _macLookupTimeoutRefcon;
    TSgPTPPort *_port;
}

@property(retain, nonatomic) TSgPTPPort *port; // @synthesize port=_port;
- (void)dealloc;
- (void)didTimeoutOnMACLookupForPort:(id)arg1;
- (void)setMACLookupTimeoutCallback:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 refcon:(void )arg2;
- (id)initWithgPTPPort:(id)arg1 onClockIdentifier:(NSUInteger)arg2;

@end

