//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOABDebugPanelExperimentBranch, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABExperimentAssignment : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _placeRequestType;
    int _serviceType;
    struct {
        unsigned int has_placeRequestType:1;
        unsigned int has_serviceType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int read_offlineAbJson:1;
        unsigned int read_querySubstring:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_debugExperimentBranch:1;
        unsigned int wrote_offlineAbJson:1;
        unsigned int wrote_querySubstring:1;
        unsigned int wrote_placeRequestType:1;
        unsigned int wrote_serviceType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) NSString *offlineAbJson;
@property(readonly, nonatomic) BOOL hasOfflineAbJson;
- (void)_readOfflineAbJson;
@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property(readonly, nonatomic) BOOL hasDebugExperimentBranch;
- (void)_readDebugExperimentBranch;
@property(retain, nonatomic) NSString *querySubstring;
@property(readonly, nonatomic) BOOL hasQuerySubstring;
- (void)_readQuerySubstring;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceRequestType;
@property(nonatomic) int placeRequestType;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

