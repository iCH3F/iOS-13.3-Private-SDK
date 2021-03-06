//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    BOOL _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    BOOL _isDismissing;
    BOOL _ignoreScrollingEnded;
    BOOL _animatingResetOrReveal;
    UIView *_targetView;
}

+ (double)searchHeaderHeight;
@property(readonly, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal; // @synthesize animatingResetOrReveal=_animatingResetOrReveal;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_updateScrollingEnabled;
@property(readonly, nonatomic, getter=isShowingSearch) BOOL showingSearch;
- (BOOL)_isShowingSearch;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)setDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)resetAnimated:(BOOL)arg1;
- (void)revealAnimated:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateForRotation;
- (id)init;

@end

