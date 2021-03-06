//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, PKPaymentPass, PKSecureElementCertificateSet, PKServiceProviderOrder;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest
{
    PKSecureElementCertificateSet *_certificates;
    PKPaymentPass *_pass;
    PKServiceProviderOrder *_serviceProviderOrder;
    NSData *_nonce;
}

@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;

@end

