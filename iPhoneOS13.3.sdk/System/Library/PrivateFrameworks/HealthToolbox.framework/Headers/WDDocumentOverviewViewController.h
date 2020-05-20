//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/SKStoreProductViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDAppSwooshTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayType, NSMutableArray, UIFont, WDAppSwooshTableViewCell, WDDocumentListDataProvider, WDProfile;

__attribute__((visibility("hidden")))
@interface WDDocumentOverviewViewController : HKTableViewController <WDAppSwooshTableViewCellDelegate, SKStoreProductViewControllerDelegate, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    WDDocumentListDataProvider *_dataProvider;
    NSMutableArray *_sectionTypes;
    NSMutableArray *_reportRowTypes;
    WDAppSwooshTableViewCell *_recommendedAppsCell;
    long long _totalReportCount;
    UIFont *_bodyFont;
}

@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) long long totalReportCount; // @synthesize totalReportCount=_totalReportCount;
@property(retain, nonatomic) WDAppSwooshTableViewCell *recommendedAppsCell; // @synthesize recommendedAppsCell=_recommendedAppsCell;
@property(retain, nonatomic) NSMutableArray *reportRowTypes; // @synthesize reportRowTypes=_reportRowTypes;
@property(retain, nonatomic) NSMutableArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(readonly, nonatomic) WDDocumentListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
// - (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)_reportSectionEstimatedRowHeight:(long long)arg1;
- (double)_reportSectionRowHeight:(long long)arg1;
- (void)_selectReportRowForIndexPath:(id)arg1;
- (void)_pushAccessViewController;
- (void)_pushShowAllViewController;
- (void)_pushReportDetailViewControllerForIndexPath:(id)arg1;
- (id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_appSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (void)_installSections;
- (void)_startRecommendedAppsEngine;
- (void)_storeDataNotification:(id)arg1;
- (void)_mobileAssetDataNotification:(id)arg1;
- (void)_handleAppSectionVisibility;
- (BOOL)_shouldShowAppsRow;
- (void)_reloadAllData;
- (void)_recomputeTotalReportCount;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;

@end

