//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDPhotoPosition, PBDataReader;

@interface GEOPDStorefrontView : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSUInteger _imdataId;
    GEOPDGeographicCoordinate *_lookAtGeo;
    GEOPDOrientedPosition *_lookAt;
    GEOPDPhotoPosition *_photoPosition;
    GEOPDGeographicCoordinate *_viewpointGeo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_imdataId:1;
        unsigned int read_lookAtGeo:1;
        unsigned int read_lookAt:1;
        unsigned int read_photoPosition:1;
        unsigned int read_viewpointGeo:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_lookAtGeo:1;
        unsigned int wrote_lookAt:1;
        unsigned int wrote_photoPosition:1;
        unsigned int wrote_viewpointGeo:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) GEOPDGeographicCoordinate *viewpointGeo;
@property(readonly, nonatomic) BOOL hasViewpointGeo;
- (void)_readViewpointGeo;
@property(retain, nonatomic) GEOPDGeographicCoordinate *lookAtGeo;
@property(readonly, nonatomic) BOOL hasLookAtGeo;
- (void)_readLookAtGeo;
@property(retain, nonatomic) GEOPDOrientedPosition *lookAt;
@property(readonly, nonatomic) BOOL hasLookAt;
- (void)_readLookAt;
@property(nonatomic) BOOL hasImdataId;
@property(nonatomic) NSUInteger imdataId;
@property(retain, nonatomic) GEOPDPhotoPosition *photoPosition;
@property(readonly, nonatomic) BOOL hasPhotoPosition;
- (void)_readPhotoPosition;
- (id)initWithData:(id)arg1;
- (id)init;

@end

