//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBDataProviderConnectionResolver, NSMutableDictionary, NSString;
@protocol BBDataProviderConnectionServerProxy, OS_dispatch_queue;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>
{
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
    NSString *_serviceName;
    NSString *_bundleID;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;
- (void)ping:(id /* CDUnknownBlockType */)arg1;
- (void)invalidate;
- (void)_invalidate;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (id)_addDataProvider:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)addDataProvider:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)addDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_queue_setServerProxy:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

@end

