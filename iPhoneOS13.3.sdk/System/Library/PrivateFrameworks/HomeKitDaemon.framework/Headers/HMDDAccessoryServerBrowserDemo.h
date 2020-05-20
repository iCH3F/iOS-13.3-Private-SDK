//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSDictionary, NSMutableArray, NSObject;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HMDDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser
{
    BOOL _accessoryPaired;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_servers;
    NSDictionary *_demoData;
}

@property(nonatomic) BOOL accessoryPaired; // @synthesize accessoryPaired=_accessoryPaired;
@property(retain, nonatomic) NSDictionary *demoData; // @synthesize demoData=_demoData;
@property(retain, nonatomic) NSMutableArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (BOOL)isDemoAccessoryIdentifier:(id)arg1;
- (void)resetDemoAccessory:(id)arg1;
- (void)appendDemoData:(id)arg1;
- (void)loadDemoData:(id)arg1 finalized:(BOOL)arg2;
- (void)discoverServer;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;

@end

