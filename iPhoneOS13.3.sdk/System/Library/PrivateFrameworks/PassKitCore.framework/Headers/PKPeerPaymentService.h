//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject
{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_queue> *_accountQueue;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)resetApplePayManateeViewWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterDeviceWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)registerDeviceWithForceReregister:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)registerDeviceWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)balanceForPass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)receivedPeerPaymentMessageData:(id)arg1;
- (void)noteAccountDeleted;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(NSUInteger)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)registrationStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)resumeAccountChangedNotifications;
- (void)suspendAccountChangedNotifications;
- (void)deleteAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)accountWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
- (void)dealloc;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end

