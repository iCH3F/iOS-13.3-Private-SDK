//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>
{
    BOOL _deviceSupportsPeerPaymentAccountPayment;
    PKBankAccountInformation *_bankAccountInformation;
    PKCurrencyAmount *_peerPaymentBalance;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment; // @synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment;
@property(copy, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(copy, nonatomic) PKBankAccountInformation *bankAccountInformation; // @synthesize bankAccountInformation=_bankAccountInformation;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(BOOL)arg3;

@end

