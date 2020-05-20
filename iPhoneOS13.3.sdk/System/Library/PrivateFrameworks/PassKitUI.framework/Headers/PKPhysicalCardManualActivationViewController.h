//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKPhysicalCardActionControllerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, NSString, PKBusinessChatController, PKOrderPhysicalCardHeroView, PKPaymentPass, PKPhysicalCard, PKPhysicalCardActionController, SFClient;

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate>
{
    PKPhysicalCard *_physicalCard;
    PKPhysicalCardActionController *_actionController;
    PKPaymentPass *_paymentPass;
    NSUInteger _feature;
    NSString *_activationCode;
    PKOrderPhysicalCardHeroView *_hero;
    long long _state;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationManager;
    PKBusinessChatController *_businessChatController;
    SFClient *_sharingClient;
}

// - (void).cxx_destruct;
- (void)_presentDisplayableError:(id)arg1;
- (void)_showSpinner:(BOOL)arg1;
- (void)_setupForCurrentState;
- (void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 activationCode:(id)arg5;

@end

