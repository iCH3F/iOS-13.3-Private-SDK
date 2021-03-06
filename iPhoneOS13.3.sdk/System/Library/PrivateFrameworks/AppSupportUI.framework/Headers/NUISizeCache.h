//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUISizeCache : NSObject
{
    struct nui_size_cache _sizeCache;
    BOOL _threadSafe;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)invalidateCache;
- (void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2;
- (BOOL)getSize:(CGSize )arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(BOOL)arg3;
- (void)dealloc;
- (id)initForAsynchronousAccess:(BOOL)arg1;

@end

