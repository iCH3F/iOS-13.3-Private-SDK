//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, SGContact, SGMatchedDetails, SGObject, SGRecordId;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_matchingFieldRecordId;
    long long _matchingFieldType;
    SGContact *_contact;
    NSArray *_matchTokens;
    SGMatchedDetails *_matchedDetails;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) SGMatchedDetails *matchedDetails; // @synthesize matchedDetails=_matchedDetails;
@property(readonly, nonatomic) NSArray *matchTokens; // @synthesize matchTokens=_matchTokens;
@property(readonly, nonatomic) long long matchingFieldType; // @synthesize matchingFieldType=_matchingFieldType;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
@property(readonly, nonatomic) SGObject *matchingField;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactMatch:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;

@end
