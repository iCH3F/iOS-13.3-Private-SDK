//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetReference;

@interface PXDraggingItemLocalObject : NSObject
{
    PXAssetReference *_assetReference;
}

@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL needsImport;
- (id)initWithAssetReference:(id)arg1;
- (id)init;

@end

