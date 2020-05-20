//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NSArray, NSLayoutConstraint, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    NSArray *_homeAssistantDevicesHavingLanguageMismatch;
    NSLayoutConstraint *_heightAnchor;
    OBTrayButton *_continueButton;
}

@property(retain, nonatomic) OBTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch; // @synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)hu_preloadContent;
- (void)_continue;
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2;

@end

