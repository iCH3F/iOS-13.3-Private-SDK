//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_paymentIdentifier;
    NSString *_action;
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

