//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/HUResizableCellDelegate-Protocol.h>

@class NSHashTable, NSMapTable;

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate>
{
    BOOL _sectionContentInsetFollowsLayoutMargins;
    BOOL _viewLayingOut;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property(nonatomic, getter=isViewLayingOut) BOOL viewLayingOut; // @synthesize viewLayingOut=_viewLayingOut;
@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // @synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // @synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime;
@property(nonatomic) BOOL sectionContentInsetFollowsLayoutMargins; // @synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins;
// - (void).cxx_destruct;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)contentSizeCategoryDidChange;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

