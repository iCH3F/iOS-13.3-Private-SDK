//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitEventTrigger;

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    AWDHomeKitEventTrigger *_eventTrigger;
    int _requestOrigin;
    unsigned int _resultErrorCode;
    struct {
        unsigned int timestamp:1;
        unsigned int requestOrigin:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsRequestOrigin:(id)arg1;
- (id)requestOriginAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestOrigin;
@property(nonatomic) int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) BOOL hasEventTrigger;
@property(nonatomic) BOOL hasResultErrorCode;
@property(nonatomic) BOOL hasTimestamp;

@end

