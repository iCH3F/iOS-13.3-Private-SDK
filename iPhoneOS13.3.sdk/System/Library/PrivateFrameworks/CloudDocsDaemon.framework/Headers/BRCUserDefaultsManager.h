//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSURL, NSURLSession;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSURL *_serverConfigurationURL;
    NSDictionary *_serverConfigurationDict;
    NSMutableDictionary *_userDefaultsCache;
    id /* CDUnknownBlockType */ _configurationPlistDidUpdateBlock;
    NSOperationQueue *_downloadQueue;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <NSObject> _defaultsDidChangeNotificationObserver;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (void)_saveServerConfigurationDictionaryToDB:(id)arg1;
- (void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1;
- (void)reset;
- (void)_reset;
- (void)_loadServerConfigurationDictionary;
- (void)_parsePlistWithURL:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(id /* CDUnknownBlockType */)arg2;
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(id /* CDUnknownBlockType */)arg2;
- (id)defaultsForIdentifier:(id)arg1;
- (id)init;
- (void)_prepopulateGlobalUserDefaults;

@end

