//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;
@protocol SBFluidSwitcherScrollProviding;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier
{
    long long _direction;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
}

@property(readonly, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
// - (void).cxx_destruct;
- (id)appLayoutToScrollToDuringTransition;
- (BOOL)isEffectivelyHome;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;

@end
