//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXAssetCollectionReference, PXCuratedLibraryViewModel;

@protocol PXCuratedLibraryViewModelPresenter <NSObject>
- (PXAssetCollectionReference *)viewModel:(PXCuratedLibraryViewModel *)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;

@optional
- (long long)viewModel:(PXCuratedLibraryViewModel *)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
@end
