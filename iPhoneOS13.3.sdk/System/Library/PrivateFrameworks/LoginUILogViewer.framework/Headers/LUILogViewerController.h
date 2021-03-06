//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginUILogViewer/LUILogContentViewControllerDelegate-Protocol.h>
#import <LoginUILogViewer/LUILogFilterViewControllerDelegate-Protocol.h>
#import <LoginUILogViewer/LUILogViewerViewDelegate-Protocol.h>

@class LUILogContentViewController, LUILogFilterViewController, LUILogViewerAssistiveTouch, LUILogViewerView, NSArray, NSDate, NSMutableArray, NSMutableSet, UIPageViewController, UIPanGestureRecognizer, UIView;
@protocol LUILogViewerControllerDelegate;

@interface LUILogViewerController : NSObject <LUILogViewerViewDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, LUILogFilterViewControllerDelegate, UISearchBarDelegate, LUILogContentViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isStreaming;
    BOOL _isFetchingLogs;
    BOOL _outsideKeyboardIsShowing;
    id <LUILogViewerControllerDelegate> _delegate;
    LUILogViewerView *_logViewerView;
    LUILogViewerAssistiveTouch *_assistiveTouch;
    UIView *_baseView;
    LUILogContentViewController *_logContentViewController;
    LUILogFilterViewController *_logFilterViewController;
    UIPageViewController *_pageViewController;
    NSArray *_predicates;
    double _logInterval;
    NSDate *_lastLogDate;
    NSDate *_firstLogDate;
    NSMutableSet *_logMinutesSet;
    NSMutableArray *_logMinutesArray;
    NSArray *_highlightRanges;
    long long _currentHighlightIndex;
    UIPanGestureRecognizer *_panGesture;
}

@property(nonatomic) BOOL outsideKeyboardIsShowing; // @synthesize outsideKeyboardIsShowing=_outsideKeyboardIsShowing;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) BOOL isFetchingLogs; // @synthesize isFetchingLogs=_isFetchingLogs;
@property(nonatomic) long long currentHighlightIndex; // @synthesize currentHighlightIndex=_currentHighlightIndex;
@property(retain, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming=_isStreaming;
@property(retain, nonatomic) NSMutableArray *logMinutesArray; // @synthesize logMinutesArray=_logMinutesArray;
@property(retain, nonatomic) NSMutableSet *logMinutesSet; // @synthesize logMinutesSet=_logMinutesSet;
@property(retain, nonatomic) NSDate *firstLogDate; // @synthesize firstLogDate=_firstLogDate;
@property(retain, nonatomic) NSDate *lastLogDate; // @synthesize lastLogDate=_lastLogDate;
@property(nonatomic) double logInterval; // @synthesize logInterval=_logInterval;
@property(retain, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) LUILogFilterViewController *logFilterViewController; // @synthesize logFilterViewController=_logFilterViewController;
@property(retain, nonatomic) LUILogContentViewController *logContentViewController; // @synthesize logContentViewController=_logContentViewController;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) LUILogViewerAssistiveTouch *assistiveTouch; // @synthesize assistiveTouch=_assistiveTouch;
@property(retain, nonatomic) LUILogViewerView *logViewerView; // @synthesize logViewerView=_logViewerView;
@property(nonatomic) __weak id <LUILogViewerControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)logContentViewControllerLogEndDate:(id)arg1;
- (id)logContentViewControllerLogStartDate:(id)arg1;
- (void)logContentViewController:(id)arg1 didSelectDateForLog:(id)arg2;
- (void)logContentViewController:(id)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
- (BOOL)logFilterViewControllerShouldAllowTextEditing:(id)arg1;
- (void)logFilterViewControllerApplyButtonTapped:(id)arg1;
- (void)logFilterViewController:(id)arg1 didDeletePredicate:(id)arg2;
- (void)logFilterViewController:(id)arg1 didAddPredicates:(id)arg2;
- (id)currentPredicates:(id)arg1;
- (id)orderedViewControllers;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)logViewerRightCaretButtonTapped:(id)arg1;
- (void)logViewerLeftCaretButtonTapped:(id)arg1;
- (void)logViewerFilterButtonTapped:(id)arg1;
- (void)logViewerViewClearButtontapped:(id)arg1;
- (void)logViewerViewLogButtonTapped:(id)arg1;
- (void)logViewerViewCloseButtonTapped:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (_NSRange)_searchRangeForDate:(id)arg1 inText:(id)arg2;
- (void)_cleanupHighlight;
- (void)_updateHighlight;
- (void)_setupInitialHighlight;
- (BOOL)_performSearch:(id)arg1;
- (void)_decreaseCurrentHighlightIndex;
- (void)_increaseCurrentHighlightIndex;
- (void)_moveElementsToView:(id)arg1;
- (void)showLogContentPage;
- (void)showLogFilterPage;
- (void)assistiveTouchButtonTapped:(id)arg1;
- (void)_dismissLogViewerView;
- (void)_presentLogViewerView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_cleanupLogs;
- (void)_updateLogFromLastTime;
- (void)_stopStreaming;
- (void)_startStreamLog;
- (id)_attributedLogStringFrom:(id)arg1 fontSize:(double)arg2;
- (id)_getLogsFromDate:(id)arg1 predicate:(id)arg2 duplicateHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_grabLogAndUpdateTextView;
- (void)dealloc;
- (id)init;
- (void)setup;

@end

