//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXGestureProvider, PXPhotosDetailsContext, PXUIMediaProvider, UIScrollView, UIViewController;
@protocol PXAssetImportStatusManager, PXOneUpPresentationDelegate, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject
{
    struct {
        BOOL respondsToPhotosDetailsContext;
        BOOL respondsToInitialAssetReference;
        BOOL respondsToCurrentImageForAssetReference;
        BOOL respondsToRegionOfInterestForAssetReference;
        BOOL respondsToScrollAssetReferenceToVisible;
        BOOL respondsToSetHiddenAssetReferences;
        BOOL respondsToShouldAutoPlay;
        BOOL respondsToPreventShowInAllPhotos;
        BOOL respondsToActionManager;
        BOOL respondsToActionManagerForPreviewing;
        BOOL respondsToActionContext;
        BOOL respondsToGestureProvider;
        BOOL respondsToImportStatusManager;
        BOOL respondsToOrigin;
        BOOL respondsToScrollView;
    } _delegateFlags;
    struct {
        BOOL respondsToPresentingViewControllerViewWillAppear;
        BOOL respondsToPresentingViewControllerViewDidAppear;
        BOOL respondsToPresentingViewControllerViewWillDisappear;
        BOOL respondsToPresentingViewControllerViewDidDisappear;
        BOOL respondsToCanStart;
        BOOL respondsToCanStop;
        BOOL respondsToInvalidatePresentingGeometry;
        BOOL respondsToHandlePresentingPinchGestureRecognizer;
    } _implementationDelegateFlags;
    BOOL _enabled;
    id <PXOneUpPresentationImplementationDelegate> __implementationDelegate;
    id <PXOneUpPresentationDelegate> _delegate;
    UIViewController *_presentingViewController;
    UIViewController *_originalPresentingViewController;
    id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;
}

@property(nonatomic) __weak id <PXOneUpPresentationImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <PXOneUpPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXOneUpPresentationImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
// - (void).cxx_destruct;
- (void)_updateImplementationDelegate;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setHiddenAssetReferences:(id)arg1;
- (void)scrollAssetReferenceToVisible:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (id)currentImageForAssetReference:(id)arg1;
@property(readonly, nonatomic) BOOL preventShowInAllPhotosAction;
@property(readonly, nonatomic) BOOL shouldAutoPlay;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> importStatusManager;
@property(readonly, nonatomic) long long actionContext;
@property(readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property(readonly, nonatomic) PXAssetActionManager *actionManager;
@property(readonly, nonatomic) PXAssetReference *initialAssetReference;
@property(readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property(readonly, nonatomic) long long origin;
@property(readonly, nonatomic) PXGestureProvider *gestureProvider;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
- (BOOL)handlePresentingPinchGestureRecognizer:(id)arg1;
- (void)invalidatePresentingGeometry;
- (void)stopAnimated:(BOOL)arg1;
@property(readonly, nonatomic) BOOL canStop;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (id)previewViewControllerAllowingActions:(BOOL)arg1;
- (BOOL)startAnimated:(BOOL)arg1 interactiveMode:(long long)arg2;
@property(readonly, nonatomic) BOOL canStart;
- (void)presentingViewControllerViewDidDisappear:(BOOL)arg1;
- (void)presentingViewControllerViewWillDisappear:(BOOL)arg1;
- (void)presentingViewControllerViewDidAppear:(BOOL)arg1;
- (void)presentingViewControllerViewWillAppear:(BOOL)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

@end

