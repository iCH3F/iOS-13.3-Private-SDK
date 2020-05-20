//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCUIProfile;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController : UITableViewController <PSStateRestoration>
{
    BOOL _installingFromPurgatory;
    BOOL _installComplete;
    BOOL _profileOffersReenroll;
    BOOL _profileRemovable;
    id <MCProfileViewControllerDelegate> _profileViewControllerDelegate;
    long long _profileViewMode;
    MCUIProfile *_UIProfile;
}

@property(nonatomic) BOOL profileRemovable; // @synthesize profileRemovable=_profileRemovable;
@property(nonatomic) BOOL profileOffersReenroll; // @synthesize profileOffersReenroll=_profileOffersReenroll;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) BOOL installComplete; // @synthesize installComplete=_installComplete;
@property(nonatomic) BOOL installingFromPurgatory; // @synthesize installingFromPurgatory=_installingFromPurgatory;
@property(nonatomic) long long profileViewMode; // @synthesize profileViewMode=_profileViewMode;
@property(nonatomic) __weak id <MCProfileViewControllerDelegate> profileViewControllerDelegate; // @synthesize profileViewControllerDelegate=_profileViewControllerDelegate;
// - (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateProfile;
- (void)_removeProfile;
- (BOOL)_shouldShowRemoveButton;
- (BOOL)_shouldShowUpdateButton;
- (void)setProfile:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;
- (id)initWithStyle:(long long)arg1;

@end

