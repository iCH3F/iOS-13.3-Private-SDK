//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_providerID;
    NSString *_domainIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)rootItemIDWithProviderDomainID:(id)arg1;
+ (id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2;
+ (id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (void)getDomainIdentifier:(id )arg1 andIdentifier:(id )arg2 fromCoreSpotlightIdentifier:(id)arg3;
+ (id)coreSpotlightEncodedDomainIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItemID:(id)arg1;
@property(readonly, nonatomic) NSString *providerDomainID;
@property(readonly, nonatomic) NSString *providerIdentifier;
- (id)description;
- (id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)coreSpotlightIdentifier;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3;
- (id)initWithSearchableItem:(id)arg1;
@property(readonly, nonatomic) BOOL isPlaceholder;

@end

