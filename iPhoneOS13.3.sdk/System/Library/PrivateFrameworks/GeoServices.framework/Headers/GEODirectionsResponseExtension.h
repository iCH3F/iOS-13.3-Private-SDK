//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOETAServiceResponseSummary;

__attribute__((visibility("hidden")))
@interface GEODirectionsResponseExtension : PBCodable <NSCopying>
{
    GEOETAServiceResponseSummary *_etaServiceSummary;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) BOOL hasEtaServiceSummary;
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

@end

