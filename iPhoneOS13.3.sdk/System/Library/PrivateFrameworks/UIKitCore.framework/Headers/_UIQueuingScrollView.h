//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray, NSMutableArray, UIView;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView
{
    id <_UIQueuingScrollViewDelegate> _qDelegate;
    id <_UIQueuingScrollViewDataSource> _qDataSource;
    long long _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    double _pageSpacing;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    BOOL _manualScrollInProgress;
    struct {
        unsigned int delegateInterestedInPendingScrolls:1;
        unsigned int delegateInterestedInCommittedScrolls:1;
        unsigned int delegateInterestedInCompletedScrolls:1;
        unsigned int delegateInterestedInBailedOutScrolls:1;
        unsigned int delegateInterestedFinishedScrolling:1;
        unsigned int delegateCanVetoSubviewLayout:1;
        unsigned int dataSourceSuppliesBeforeView:1;
        unsigned int dataSourceSuppliesAfterView:1;
        unsigned int dataSourceInterestedInFlushedViews:1;
    } _delegateFlags;
    CGRect _disabledScrollingRegion;
}

@property(nonatomic) CGRect disabledScrollingRegion; // @synthesize disabledScrollingRegion=_disabledScrollingRegion;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) __weak id <_UIQueuingScrollViewDataSource> qDataSource; // @synthesize qDataSource=_qDataSource;
@property(nonatomic) __weak id <_UIQueuingScrollViewDelegate> qDelegate; // @synthesize qDelegate=_qDelegate;
// - (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)_didEndProgrammaticScroll;
- (void)_didEndManualScroll;
- (void)_didEndScroll:(BOOL)arg1;
- (void)_didEndDraggingManualScroll;
- (void)_didScrollWithAnimation:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)_isScrollInProgress:(BOOL)arg1;
- (BOOL)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(BOOL)arg4;
- (void)_boundsDidChangeToSize:(CGSize)arg1;
- (void)_adjustContentInsets;
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_notifyDelegateDidEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6;
- (void)_notifyDelegateDidCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6;
- (void)_notifyDelegateWillManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(BOOL)arg4;
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(BOOL)arg2 didComplete:(BOOL)arg3;
- (void)_enqueueCompletionState:(id)arg1;
- (long long)_navigationDirectionFromCurrentOffset;
- (long long)_navigationDirectionForActiveScroll:(BOOL)arg1;
- (BOOL)isManualScrollInProgress;
- (BOOL)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;
- (void)_invalidateOffscreenViews;
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(BOOL)arg2 updatingContents:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_dequeueViewForIndex:(long long)arg1;
- (id)_requestViewForIndex:(long long)arg1;
- (void)_replaceViews:(id)arg1 updatingContents:(BOOL)arg2 adjustContentInsets:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_flushView:(id)arg1 animated:(BOOL)arg2;
- (id)_visibleView;
- (id)_viewAfterView:(id)arg1;
- (id)_viewBeforeView:(id)arg1;
- (id)_viewBefore:(BOOL)arg1 view:(id)arg2;
- (BOOL)_dataSourceProvidesViews;
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
- (NSUInteger)_abuttedPagingEdges;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)_setFrameAndApplyPageSpacing:(CGRect)arg1;
@property(readonly, nonatomic) UIView *visibleView;
- (id)initWithFrame:(CGRect)arg1 navigationOrientation:(long long)arg2;

@end

