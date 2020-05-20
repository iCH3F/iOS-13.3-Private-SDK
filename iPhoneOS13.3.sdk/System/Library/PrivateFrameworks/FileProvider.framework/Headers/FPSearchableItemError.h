//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_customDomain;
    int _domain;
}

+ (id)errorFromString:(id)arg1;
+ (id)stringFromError:(id)arg1;
@property(retain, nonatomic) NSString *customDomain; // @synthesize customDomain=_customDomain;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) int domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCustomDomain;
- (int)StringAsDomain:(id)arg1;
- (id)domainAsString:(int)arg1;

@end

