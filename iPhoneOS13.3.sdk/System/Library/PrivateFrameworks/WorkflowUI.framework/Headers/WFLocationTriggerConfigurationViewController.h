//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/WFLocationPickerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTimeRangePickerViewControllerDelegate-Protocol.h>

@class NSArray, NSDateFormatter, UITableView;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate>
{
    BOOL _isLocationBasedAlertsEnabled;
    BOOL _isArrive;
    UITableView *_tableView;
    NSArray *_sections;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) BOOL isArrive; // @synthesize isArrive=_isArrive;
@property(nonatomic) BOOL isLocationBasedAlertsEnabled; // @synthesize isLocationBasedAlertsEnabled=_isLocationBasedAlertsEnabled;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (void)timeRangePickerViewControllerDidCancel:(id)arg1;
- (void)timeRangePickerViewController:(id)arg1 didPickStartTime:(id)arg2 endTime:(id)arg3;
- (void)locationPickerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)presentNavigationControllerWithRootViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textForSummaryFooterView;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)checkLocationAuthorization;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(NSUInteger)arg3;

@end
