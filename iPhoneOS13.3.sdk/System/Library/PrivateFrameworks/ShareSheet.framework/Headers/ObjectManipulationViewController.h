//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>


@class NSArray, NSMutableDictionary, UITableView, UIVisualEffectView;
@protocol ObjectManipulationDelegate;

@interface ObjectManipulationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <ObjectManipulationDelegate> _refreshDelegate;
    UIViewController *_itemPreviewViewController;
    UITableView *_tableView;
    NSArray *_customizationGroups;
    NSArray *_customizations;
    NSMutableDictionary *_sectionHeaders;
    UIVisualEffectView *_backgroundView;
}

@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaders; // @synthesize sectionHeaders=_sectionHeaders;
@property(retain, nonatomic) NSArray *customizations; // @synthesize customizations=_customizations;
@property(retain, nonatomic) NSArray *customizationGroups; // @synthesize customizationGroups=_customizationGroups;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIViewController *itemPreviewViewController; // @synthesize itemPreviewViewController=_itemPreviewViewController;
@property(nonatomic) __weak id <ObjectManipulationDelegate> refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
// - (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_reloadCustomizations;
- (void)didToggleSwitch:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)donePressed;
- (id)initWithCustomizationGroups:(id)arg1;

@end
