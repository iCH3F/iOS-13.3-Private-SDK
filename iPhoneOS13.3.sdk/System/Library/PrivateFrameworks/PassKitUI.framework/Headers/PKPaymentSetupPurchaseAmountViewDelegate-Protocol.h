//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDecimalNumber;

@protocol PKPaymentSetupPurchaseAmountViewDelegate <NSObject>
- (void)transferBalanceFromExistingCard;
- (void)didUpdateAmount:(NSDecimalNumber *)arg1 isValid:(BOOL)arg2;
- (void)shakeCard;
@end

