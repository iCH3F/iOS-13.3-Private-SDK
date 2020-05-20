//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView;

@interface _PKInkThicknessButton : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    CGRect _lastRenderedBounds;
}

+ (id)imageTintColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
+ (id)backgroundColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
+ (CGSize)buttonSize;
@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property(nonatomic) CGRect lastRenderedBounds; // @synthesize lastRenderedBounds=_lastRenderedBounds;
@property(retain, nonatomic) UIImageView *inkImageView; // @synthesize inkImageView=_inkImageView;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
// - (void).cxx_destruct;
- (void)didTouchUpInside;
- (void)_animateToHighlightedState:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;

@end

