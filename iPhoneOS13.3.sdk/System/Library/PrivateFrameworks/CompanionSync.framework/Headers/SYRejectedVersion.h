//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, SYMessageHeader;

@interface SYRejectedVersion : PBCodable <NSCopying>
{
    struct {
        unsigned int list;
        NSUInteger count;
        NSUInteger size;
    } _supportedVersions;
    SYMessageHeader *_header;
    NSString *_inReplyTo;
}

@property(retain, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
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
- (void)setSupportedVersions:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)supportedVersionsAtIndex:(NSUInteger)arg1;
- (void)addSupportedVersions:(unsigned int)arg1;
- (void)clearSupportedVersions;
@property(readonly, nonatomic) unsigned int supportedVersions;
@property(readonly, nonatomic) NSUInteger supportedVersionsCount;
- (void)dealloc;

@end

