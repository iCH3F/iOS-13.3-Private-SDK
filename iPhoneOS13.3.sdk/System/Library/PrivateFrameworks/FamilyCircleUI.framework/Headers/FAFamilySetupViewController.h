//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import <FamilyCircleUI/FAFamilySetupPageDelegate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAGrandSlamSigner, AAUIRemoteUIController, ACAccount, ACAccountStore, NSArray, NSMutableURLRequest, UIActivityIndicatorView, UINavigationItem;

@interface FAFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAUIRemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
    BOOL _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_originalRightBarButtonItems;
    UINavigationItem *_navigationItemShowingSpinner;
}

// - (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (void)_remoteUIDidCancel;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (void)_loadRemoteUIPages;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (id)_urlForLaunchingSettings;
- (BOOL)_isRunningInSettings;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3;
- (id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3;

@end

