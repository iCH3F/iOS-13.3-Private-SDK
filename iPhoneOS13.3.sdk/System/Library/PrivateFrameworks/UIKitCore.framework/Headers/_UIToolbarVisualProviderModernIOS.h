//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIToolbarVisualProvider.h>

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>
#import <UIKitCore/_UIBarButtonItemViewOwner-Protocol.h>

@class UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIToolbarContentView;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver>
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    long long _itemDistribution;
    BOOL _useModernAppearance;
}

// - (void).cxx_destruct;
- (BOOL)toolbarIsSmall;
- (CGSize)defaultSizeForOrientation:(long long)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (id)_currentCustomBackground;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)_updateBackgroundModern;
- (void)_updateBackgroundLegacyForPosition:(long long)arg1;
- (void)updateAppearance;
- (id)appearanceObserver;
- (void)setUseModernAppearance:(BOOL)arg1;
- (BOOL)useModernAppearance;
- (void)updateBarForStyle:(long long)arg1;
- (CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (void)updateBarBackgroundSize;
- (CGRect)_backgroundFrame;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;
- (void)_updateContentView;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3;
- (void)setItemDistribution:(long long)arg1;
- (long long)itemDistribution;

@end

