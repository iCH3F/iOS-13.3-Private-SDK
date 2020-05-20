//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_statementIdentifier;
    NSDate *_transactionDate;
    NSUInteger _suggestedAmountCategory;
    NSDecimalNumber *_transactionAmount;
}

+ (BOOL)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (id)recordType;
@property(copy, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(nonatomic) NSUInteger suggestedAmountCategory; // @synthesize suggestedAmountCategory=_suggestedAmountCategory;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *statementIdentifier; // @synthesize statementIdentifier=_statementIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(NSUInteger)arg4;

@end

