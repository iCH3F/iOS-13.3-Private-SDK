//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CoverSheet/CSCoverSheetViewTransitionSource-Protocol.h>
#import <CoverSheet/CSScrollViewDelegate-Protocol.h>
#import <CoverSheet/CSScrollableView-Protocol.h>

@class CSFixedFooterView, CSLayoutStrategy, CSLocketForcePressGestureRecognizer, CSQuickActionsView, CSRegionsDebugView, CSScrollModifier, CSTeachableMomentsContainerView, NSArray, NSString, SBFLockScreenDateView, SBFPagedScrollView, SBFStatusBarLegibilityView, SBUIBackgroundView, UIColor, UIGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView, _UILegibilitySettings;
@protocol CSCoverSheetViewDelegate, CSWallpaperView;

@interface CSCoverSheetView : UIView <CSScrollViewDelegate, CSCoverSheetViewTransitionSource, CSScrollableView>
{
    SBUIBackgroundView *_backgroundView;
    SBFPagedScrollView *_scrollView;
    UIView *_dateTimeClippingView;
    UIView *_authIndicator;
    UIView *_slideableContentView;
    UIView *_higherSlideableContentView;
    UIVisualEffectView *_dateEffectView;
    SBFStatusBarLegibilityView *_statusBarLegibilityView;
    BOOL _viewControllerAppearingOrAppeared;
    CDStruct_7238a68f _transitionContext;
    double _scrollViewStartingXOffset;
    CSScrollModifier *_scrollModifier;
    NSUInteger _initialPageIndex;
    BOOL _shouldModifyPageScrolling;
    BOOL _ignoresOverscrollOnMainPage;
    BOOL _forceDateViewCentered;
    BOOL _dateViewIsVibrant;
    BOOL _legibilitySettingsOverrideVibrancy;
    BOOL _statusBarLegibilityEnabled;
    UIView *_bottomPage;
    id <CSCoverSheetViewDelegate> _delegate;
    CSLayoutStrategy *_layoutStrategy;
    UIView *_mainPageView;
    SBFLockScreenDateView *_dateView;
    CSFixedFooterView *_fixedFooterView;
    UIView *_proudLockContainerView;
    UIView *_cameraCoveredView;
    CSTeachableMomentsContainerView *_teachableMomentsContainerView;
    CSQuickActionsView *_quickActionsView;
    long long _dateViewPageAlignment;
    UIView *_fakeStatusBar;
    NSUInteger _fakeStatusBarLevel;
    UIVisualEffectView *_statusBarBackgroundView;
    long long _statusBarBackgroundPageAlignment;
    UIGestureRecognizer *_wallpaperGestureRecognizer;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    CSLocketForcePressGestureRecognizer *_locketGestureRecognizer;
    UIView *_scalableContentView;
    UIView *_modalPresentationView;
    UIView *_wakeEffectView;
    UIView<CSWallpaperView> *_wallpaperEffectView;
    UIView *_tintingView;
    SBUIBackgroundView *_bedtimeGreetingViewBackgroundView;
    UIColor *_reduceTransparencyBackingColor;
    UIView *_referenceViewForBelowPresentationContext;
    _UILegibilitySettings *_legibilitySettings;
    NSUInteger _targetPageIndexForDraggingEnded;
    CSRegionsDebugView *_regionsDebugView;
    CGPoint _dateViewOffset;
    CGPoint _proudLockIconViewOffset;
    CGPoint _foregroundViewPositionOffset;
}

@property(retain, nonatomic) CSRegionsDebugView *regionsDebugView; // @synthesize regionsDebugView=_regionsDebugView;
@property(nonatomic) NSUInteger targetPageIndexForDraggingEnded; // @synthesize targetPageIndexForDraggingEnded=_targetPageIndexForDraggingEnded;
@property(nonatomic) BOOL statusBarLegibilityEnabled; // @synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled;
@property(nonatomic) BOOL legibilitySettingsOverrideVibrancy; // @synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak UIView *referenceViewForBelowPresentationContext; // @synthesize referenceViewForBelowPresentationContext=_referenceViewForBelowPresentationContext;
@property(nonatomic) CGPoint foregroundViewPositionOffset; // @synthesize foregroundViewPositionOffset=_foregroundViewPositionOffset;
@property(retain, nonatomic) UIColor *reduceTransparencyBackingColor; // @synthesize reduceTransparencyBackingColor=_reduceTransparencyBackingColor;
@property(retain, nonatomic) SBUIBackgroundView *bedtimeGreetingViewBackgroundView; // @synthesize bedtimeGreetingViewBackgroundView=_bedtimeGreetingViewBackgroundView;
@property(retain, nonatomic) SBUIBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *tintingView; // @synthesize tintingView=_tintingView;
@property(retain, nonatomic) UIView<CSWallpaperView> *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(retain, nonatomic) UIView *wakeEffectView; // @synthesize wakeEffectView=_wakeEffectView;
@property(retain, nonatomic) UIView *modalPresentationView; // @synthesize modalPresentationView=_modalPresentationView;
@property(readonly, nonatomic) UIView *slideableContentView; // @synthesize slideableContentView=_slideableContentView;
@property(retain, nonatomic) UIView *scalableContentView; // @synthesize scalableContentView=_scalableContentView;
@property(retain, nonatomic) CSLocketForcePressGestureRecognizer *locketGestureRecognizer; // @synthesize locketGestureRecognizer=_locketGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *quickNoteGestureRecognizer; // @synthesize quickNoteGestureRecognizer=_quickNoteGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer; // @synthesize wallpaperGestureRecognizer=_wallpaperGestureRecognizer;
@property(nonatomic) long long statusBarBackgroundPageAlignment; // @synthesize statusBarBackgroundPageAlignment=_statusBarBackgroundPageAlignment;
@property(retain, nonatomic) UIVisualEffectView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) NSUInteger fakeStatusBarLevel; // @synthesize fakeStatusBarLevel=_fakeStatusBarLevel;
@property(retain, nonatomic) UIView *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(nonatomic) BOOL dateViewIsVibrant; // @synthesize dateViewIsVibrant=_dateViewIsVibrant;
@property(nonatomic) BOOL forceDateViewCentered; // @synthesize forceDateViewCentered=_forceDateViewCentered;
@property(nonatomic) long long dateViewPageAlignment; // @synthesize dateViewPageAlignment=_dateViewPageAlignment;
@property(nonatomic) CGPoint proudLockIconViewOffset; // @synthesize proudLockIconViewOffset=_proudLockIconViewOffset;
@property(nonatomic) CGPoint dateViewOffset; // @synthesize dateViewOffset=_dateViewOffset;
@property(retain, nonatomic) CSQuickActionsView *quickActionsView; // @synthesize quickActionsView=_quickActionsView;
@property(retain, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView; // @synthesize teachableMomentsContainerView=_teachableMomentsContainerView;
@property(retain, nonatomic) UIView *cameraCoveredView; // @synthesize cameraCoveredView=_cameraCoveredView;
@property(retain, nonatomic) UIView *proudLockContainerView; // @synthesize proudLockContainerView=_proudLockContainerView;
@property(retain, nonatomic) CSFixedFooterView *fixedFooterView; // @synthesize fixedFooterView=_fixedFooterView;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) BOOL ignoresOverscrollOnMainPage; // @synthesize ignoresOverscrollOnMainPage=_ignoresOverscrollOnMainPage;
@property(retain, nonatomic) UIView *mainPageView; // @synthesize mainPageView=_mainPageView;
@property(retain, nonatomic) SBFPagedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(nonatomic) __weak id <CSCoverSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomPage; // @synthesize bottomPage=_bottomPage;
// - (void).cxx_destruct;
- (void)_setupLocketGestureOnScrollView:(BOOL)arg1;
- (void)_setupQuickNoteGestureOnScrollView:(BOOL)arg1;
- (void)_setupWallpaperGestureOnScrollView:(BOOL)arg1;
- (void)_updateLegibility;
- (NSUInteger)_indexOfMainPage;
- (CDStruct_7238a68f)_completedTransitionContextForPreviousTransitionContext:(CDStruct_7238a68f)arg1 newTransitionContext:(CDStruct_7238a68f)arg2;
- (CDStruct_7238a68f)_currentTransitionContext;
- (void)_addStatusBarLegibilityView;
- (void)_addTintingView;
- (void)_addAuthIndicator;
- (void)_addDateTimeContainer;
- (void)_addScrollView;
- (void)_removeScalableContentView;
- (void)_addScalableContentView;
- (void)_addHigherSlideableContentView;
- (void)_addSlideableContentView;
- (void)_addBackgroundView;
- (void)_orderSubviews;
- (void)_layoutStatusBarLegibilityView;
- (void)_layoutQuickActionsView;
- (void)_layoutTeachableMomentsContainerView;
- (void)_layoutHigherSlideableContentView;
- (void)_layoutProudLockView;
- (void)_layoutBottomPage;
- (void)_layoutAuthIndicator;
- (void)_layoutStatusBarBackgroundView;
- (void)_layoutFakeStatusBar;
- (CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double )arg3;
- (void)_layoutDateView;
- (void)_layoutTintingView;
- (void)_layoutWallpaperEffectView;
- (void)_layoutDateTimeViewClippingView;
- (CGRect)_overlayClippingFrame;
- (void)_layoutFullScreenViews;
- (void)_setDateView:(id)arg1 forTesting:(BOOL)arg2;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (long long)backgroundStyle;
- (BOOL)isTransitioningBackgroundStyle;
- (void)cancelTransition;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (BOOL)coverSheetScrollView:(id)arg1 shouldSetContentOffset:(CGPoint)arg2 animated:(BOOL)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double )arg6 verticalVelocity:(inout double )arg7;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)updateScalableContentTransformWithScale:(double)arg1;
- (void)removeScalableContentView;
- (void)addScalableContentView;
- (CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1;
- (void)viewControllerDidDisappear;
- (void)viewControllerWillAppear;
- (void)updateUIForAuthenticated:(BOOL)arg1;
- (BOOL)scrollToPageAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withAnimationSettings:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSArray *pageViews;
- (void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

