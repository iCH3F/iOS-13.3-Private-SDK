//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, REMChangeToken;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    REMChangeToken *_lastConsumedChangeToken;
    NSDate *_lastConsumedDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *lastConsumedDate; // @synthesize lastConsumedDate=_lastConsumedDate;
@property(retain, nonatomic) REMChangeToken *lastConsumedChangeToken; // @synthesize lastConsumedChangeToken=_lastConsumedChangeToken;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;

@end

