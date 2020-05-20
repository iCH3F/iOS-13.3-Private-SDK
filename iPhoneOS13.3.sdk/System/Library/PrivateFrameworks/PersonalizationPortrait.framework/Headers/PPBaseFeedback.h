//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSString;

@interface PPBaseFeedback : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_clientIdentifier;
    NSArray *_feedbackItems;
    NSString *_clientBundleId;
    NSString *_mappingId;
    NSDate *_timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(readonly, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(readonly, nonatomic) NSArray *feedbackItems; // @synthesize feedbackItems=_feedbackItems;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToPPBaseFeedback:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (NSUInteger)hash;
- (id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5;
- (id)initWithFeedbackItems:(id)arg1 mappingId:(id)arg2;
@property(readonly) BOOL isMapped;

@end

