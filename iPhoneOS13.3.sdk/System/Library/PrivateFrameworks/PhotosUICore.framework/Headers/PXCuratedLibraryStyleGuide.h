//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXExtendedTraitCollection;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver>
{
    double _lateralMargin;
    long long _secondaryToolbarPlacement;
    long long _toggleAspectFitButtonPlacement;
    long long _zoomButtonsButtonPlacement;
    PXExtendedTraitCollection *_extendedTraitCollection;
    long long _buttonStyle;
    CGSize _secondaryToolbarSize;
    UIEdgeInsets _secondaryToolbarPadding;
    UIEdgeInsets _secondaryToolbarContentInsets;
}

@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(nonatomic) long long zoomButtonsButtonPlacement; // @synthesize zoomButtonsButtonPlacement=_zoomButtonsButtonPlacement;
@property(nonatomic) long long toggleAspectFitButtonPlacement; // @synthesize toggleAspectFitButtonPlacement=_toggleAspectFitButtonPlacement;
@property(nonatomic) UIEdgeInsets secondaryToolbarContentInsets; // @synthesize secondaryToolbarContentInsets=_secondaryToolbarContentInsets;
@property(readonly, nonatomic) UIEdgeInsets secondaryToolbarPadding; // @synthesize secondaryToolbarPadding=_secondaryToolbarPadding;
@property(nonatomic) CGSize secondaryToolbarSize; // @synthesize secondaryToolbarSize=_secondaryToolbarSize;
@property(nonatomic) long long secondaryToolbarPlacement; // @synthesize secondaryToolbarPlacement=_secondaryToolbarPlacement;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_update;
- (void)_invalidate;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)init;

@end

