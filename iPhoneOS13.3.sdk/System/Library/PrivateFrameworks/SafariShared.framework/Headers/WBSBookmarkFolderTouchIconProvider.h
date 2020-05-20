//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>

@class NSArray, NSMutableDictionary, UIColor;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (BOOL)_appUsesLeftToRightLayout;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
// - (void).cxx_destruct;
- (id)_drawTouchIconForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (id /* CDUnknownBlockType */)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(NSUInteger)arg2;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL )arg2;
@property(readonly) UIColor *backgroundColor;
- (void)didCreateTouchIcon:(id)arg1;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (BOOL)canHandleRequest:(id)arg1;
- (void)removeInfoForFoldersWithUUIDs:(id)arg1;
- (void)removeInfoForFolderWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *allFolderUUIDs;
- (id)init;

@end

