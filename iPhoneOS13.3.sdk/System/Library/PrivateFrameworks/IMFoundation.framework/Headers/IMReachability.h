//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMReachabilityDelegate, OS_dispatch_queue;

@interface IMReachability : NSObject
{
    BOOL _gettingFlags;
    id <IMReachabilityDelegate> _delegate;
    NSUInteger _flags;
    NSString *_description;
    void _reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property(nonatomic) void reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSString *reachabilityDescription; // @synthesize reachabilityDescription=_description;
@property(nonatomic) NSUInteger flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL gettingFlags; // @synthesize gettingFlags=_gettingFlags;
@property(nonatomic) __weak id <IMReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL connectionRequired;
- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability )arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability )arg1 description:(id)arg2 delegate:(id)arg3;

@end

