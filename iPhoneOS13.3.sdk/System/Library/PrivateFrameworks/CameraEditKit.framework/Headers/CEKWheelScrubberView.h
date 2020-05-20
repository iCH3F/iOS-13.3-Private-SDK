//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraEditKit/CEKWheelScrubberCollectionViewLayoutDelegate-Protocol.h>

@class CEKAnimationGenerator, CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKWheelScrubberCollectionViewLayout, NSArray, NSString, UICollectionView, UILabel, UILongPressGestureRecognizer, UIPreviewInteraction, UITapGestureRecognizer;
@protocol CEKWheelScrubberViewDelegate;

@interface CEKWheelScrubberView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CEKWheelScrubberCollectionViewLayoutDelegate, UIPreviewInteractionDelegate, UIGestureRecognizerDelegate>
{
    struct {
        BOOL respondsToWillBeginScrolling;
        BOOL respondsToDidScroll;
        BOOL respondsToWillEndScrolling;
        BOOL respondsToDidEndScrolling;
    } _delegateFlags;
    BOOL _suspended;
    BOOL __showSelectedItemTextOverlay;
    id <CEKWheelScrubberViewDelegate> _delegate;
    NSUInteger _itemCount;
    NSUInteger _defaultIndex;
    NSUInteger _selectedIndex;
    NSUInteger _markedIndex;
    long long _cornerStyle;
    double _selectionDotCenterTopSpacing;
    long long _dotPlacement;
    CEKWheelScrubberCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UIView *__selectedItemLoupe;
    UILabel *__selectedItemTextOverlay;
    CEKEdgeGradientView *__edgeGradientView;
    UILongPressGestureRecognizer *__pressGestureRecognizer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    CEKSelectionFeedbackGenerator *__selectionFeedbackGenerator;
    NSArray *__reducedItemIndicesToShow;
    UIPreviewInteraction *__previewInteraction;
    double __previewTransitionProgress;
    CEKAnimationGenerator *__animationGenerator;
    UIView *__collectionViewSnapshot;
    CDStruct_ae5a35ae _gradientInsets;
    UIEdgeInsets _thumbnailEdgeInsets;
}

@property(retain, nonatomic, setter=_setCollectionViewSnapshot:) UIView *_collectionViewSnapshot; // @synthesize _collectionViewSnapshot=__collectionViewSnapshot;
@property(readonly, nonatomic) CEKAnimationGenerator *_animationGenerator; // @synthesize _animationGenerator=__animationGenerator;
@property(nonatomic, setter=_setPreviewTransitionProgress:) double _previewTransitionProgress; // @synthesize _previewTransitionProgress=__previewTransitionProgress;
@property(retain, nonatomic) UIPreviewInteraction *_previewInteraction; // @synthesize _previewInteraction=__previewInteraction;
@property(retain, nonatomic, setter=_setReducedItemIndicesToShow:) NSArray *_reducedItemIndicesToShow; // @synthesize _reducedItemIndicesToShow=__reducedItemIndicesToShow;
@property(readonly, nonatomic) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator; // @synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *_pressGestureRecognizer; // @synthesize _pressGestureRecognizer=__pressGestureRecognizer;
@property(retain, nonatomic) CEKEdgeGradientView *_edgeGradientView; // @synthesize _edgeGradientView=__edgeGradientView;
@property(nonatomic) BOOL _showSelectedItemTextOverlay; // @synthesize _showSelectedItemTextOverlay=__showSelectedItemTextOverlay;
@property(readonly, nonatomic) UILabel *_selectedItemTextOverlay; // @synthesize _selectedItemTextOverlay=__selectedItemTextOverlay;
@property(readonly, nonatomic) UIView *_selectedItemLoupe; // @synthesize _selectedItemLoupe=__selectedItemLoupe;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) CEKWheelScrubberCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(nonatomic) long long dotPlacement; // @synthesize dotPlacement=_dotPlacement;
@property(nonatomic) double selectionDotCenterTopSpacing; // @synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing;
@property(nonatomic) CDStruct_ae5a35ae gradientInsets; // @synthesize gradientInsets=_gradientInsets;
@property(nonatomic) UIEdgeInsets thumbnailEdgeInsets; // @synthesize thumbnailEdgeInsets=_thumbnailEdgeInsets;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) long long cornerStyle; // @synthesize cornerStyle=_cornerStyle;
@property(nonatomic) NSUInteger markedIndex; // @synthesize markedIndex=_markedIndex;
@property(nonatomic) NSUInteger selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) NSUInteger defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) NSUInteger itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <CEKWheelScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (BOOL)_shouldPerformFeedback;
- (id)_newReducedItemIndicesToShow;
- (void)_resetForTouchesEnded;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)_switchToItemAtIndexOffset:(long long)arg1 shouldOvershoot:(BOOL)arg2;
- (void)switchToPreviousItem;
- (void)switchToNextItem;
- (void)_scrollToIndex:(long long)arg1 animated:(BOOL)arg2 shouldOvershoot:(BOOL)arg3;
- (void)_switchToIndex:(long long)arg1 shouldOvershoot:(BOOL)arg2 shouldSuppressHaptic:(BOOL)arg3;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(CGPoint)arg1 switchToNextItemThreshold:(double)arg2 withPreviewTransitionProgress:(double)arg3;
- (double)_lengthForItemIndex:(long long)arg1 withPreviewTransitionProgress:(double)arg2;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (double)_idealFractionalItemOffsetTargetForFractionalItemOffset:(double)arg1 allowUnselectedItems:(BOOL)arg2;
- (double)_fractionalItemOffsetForContentOffset:(CGPoint)arg1 withPreviewTransitionProgress:(double)arg2;
- (CGPoint)_contentOffsetForFractionalItemOffset:(double)arg1 withPreviewTransitionProgress:(double)arg2;
- (double)_alphaForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (double)_lengthForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (double)_defaultItemLength;
- (CGSize)_defaultItemSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)wheelScrubberCollectionViewLayout:(id)arg1 alphaForItemAtIndexPath:(id)arg2;
- (CGSize)wheelScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_updateCornerMaskForCell:(id)arg1 withItemIndex:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) CGSize thumbnailSize;
- (UIEdgeInsets)alignmentRectInsets;
- (BOOL)_isOrderReverse;
- (BOOL)_isDirectionHorizontal;
@property(readonly, nonatomic) double selectedThumbnailBorderWidth;
- (void)_updateLayoutForCell:(id)arg1;
- (void)_updateLayoutForVisibleCells;
@property(nonatomic) long long layoutDirection;
@property(nonatomic) long long layoutOrder;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)setTransparentGradients;
- (void)_updateCollectionViewForMarkedIndexAnimated:(BOOL)arg1;
@property(nonatomic) BOOL useRoundedCorners;
- (void)_setShowTextOverlay:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setSelectionText:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) NSString *selectionText;
- (void)setMarkedIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_setSelectedIndex:(NSUInteger)arg1 shouldNotify:(BOOL)arg2 shouldSuppressHaptic:(BOOL)arg3;
- (void)updateItems;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

