//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AXBinaryMonitor : NSObject
{
    NSMutableDictionary *_bundleHandlerMap;
    NSMutableDictionary *_frameworkHandlerMap;
    NSMutableDictionary *_dylibHandlerMap;
    NSMutableDictionary *_appHandlerMap;
    NSMutableDictionary *_appExtensionHandlerMap;
    NSObject<OS_dispatch_queue> *_binaryMonitorQueue;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue; // @synthesize binaryMonitorQueue=_binaryMonitorQueue;
@property(retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap; // @synthesize appExtensionHandlerMap=_appExtensionHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *appHandlerMap; // @synthesize appHandlerMap=_appHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // @synthesize dylibHandlerMap=_dylibHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // @synthesize frameworkHandlerMap=_frameworkHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // @synthesize bundleHandlerMap=_bundleHandlerMap;
// - (void).cxx_destruct;
- (void)_handleLoadedImagePath:(id)arg1;
- (void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2;
- (id)_dylibNameForImage:(id)arg1;
- (id)_appNameForImage:(id)arg1;
- (id)_appExtensionNameForImage:(id)arg1;
- (id)_bundleNameForImage:(id)arg1;
- (id)_frameworkNameForImage:(id)arg1;
- (BOOL)_loadImageIsAppExtension:(id)arg1;
- (BOOL)_loadImageIsApp:(id)arg1;
- (BOOL)_loadImageIsDylib:(id)arg1;
- (BOOL)_loadImageIsBundle:(id)arg1;
- (BOOL)_loadImageIsFramework:(id)arg1;
- (id)_bundleNameAndType:(id)arg1;
- (void)_addHandler:(id /* CDUnknownBlockType */)arg1 withName:(id)arg2 toMap:(id )arg3;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forApp:(id)arg2;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forAppExtension:(id)arg2;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forDylib:(id)arg2;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forFramework:(id)arg2;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forBundleName:(id)arg2;
- (void)addHandler:(id /* CDUnknownBlockType */)arg1 forBundleID:(id)arg2;
- (void)evaluateExistingBinaries;
- (id)init;

@end

