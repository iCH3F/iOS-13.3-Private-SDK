//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSCache, NSMutableArray, NSMutableDictionary;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor
{
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    BOOL _previewIsValid;
}

// - (void).cxx_destruct;
- (void)_reinitializeWithImageList:(id)arg1 andResourceDirectory:(id)arg2;
- (id)_copyOrTranscodePhotosTo:(id)arg1;
- (id)_fetchAssetsForNewPhotos:(id)arg1;
- (void)_fetchAssetsForPickedPhotos;
- (void)_readPickedPhotosFrom:(id)arg1;
- (CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (BOOL)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (BOOL)setOriginalCrop:(CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (BOOL)addAssetsFromAssetList:(id)arg1;
- (BOOL)addPhotosFromUIImagePicker:(id)arg1;
@property(readonly, nonatomic) long long photosCount;
- (void)finalizeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;

@end

