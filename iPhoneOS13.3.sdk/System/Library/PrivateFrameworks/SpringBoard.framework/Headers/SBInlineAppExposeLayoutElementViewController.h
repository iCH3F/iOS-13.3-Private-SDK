//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLayoutElementViewController.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneLayoutElementViewControlling-Protocol.h>

@class BSCornerRadiusConfiguration, NSMutableSet, SBInlineAppExposeContainerViewController;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutElementViewControlling>
{
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    NSMutableSet *_maskDisplayCornersReasons;
}

// - (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4;
- (void)prepareForReuse;
- (void)invalidate;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)setShadowOffset:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (id)relinquishInlineContainerViewController;

@end
