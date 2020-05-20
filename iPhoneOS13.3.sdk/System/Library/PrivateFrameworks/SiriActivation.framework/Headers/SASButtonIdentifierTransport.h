//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)siriButtonIdentifier;
- (BOOL)_identifierMatchesSiriButtonIdentifier:(long long)arg1;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)initWithSiriButtonIdentifier:(long long)arg1;

@end

