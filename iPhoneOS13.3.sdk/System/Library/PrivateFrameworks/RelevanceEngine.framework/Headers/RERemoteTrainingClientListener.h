//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet, NSXPCListener;
@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    id <RERemoteTrainingClientListenerDelegate> _delegate;
}

@property(nonatomic) __weak id <RERemoteTrainingClientListenerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@end
