//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRSetRecordingStateMessageProtobuf : PBCodable <NSCopying>
{
    int _state;
    CDStruct_5accba53 _has;
}

- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(nonatomic) BOOL hasState;
@property(nonatomic) int state; // @synthesize state=_state;

@end

