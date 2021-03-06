//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICDocCamDocumentInfoCollection, ICDocCamImageCache, ICDocCamViewController, NSData;
@protocol DCDataCryptorDelegate, DCScanDataDelegate;

@protocol ICDocCamViewControllerDelegate <NSObject>
- (id <DCScanDataDelegate>)scanDataDelegateWithIdentifier:(id)arg1;
- (id <DCDataCryptorDelegate>)documentCameraControllerCreateDataCryptorIfNecessary;
- (BOOL)documentCameraController:(ICDocCamViewController *)arg1 canAddImages:(NSUInteger)arg2;
- (void)documentCameraControllerDidCancel:(ICDocCamViewController *)arg1;

@optional
- (ICDocCamImageCache *)documentCameraControllerImageCache;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(BOOL)arg4;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithImage:(NSData *)arg2;
@end

