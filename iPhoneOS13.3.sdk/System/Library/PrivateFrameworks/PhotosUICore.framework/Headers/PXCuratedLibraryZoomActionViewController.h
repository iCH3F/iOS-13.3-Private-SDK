//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UIImageView, UISlider;

@interface PXCuratedLibraryZoomActionViewController : PXCuratedLibraryActionViewController
{
    UIImageView *_leadingIconView;
    UISlider *_slider;
    UIImageView *_trailingIconView;
}

// - (void).cxx_destruct;
- (CGSize)preferredContentSize;
- (void)_handleSlider:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;

@end

