//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>

@class CNContact, PKAccount, PKAccountService;

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController <PKAddressEditorViewControllerDelegate>
{
    CNContact *_currentBillingAddress;
    PKAccountService *_accountService;
    PKAccount *_account;
    NSUInteger _accountFeatureIdentifier;
    long long _detailViewStyle;
    id /* CDUnknownBlockType */ _handler;
    BOOL _loadingNewBillingContact;
}

// - (void).cxx_destruct;
- (long long)modalPresentationStyle;
- (id)requiredBillingAddressKeys;
- (id)_enterNewBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_currentBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_didSelectChangeAddress;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)viewDidLoad;
- (id)initWithBillingAddress:(id)arg1 account:(id)arg2 accountService:(id)arg3 detailViewStyle:(long long)arg4 handler:(id /* CDUnknownBlockType */)arg5;

@end

