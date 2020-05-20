//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNMonogrammer, NSCache, NSMutableSet, NSPersonNameComponentsFormatter, NSURLSession, UIImage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STIconCache : NSObject
{
    NSCache *_iconByKeyCache;
    CNMonogrammer *_monogrammer;
    NSPersonNameComponentsFormatter *_personNameComponentsFormatter;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSURLSession *_urlSession;
    NSMutableSet *_bundleIdentifiersWithPendingRequests;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // @synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(retain, nonatomic) NSPersonNameComponentsFormatter *personNameComponentsFormatter; // @synthesize personNameComponentsFormatter=_personNameComponentsFormatter;
@property(retain, nonatomic) CNMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
// - (void).cxx_destruct;
- (id)monogramImageForNameComponents:(id)arg1;
- (void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;
- (id)roundedImageForImageWithName:(id)arg1;
- (id)_newCircleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (id)circleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;
- (id)blankSpaceImageWithSize:(CGSize)arg1;
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;
- (id)imageForCategoryIdentifier:(id)arg1;
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1;
- (id)imageForBundleIdentifier:(id)arg1;
@property(readonly) UIImage *imageForBlankApplicationIcon;
- (void)dealloc;
- (id)init;

@end

