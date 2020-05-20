//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSWallpaperClient;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject
{
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _wasInvalidated;
}

// - (void).cxx_destruct;
- (void)restoreDefaultWallpaperWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)setWallpaperGradient:(id)arg1 forVariants:(NSUInteger)arg2;
- (BOOL)setWallpaperColorName:(id)arg1 forVariants:(NSUInteger)arg2;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(long long)arg3;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

