//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDecimalNumber, NSDictionary, NSString, PKPass, PKPaymentPassAction, UITextField;
@protocol PKPaymentDataProvider, PKPerformActionViewDelegate;

@protocol PKPerformActionView <NSObject>
@property(readonly, nonatomic) UITextField *amountTextField;
@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate;
- (void)saveLastInputValues;
- (NSDictionary *)serviceProviderData;
- (NSString *)transactionCurrency;
- (NSDecimalNumber *)transactionAmount;
- (PKPass *)pass;
- (id)initWithPass:(PKPass *)arg1 action:(PKPaymentPassAction *)arg2 paymentDataProvider:(id <PKPaymentDataProvider>)arg3;

@optional
- (void)willDismissViewController;
@end

