//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackComponents;
    NSString *_feedbackId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponents:1;
        unsigned int read_feedbackId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponents:1;
        unsigned int wrote_feedbackId:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)feedbackComponentType;
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
- (id)feedbackComponentAtIndex:(NSUInteger)arg1;
- (NSUInteger)feedbackComponentsCount;
- (void)_addNoFlagsFeedbackComponent:(id)arg1;
- (void)addFeedbackComponent:(id)arg1;
- (void)clearFeedbackComponents;
@property(retain, nonatomic) NSMutableArray *feedbackComponents;
- (void)_readFeedbackComponents;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(retain, nonatomic) NSString *feedbackId;
@property(readonly, nonatomic) BOOL hasFeedbackId;
- (void)_readFeedbackId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

