//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation, NSMutableArray, NSString, PBDataReader;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    NSMutableArray *_address;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int has_numberOfVisitsBucketSize:1;
        unsigned int has_statusCode:1;
        unsigned int read_addressID:1;
        unsigned int read_addressLocation:1;
        unsigned int read_address:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressLocation:1;
        unsigned int wrote_address:1;
        unsigned int wrote_numberOfVisitsBucketSize:1;
        unsigned int wrote_statusCode:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)addressType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)addressAtIndex:(NSUInteger)arg1;
- (NSUInteger)addressCount;
- (void)_addNoFlagsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)clearAddress;
@property(retain, nonatomic) NSMutableArray *address;
- (void)_readAddress;
@property(nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property(nonatomic) unsigned int numberOfVisitsBucketSize;
@property(retain, nonatomic) NSString *addressID;
@property(readonly, nonatomic) BOOL hasAddressID;
- (void)_readAddressID;
@property(retain, nonatomic) GEOLocation *addressLocation;
@property(readonly, nonatomic) BOOL hasAddressLocation;
- (void)_readAddressLocation;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;
- (id)init;

@end

