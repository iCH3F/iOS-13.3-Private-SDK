//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest
{
    BOOL _devSigned;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    NSUInteger _documentType;
    NSArray *_certificates;
}

@property(nonatomic) BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) NSUInteger documentType; // @synthesize documentType=_documentType;
@property(copy, nonatomic) NSString *documentCountryCode; // @synthesize documentCountryCode=_documentCountryCode;
@property(copy, nonatomic) NSData *backImageData; // @synthesize backImageData=_backImageData;
@property(copy, nonatomic) NSData *frontImageData; // @synthesize frontImageData=_frontImageData;
// - (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

