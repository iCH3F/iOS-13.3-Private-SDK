//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PKPayment, PKPaymentAuthorizationResult, PKPaymentClientUpdate, PKPaymentHostUpdate, PKRemotePaymentRequest;

@protocol PKContinuityPaymentServiceDelegate <NSObject>

@optional
- (void)didReceiveCancellationForRemotePaymentRequest:(PKRemotePaymentRequest *)arg1;
- (void)didReceivePaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceiveUpdatedPaymentDevices:(NSArray *)arg1;
@end

