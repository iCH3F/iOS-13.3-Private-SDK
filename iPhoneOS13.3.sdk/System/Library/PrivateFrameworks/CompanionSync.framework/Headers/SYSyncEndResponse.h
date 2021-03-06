//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncEndResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    int _errorResolution;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int errorResolution:1;
    } _has;
}

@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
- (int)StringAsErrorResolution:(id)arg1;
- (id)errorResolutionAsString:(int)arg1;
@property(nonatomic) BOOL hasErrorResolution;
@property(nonatomic) int errorResolution; // @synthesize errorResolution=_errorResolution;
@property(readonly, nonatomic) BOOL hasError;

@end

