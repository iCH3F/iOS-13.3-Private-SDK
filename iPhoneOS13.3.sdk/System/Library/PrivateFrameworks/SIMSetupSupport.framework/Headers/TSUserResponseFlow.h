//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSString, UIBarButtonItem;

@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>
{
    BOOL _confirmationCodeRequired;
    NSString *_confirmationCode;
    UIBarButtonItem *_cancelButton;
    NSUInteger _userConsentType;
}

@property NSUInteger userConsentType; // @synthesize userConsentType=_userConsentType;
// - (void).cxx_destruct;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(id /* CDUnknownBlockType */)arg1;
- (id)firstViewController;
- (id)initWithConfirmationCodeRequired:(BOOL)arg1;

@end

