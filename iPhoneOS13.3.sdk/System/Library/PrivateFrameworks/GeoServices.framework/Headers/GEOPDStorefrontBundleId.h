//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOPDStorefrontBundleId : PBCodable <NSCopying>
{
    NSUInteger _identifier;
    NSUInteger _timestamp;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_timestamp:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) NSUInteger timestamp;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) NSUInteger identifier;

@end

