//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentTransactionDetailAmountLineItem-Protocol.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemDailyCashAdjustment : NSObject <PKPaymentTransactionDetailAmountLineItem>
{
    NSString *_label;
    NSString *_value;
    BOOL _hasTrailingLineSeperator;
}

@property(nonatomic) BOOL hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger lineItemType;
@property(readonly, nonatomic) BOOL isEmphasized;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *label;
- (id)initWithAssociatedTransaction:(id)arg1;

@end

