//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : PBCodable <NSCopying>
{
    NSMutableArray *_segments;
    unsigned int _updateNumber;
    unsigned int _utteranceNumber;
    BOOL _isFinal;
    BOOL _isLocal;
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;
}

+ (Class)segmentsType;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) BOOL isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)segmentsAtIndex:(NSUInteger)arg1;
- (NSUInteger)segmentsCount;
- (void)addSegments:(id)arg1;
- (void)clearSegments;
@property(nonatomic) BOOL hasIsFinal;
@property(nonatomic) BOOL hasIsLocal;
- (void)dealloc;

@end

