//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentTransaction;

@interface PKPaymentTransactionProcessorItem : NSObject
{
//     struct os_unfair_lock_s _transactionLock;
    BOOL _foundOptimalLocation;
    BOOL _useBackgroundLocation;
    BOOL _isClearingAttempt;
    PKPaymentTransaction *_paymentTransaction;
    PKPaymentApplication *_paymentApplication;
    NSString *_passUniqueIdentifier;
}

@property(nonatomic) BOOL isClearingAttempt; // @synthesize isClearingAttempt=_isClearingAttempt;
@property(nonatomic) BOOL useBackgroundLocation; // @synthesize useBackgroundLocation=_useBackgroundLocation;
@property(nonatomic) BOOL foundOptimalLocation; // @synthesize foundOptimalLocation=_foundOptimalLocation;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
// - (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)init;

@end
