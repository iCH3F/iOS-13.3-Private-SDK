//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse
{
    NSString *_voucher;
    NSURL *_redemptionURL;
}

@property(readonly, copy, nonatomic) NSURL *redemptionURL; // @synthesize redemptionURL=_redemptionURL;
@property(readonly, copy, nonatomic) NSString *voucher; // @synthesize voucher=_voucher;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

