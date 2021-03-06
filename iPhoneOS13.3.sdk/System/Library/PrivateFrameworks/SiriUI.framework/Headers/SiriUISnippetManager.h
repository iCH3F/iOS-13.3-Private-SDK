//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFClientPluginManager, NSDictionary;
@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject
{
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)speakableProviderForObject:(id)arg1;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)snippetViewControllerForSnippet:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;
- (BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (id)_snippetExtensionsCache;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)extensionForSnippet:(id)arg1;
- (void)prewarmSnippetExtensionsCache;
- (void)preloadPluginBundles;
- (id)init;

@end

