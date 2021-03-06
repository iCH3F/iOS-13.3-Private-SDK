//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _addressFieldName;
    int _groundviewFieldName;
    int _otherFieldName;
    int _poiFieldName;
    int _workflowFieldName;
    struct {
        unsigned int has_addressFieldName:1;
        unsigned int has_groundviewFieldName:1;
        unsigned int has_otherFieldName:1;
        unsigned int has_poiFieldName:1;
        unsigned int has_workflowFieldName:1;
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
- (int)StringAsGroundviewFieldName:(id)arg1;
- (id)groundviewFieldNameAsString:(int)arg1;
@property(nonatomic) BOOL hasGroundviewFieldName;
@property(nonatomic) int groundviewFieldName;
- (int)StringAsOtherFieldName:(id)arg1;
- (id)otherFieldNameAsString:(int)arg1;
@property(nonatomic) BOOL hasOtherFieldName;
@property(nonatomic) int otherFieldName;
- (int)StringAsAddressFieldName:(id)arg1;
- (id)addressFieldNameAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressFieldName;
@property(nonatomic) int addressFieldName;
- (int)StringAsPoiFieldName:(id)arg1;
- (id)poiFieldNameAsString:(int)arg1;
@property(nonatomic) BOOL hasPoiFieldName;
@property(nonatomic) int poiFieldName;
- (int)StringAsWorkflowFieldName:(id)arg1;
- (id)workflowFieldNameAsString:(int)arg1;
@property(nonatomic) BOOL hasWorkflowFieldName;
@property(nonatomic) int workflowFieldName;

@end

