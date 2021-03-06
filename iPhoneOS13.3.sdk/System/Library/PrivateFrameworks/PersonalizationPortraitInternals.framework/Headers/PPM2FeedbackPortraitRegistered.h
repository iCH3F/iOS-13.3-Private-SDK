//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying>
{
    NSString *_clientId;
    int _domain;
    NSString *_mappingId;
    NSMutableArray *_records;
    int _type;
    NSString *_variantId;
    BOOL _fromPortrait;
    struct {
        unsigned int domain:1;
        unsigned int type:1;
        unsigned int fromPortrait:1;
    } _has;
}

+ (Class)recordsType;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(nonatomic) BOOL fromPortrait; // @synthesize fromPortrait=_fromPortrait;
@property(retain, nonatomic) NSString *mappingId; // @synthesize mappingId=_mappingId;
@property(retain, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
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
- (id)recordsAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
@property(nonatomic) BOOL hasFromPortrait;
@property(readonly, nonatomic) BOOL hasMappingId;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (int)StringAsDomain:(id)arg1;
- (id)domainAsString:(int)arg1;
@property(nonatomic) BOOL hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) BOOL hasVariantId;
@property(readonly, nonatomic) BOOL hasClientId;

@end

