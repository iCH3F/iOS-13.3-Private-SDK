//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PHFetchResult, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PXActivitySharingContext : NSObject
{
    BOOL _wantsActionSheet;
    BOOL _excludeShareActivity;
    PHFetchResult *_assetCollectionsFetchResult;
    PXPhotosDataSource *_photosDataSource;
    NSArray *_activities;
    NSString *_title;
    NSString *_subtitle;
    id <PXDisplayAsset> _keyAsset;
    NSUInteger _sourceOrigin;
}

@property(nonatomic) NSUInteger sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL excludeShareActivity; // @synthesize excludeShareActivity=_excludeShareActivity;
@property(nonatomic) BOOL wantsActionSheet; // @synthesize wantsActionSheet=_wantsActionSheet;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, copy, nonatomic) PHFetchResult *assetCollectionsFetchResult; // @synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2;
- (id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2;

@end

