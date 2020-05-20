//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/GKNATObserver.h>

@class GKNATObserver_SCContext, NSMutableDictionary, NSObject, NSRecursiveLock;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GKNATObserverInternal : GKNATObserver
{
    id _delegate;
    struct __SCDynamicStore _dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    BOOL _nonCarrierInterfacesOnly;
    BOOL _checkTCPAndSSL;
    BOOL _favorNonCarrier;
    BOOL _newCarrierType;
    BOOL _addInRangeFlag;
    BOOL _addCarrierFlag;
    BOOL _ignoreNatTypeCache;
    BOOL _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    BOOL _fNATCheckQueued;
    BOOL _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    BOOL _hasNATCheckStarted;
    BOOL _hasNATCheckEnded;
}

- (void)registerForNetworkChanges;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT )arg1 interfaceName:(id)arg2;
- (void)tryNATCheckWithDelay:(double)arg1;
- (void)clearRetries;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT )arg1 ipv6Prefix:(const CDStruct_c3d3b44c )arg2 useCache:(BOOL)arg3;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT )arg1 ipv6Prefix:(const CDStruct_c3d3b44c )arg2 useCache:(BOOL)arg3;
- (void)NATCheckWithIPPort:(struct tagIPPORT )arg1 ipv6Prefix:(const CDStruct_c3d3b44c )arg2 useCache:(BOOL)arg3;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (void)updateNatTypeCache:(id)arg1;
- (id)copyNatTypeCache;
- (void)updateNatTypeCache_OSXGamedScheme:(id)arg1;
- (id)copyNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache_CachePlistScheme:(id)arg1;
- (id)copyNatTypeCachePlistScheme;
- (BOOL)ensureNatCachePathExists;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT )arg1 ipv6Prefix:(const CDStruct_c3d3b44c )arg2 ToServer:(id)arg3 isSSL:(BOOL)arg4;
- (struct tagCommNATInfo )callCommNATTestFromIPPort:(struct tagIPPORT )arg1 ipv6Prefix:(const CDStruct_c3d3b44c )arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)reportNATType;
- (void)shouldTryNATCheck;
- (int)currentNATType;
- (void)calculateSummmaryNATType:(int )arg1 andCarrierNATType:(int )arg2 andNonCarrierNATType:(int )arg3 copyInterfaceInfoDictionary:(id )arg4;
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(BOOL)arg2;
- (void)dealloc;
- (oneway void)release;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

