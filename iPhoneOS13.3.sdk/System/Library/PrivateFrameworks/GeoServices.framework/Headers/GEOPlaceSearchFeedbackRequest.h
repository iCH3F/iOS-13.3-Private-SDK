//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct {
        unsigned int has_sessionGUID:1;
        unsigned int has_businessID:1;
        unsigned int has_timestamp:1;
        unsigned int has_feedbackType:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_numberOfResults:1;
        unsigned int has_positionInResults:1;
        unsigned int has_sequenceNumber:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) int sequenceNumber;
@property(nonatomic) BOOL hasPositionInResults;
@property(nonatomic) int positionInResults;
@property(nonatomic) BOOL hasNumberOfResults;
@property(nonatomic) int numberOfResults;
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedbackType;
@property(nonatomic) int feedbackType;
@property(nonatomic) BOOL hasBusinessID;
@property(nonatomic) long long businessID;
@property(nonatomic) BOOL hasSessionGUID;
@property(nonatomic) struct GEOSessionID sessionGUID;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;

@end

