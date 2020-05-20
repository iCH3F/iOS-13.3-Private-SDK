//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>
{
    NSData *_changeID;
    NSMutableArray *_pushMessages;
    BOOL _moreAvailable;
    struct {
        unsigned int moreAvailable:1;
    } _has;
}

+ (Class)pushMessageType;
@property(nonatomic) BOOL moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) NSMutableArray *pushMessages; // @synthesize pushMessages=_pushMessages;
@property(retain, nonatomic) NSData *changeID; // @synthesize changeID=_changeID;
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
@property(nonatomic) BOOL hasMoreAvailable;
- (id)pushMessageAtIndex:(NSUInteger)arg1;
- (NSUInteger)pushMessagesCount;
- (void)addPushMessage:(id)arg1;
- (void)clearPushMessages;
@property(readonly, nonatomic) BOOL hasChangeID;

@end

