//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class PKOrderPhysicalCardController, PKPhysicalCardController, UIBarButtonItem;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController
{
    PKPhysicalCardController *_controller;
    long long _context;
    NSUInteger _feature;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    BOOL _hasSelectedRow;
    long long _selectedRow;
    BOOL _loadingCustomizationOptions;
    PKOrderPhysicalCardController *_orderController;
}

// - (void).cxx_destruct;
- (void)_nextButtonPressed:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_updateNavigationButtons;
- (id)_cellForReasonAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_reasonRowSelectedAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)viewDidLoad;
- (id)initWithPhysicalCardController:(id)arg1 context:(long long)arg2;

@end

