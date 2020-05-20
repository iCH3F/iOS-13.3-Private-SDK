//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PLClickPresentationInteractionManager, UIView, UIViewController;
@protocol PLClickPresentationInteractionPresentable, UIViewControllerTransitioningDelegate;

@protocol PLClickPresentationInteractionManagerDelegate <NSObject>
- (UIViewController<PLClickPresentationInteractionPresentable> *)presentedViewControllerForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;

@optional
- (BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(PLClickPresentationInteractionManager *)arg1;
- (void)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(PLClickPresentationInteractionManager *)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(PLClickPresentationInteractionManager *)arg1;
- (BOOL)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
- (UIView *)containerViewForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;
- (id <UIViewControllerTransitioningDelegate>)transitioningDelegateForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;
@end
