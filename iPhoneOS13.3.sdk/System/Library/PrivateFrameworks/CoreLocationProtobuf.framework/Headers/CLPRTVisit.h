//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface CLPRTVisit : PBCodable <NSCopying>
{
    double _entryTime;
    double _exitTime;
    struct {
        unsigned int entryTime:1;
        unsigned int exitTime:1;
    } _has;
}

@property(nonatomic) double exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExitTime;
@property(nonatomic) BOOL hasEntryTime;

@end

