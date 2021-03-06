//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SKUIShapeView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIPreviewProgressIndicator : UIControl
{
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
    BOOL _isIndeterminate;
    float _progress;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_isIndeterminate;
// - (void).cxx_destruct;
- (id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2;
- (void)_beginIndeterminateAnimation;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)reloadWithPlayerStatus:(id)arg1 animated:(BOOL)arg2;
- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (id)initWithFrame:(CGRect)arg1;

@end

