//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface WFCameraShutterButton : UIControl
{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_buttonLayer;
}

@property(nonatomic) __weak CAShapeLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(nonatomic) __weak CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
// - (void).cxx_destruct;
- (id)accessibilityLabel;
- (NSUInteger)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

