//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKDisplayTypeSectionedContextViewDelegate-Protocol.h>
#import <HealthUI/HKInteractiveChartViewObserver-Protocol.h>
#import <HealthUI/HKSampleTypeDateRangeControllerObserver-Protocol.h>
#import <HealthUI/HKSampleTypeUpdateControllerObserver-Protocol.h>

@class HKDisplayType, HKDisplayTypeSectionedContextView, HKInteractiveChartOverlayViewController, HKOverlayContextLocation, HKOverlayRoomApplicationItems, HKValueRange, NSArray, NSDate, NSDateInterval, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HKOverlayRoomViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, HKSampleTypeUpdateControllerObserver>
{
    BOOL _shouldSelectInitialOverlay;
    BOOL _userHasOverriddenPreferredOverlay;
    HKOverlayRoomApplicationItems *_applicationItems;
    NSDate *_displayDate;
    long long _controllerMode;
    HKInteractiveChartOverlayViewController *_chartController;
    HKValueRange *_initialVisibleDateRange;
    long long _currentChartTimeScope;
    NSDateInterval *_currentChartDateInterval;
    HKOverlayContextLocation *_currentSelectedContextLocation;
    HKDisplayTypeSectionedContextView *_sectionedContextView;
    HKDisplayType *_primaryDisplayType;
    NSArray *_overlayContextSections;
    HKOverlayContextLocation *_initialSelectedContextLocation;
    NSObject<OS_dispatch_queue> *_contextUpdateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextUpdateQueue; // @synthesize contextUpdateQueue=_contextUpdateQueue;
@property(retain, nonatomic) HKOverlayContextLocation *initialSelectedContextLocation; // @synthesize initialSelectedContextLocation=_initialSelectedContextLocation;
@property(retain, nonatomic) NSArray *overlayContextSections; // @synthesize overlayContextSections=_overlayContextSections;
@property(retain, nonatomic) HKDisplayType *primaryDisplayType; // @synthesize primaryDisplayType=_primaryDisplayType;
@property(nonatomic) BOOL userHasOverriddenPreferredOverlay; // @synthesize userHasOverriddenPreferredOverlay=_userHasOverriddenPreferredOverlay;
@property(retain, nonatomic) HKDisplayTypeSectionedContextView *sectionedContextView; // @synthesize sectionedContextView=_sectionedContextView;
@property(retain, nonatomic) HKOverlayContextLocation *currentSelectedContextLocation; // @synthesize currentSelectedContextLocation=_currentSelectedContextLocation;
@property(copy, nonatomic) NSDateInterval *currentChartDateInterval; // @synthesize currentChartDateInterval=_currentChartDateInterval;
@property(nonatomic) long long currentChartTimeScope; // @synthesize currentChartTimeScope=_currentChartTimeScope;
@property(retain, nonatomic) HKValueRange *initialVisibleDateRange; // @synthesize initialVisibleDateRange=_initialVisibleDateRange;
@property(nonatomic) BOOL shouldSelectInitialOverlay; // @synthesize shouldSelectInitialOverlay=_shouldSelectInitialOverlay;
@property(retain, nonatomic) HKInteractiveChartOverlayViewController *chartController; // @synthesize chartController=_chartController;
@property(nonatomic) long long controllerMode; // @synthesize controllerMode=_controllerMode;
@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // @synthesize applicationItems=_applicationItems;
// - (void).cxx_destruct;
- (void)_refreshContextItemsAndUpdateChart:(BOOL)arg1;
- (void)_invalidateContextItems;
- (BOOL)_shouldUpdateContextItemsForChanges:(NSDictionary )arg1;
- (void)_refreshUpdatedItemsWithChartUpdate:(BOOL)arg1 invalidateChartItems:(BOOL)arg2;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(NSDictionary )arg2;
- (void)newDataArrivedWithValueRange:(id)arg1;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_updateChartForOverlaySelection:(id)arg1 previousSelection:(id)arg2;
- (long long)_contextItemCount;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_currentIndexPath;
- (void)_selectContextItemAtLocation:(id)arg1 animated:(BOOL)arg2;
- (id)_findNavigationController;
- (id)_currentChartEffectiveVisibleRange;
- (void)_showAllFilters:(id)arg1;
- (void)_layoutNoVerticalExpansion:(id)arg1;
- (BOOL)_usePreferredOverlayAndAllFiltersButton;
- (void)_pinView:(id)arg1 toSafeAreaOf:(id)arg2;
- (void)_setupOverlayContextItems;
- (id)_contextViewBackgroundColor;
- (id)_makeSeparatorView;
- (void)_setupInterface;
- (id)createChartOverlayViewController;
- (void)_setupPrimaryDisplayType;
- (void)_selectPreferredItem;
- (void)_updateContextTiles;
- (void)reloadOverlayContextItems;
- (void)dealloc;
- (void)viewDidLoad;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)controllerTitleWithApplicationItems:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;

@end

