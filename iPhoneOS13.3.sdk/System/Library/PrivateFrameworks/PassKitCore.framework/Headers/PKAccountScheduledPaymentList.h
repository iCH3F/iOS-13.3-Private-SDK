//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding>
{
    NSMutableArray *_scheduledPayments;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scheduledPaymentOfFundingSourceType:(long long)arg1;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1;
- (void)addScheduledPayment:(id)arg1;
@property(readonly, nonatomic) NSArray *scheduledPayments;
- (id)initWithScheduledPayment:(id)arg1;
- (id)init;

@end

