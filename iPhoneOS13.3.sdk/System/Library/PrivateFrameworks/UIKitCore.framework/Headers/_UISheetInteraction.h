//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollableAncestor-Protocol.h>

@class NSArray, NSMutableArray, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol UITimingCurveProvider, _UISheetInteractionDelegate;

@interface _UISheetInteraction : NSObject <_UIScrollViewScrollableAncestor, UIGestureRecognizerDelegate, UIInteraction>
{
    BOOL _enabled;
    BOOL _horizontalRubberBandingEnabled;
    NSArray *_detents;
    long long _indexOfCurrentDetent;
    double _rubberBandExtentBeyondMinimumOffset;
    double _rubberBandExtentBeyondMaximumOffset;
    id <UITimingCurveProvider> _timingCurve;
    id <_UISheetInteractionDelegate> _delegate;
    UIView *_view;
    NSMutableArray *_registeredPanGestureRecognizers;
    UIPanGestureRecognizer *_backgroundGestureRecognizer;
    id _dragSource;
    double _offsetWhenGestureBegan;
    double _unconstrainedOffset;
    UIViewPropertyAnimator *_propertyAnimator;
    CGPoint _currentOffset;
}

@property(retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(nonatomic) double unconstrainedOffset; // @synthesize unconstrainedOffset=_unconstrainedOffset;
@property(nonatomic) double offsetWhenGestureBegan; // @synthesize offsetWhenGestureBegan=_offsetWhenGestureBegan;
@property(retain, nonatomic) id dragSource; // @synthesize dragSource=_dragSource;
@property(nonatomic) BOOL horizontalRubberBandingEnabled; // @synthesize horizontalRubberBandingEnabled=_horizontalRubberBandingEnabled;
@property(readonly, nonatomic) UIPanGestureRecognizer *backgroundGestureRecognizer; // @synthesize backgroundGestureRecognizer=_backgroundGestureRecognizer;
@property(readonly, nonatomic) NSMutableArray *registeredPanGestureRecognizers; // @synthesize registeredPanGestureRecognizers=_registeredPanGestureRecognizers;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UISheetInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <UITimingCurveProvider> timingCurve; // @synthesize timingCurve=_timingCurve;
@property(nonatomic) double rubberBandExtentBeyondMaximumOffset; // @synthesize rubberBandExtentBeyondMaximumOffset=_rubberBandExtentBeyondMaximumOffset;
@property(nonatomic) double rubberBandExtentBeyondMinimumOffset; // @synthesize rubberBandExtentBeyondMinimumOffset=_rubberBandExtentBeyondMinimumOffset;
@property(nonatomic) CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long indexOfCurrentDetent; // @synthesize indexOfCurrentDetent=_indexOfCurrentDetent;
@property(copy, nonatomic) NSArray *detents; // @synthesize detents=_detents;
// - (void).cxx_destruct;
- (void)draggingCancelledInSource:(id)arg1;
- (void)draggingEndedInSource:(id)arg1 withVelocity:(double)arg2;
- (void)draggingChangedInSource:(id)arg1 withTranslation:(CGPoint)arg2 animateChange:(BOOL)arg3;
- (void)draggingBeganFromSource:(id)arg1;
- (BOOL)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(CGPoint)arg2 maxTopOffset:(double)arg3;
- (void)_descendentScrollViewDidCancelDragging:(id)arg1;
- (void)_descendentScrollViewDidEndDragging:(id)arg1;
- (BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2;
- (CGPoint)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double )arg4 verticalVelocity:(inout double )arg5 animator:(out id )arg6;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1;
- (void)unregisterPanGestureRecognizer:(id)arg1;
- (void)registerPanGestureRecognizer:(id)arg1;
- (void)_setCurrentOffsetX:(double)arg1;
- (void)_setCurrentOffsetY:(double)arg1;
@property(readonly, nonatomic) CGPoint attachmentPoint;
- (void)sendCurrentOffsetDidChange;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
- (void)cancelDraggingIfNeeded;
- (double)rubberBandExtentForOffset:(double)arg1;
- (double)constrainedOffsetForUnconstrainedOffset:(double)arg1;
- (long long)indexOfDetentClosestToOffset:(double)arg1;
@property(readonly, nonatomic) double offsetAtCurrentDetent;
@property(readonly, nonatomic) double maximumOffset;
@property(readonly, nonatomic) double minimumOffset;
- (double)detentAtIndex:(long long)arg1;
- (void)updateCurrentOffsetToCurrentDetent;
- (id)init;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end

