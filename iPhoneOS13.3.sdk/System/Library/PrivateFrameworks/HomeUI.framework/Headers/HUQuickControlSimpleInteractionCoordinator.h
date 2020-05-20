//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/HUQuickControlViewInteractionDelegate-Protocol.h>

@class UIViewController;
@protocol HUQuickControlInteractiveViewController;

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate>
{
    BOOL _shouldDismissAutomatically;
    BOOL _hasStartedSecondTouch;
    id _value;
    UIViewController<HUQuickControlInteractiveViewController> *_contraptionViewController;
}

@property(nonatomic) BOOL hasStartedSecondTouch; // @synthesize hasStartedSecondTouch=_hasStartedSecondTouch;
@property(readonly, nonatomic) UIViewController<HUQuickControlInteractiveViewController> *contraptionViewController; // @synthesize contraptionViewController=_contraptionViewController;
@property(nonatomic) BOOL shouldDismissAutomatically; // @synthesize shouldDismissAutomatically=_shouldDismissAutomatically;
- (id)value;
// - (void).cxx_destruct;
- (void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)_requestDismissalIfNecessary;
- (void)_setValue:(id)arg1 notifyDelegate:(BOOL)arg2 updateControlView:(BOOL)arg3;
- (void)setValue:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)isUserInteractionEnabled;
- (BOOL)isUserInteractionActive;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (id)initWithContraptionViewController:(id)arg1 delegate:(id)arg2;

@end

