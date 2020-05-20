//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUQuickControlWheelPickerViewProfile, NSArray, NSNumber, UIImpactFeedbackGenerator, UIPickerView, UISelectionFeedbackGenerator;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlWheelPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    NSUInteger _reachabilityState;
    HUQuickControlWheelPickerViewProfile *_profile;
    NSArray *_items;
    UIPickerView *_pickerView;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    UIView *_selectedRowSurroundingView;
    NSNumber *_selectedRow;
    double _maxTextWidth;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(retain, nonatomic) NSNumber *selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) UIView *selectedRowSurroundingView; // @synthesize selectedRowSurroundingView=_selectedRowSurroundingView;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) HUQuickControlWheelPickerViewProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) NSUInteger reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
// - (void).cxx_destruct;
- (void)_actuateSelectionTapticFeedback;
- (void)_prepareForTapticFeedback;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)_updateUIForReachabilityState:(NSUInteger)arg1;
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)tintColorDidChange;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)_updateSelectedRowBorderView:(id)arg1;
- (void)_updateUI;
- (id)initWithProfile:(id)arg1;

@end

