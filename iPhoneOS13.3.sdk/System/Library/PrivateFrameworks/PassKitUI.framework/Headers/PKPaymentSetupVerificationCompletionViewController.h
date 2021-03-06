//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentVerificationObserverDelegate-Protocol.h>

@class PKActivityTableCell, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKPaymentVerificationController, PKPaymentVerificationObserver, PKTableHeaderView, UIColor;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate>
{
    PKActivityTableCell *_verificationCodeCell;
    BOOL _verificationCodeAccepted;
    BOOL _resignedResponder;
    PKPaymentVerificationObserver *_verificationObserver;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    UIColor *_editableTextFieldColor;
    long long _mode;
    BOOL _offerOtherMethods;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;
// - (void).cxx_destruct;
- (void)_showActivationError:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_terminateFlow;
- (void)_enableUI;
- (void)_disableUI;
- (void)_submitVerificationCode;
- (void)_showCompletedUIWithNextHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)_handleNextStep;
- (void)verificationObserverDidTimeout:(id)arg1;
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)next:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (void)_handlePassVerifiedNotification:(id)arg1;
- (id)initWithVerificationController:(id)arg1 mode:(long long)arg2 offerOtherMethods:(BOOL)arg3;

@end

