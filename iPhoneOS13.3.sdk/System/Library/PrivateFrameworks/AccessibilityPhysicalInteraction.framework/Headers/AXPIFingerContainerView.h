//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AXPIPinchChainView, NSMutableArray;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerContainerView : UIView
{
    NSMutableArray *_fingerViews;
    UIView *_viewForAnimatingAlpha;
    AXPIPinchChainView *_pinchChainView;
    BOOL _shouldAnimatePress;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
}

@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) BOOL shouldAnimatePress; // @synthesize shouldAnimatePress=_shouldAnimatePress;
// - (void).cxx_destruct;
- (void)animateToTapWithDuration:(double)arg1;
- (void)cancelCircularProgressAnimation;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (CGRect)rectForFingersAtPoints:(id)arg1;
- (void)_updatePinchChainAppearance;
- (void)updateWithFingerModel:(id)arg1 forFingerAtIndex:(NSUInteger)arg2;
- (NSUInteger)indexOfFingerAtPoint:(CGPoint)arg1;
- (void)clearAllFingersAnimated:(BOOL)arg1 endPointForAnimation:(CGPoint)arg2;
- (void)showFingerModels:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 shouldShowPinchChain:(BOOL)arg4;
@property(readonly, nonatomic) BOOL isPinchChainVisible;
- (id)initWithFrame:(CGRect)arg1;

@end

