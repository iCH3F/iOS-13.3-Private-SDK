//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKApplyHeroCardView : UIView
{
    UIImageView *_cardImageView;
    UIView *_cardImageShadowView;
    BOOL _usesCompactLayout;
    NSUInteger _featureIdentifier;
    double _cardHeight;
    double _cardTopPadding;
    double _cardBottomPadding;
    double _cardBackingHeight;
}

// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFeatureIdentifier:(NSUInteger)arg1;

@end

