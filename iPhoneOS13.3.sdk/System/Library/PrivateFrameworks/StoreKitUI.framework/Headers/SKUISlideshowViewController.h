//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUISlideshowItemViewControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, SKUIClientContext, UIPageViewController;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SKUIClientContext *_clientContext;
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    NSMutableDictionary *_itemViewControllersCache;
    BOOL _overlayVisible;
    BOOL _shouldCancelDelayedOverlayVisibilityChange;
    BOOL _overlayVisibilityWillChangeWithDelay;
    BOOL _lockOverlayControlsVisible;
    struct {
        long long style;
        BOOL hidden;
    } _savedStatusBarState;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    id <SKUISlideshowViewControllerDelegate> _delegate;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_restoreStatusBarAppearanceState;
- (void)_saveStatusBarAppearanceState;
- (void)_setOverlayVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_fadeOutOverlayAfterDelay:(NSUInteger)arg1;
- (void)_toggleFadeOverlay;
- (void)_doneButtonTapped:(id)arg1;
- (void)_contentViewTapped:(id)arg1;
- (void)_updateTitleWithIndex:(long long)arg1;
- (void)_updateCurrentIndex;
- (id)_itemViewControllerForIndex:(long long)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)currentItemViewController;
- (void)reloadData;
- (id)animatorForDismissedController:(id)arg1;
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

