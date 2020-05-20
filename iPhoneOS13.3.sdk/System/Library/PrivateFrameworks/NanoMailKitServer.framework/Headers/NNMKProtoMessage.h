//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSMutableArray *_bccs;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    unsigned int _isSpecialMailboxSpecific;
    NSString *_mailboxId;
    NSString *_messageId;
    NSString *_messageIdHeader;
    NSString *_notificationMessageId;
    NSString *_publisherBulletinId;
    NSString *_remoteId;
    unsigned int _status;
    unsigned int _statusVersion;
    NSString *_subject;
    NSMutableArray *_tos;
    BOOL _isThreadSpecific;
    struct {
        unsigned int isSpecialMailboxSpecific:1;
        unsigned int status:1;
        unsigned int statusVersion:1;
        unsigned int isThreadSpecific:1;
    } _has;
}

+ (Class)bccType;
+ (Class)ccType;
+ (Class)toType;
+ (id)protoMessageFromMessage:(id)arg1 organizedByThread:(BOOL)arg2 sanitizeMessageId:(BOOL)arg3 supportsStandaloneMode:(BOOL)arg4;
@property(nonatomic) unsigned int statusVersion; // @synthesize statusVersion=_statusVersion;
@property(retain, nonatomic) NSString *publisherBulletinId; // @synthesize publisherBulletinId=_publisherBulletinId;
@property(nonatomic) unsigned int isSpecialMailboxSpecific; // @synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific;
@property(nonatomic) BOOL isThreadSpecific; // @synthesize isThreadSpecific=_isThreadSpecific;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSString *notificationMessageId; // @synthesize notificationMessageId=_notificationMessageId;
@property(retain, nonatomic) NSString *remoteId; // @synthesize remoteId=_remoteId;
@property(retain, nonatomic) NSMutableArray *bccs; // @synthesize bccs=_bccs;
@property(retain, nonatomic) NSString *messageIdHeader; // @synthesize messageIdHeader=_messageIdHeader;
@property(retain, nonatomic) NSData *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSData *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSMutableArray *ccs; // @synthesize ccs=_ccs;
@property(retain, nonatomic) NSMutableArray *tos; // @synthesize tos=_tos;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
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
@property(nonatomic) BOOL hasStatusVersion;
@property(readonly, nonatomic) BOOL hasPublisherBulletinId;
@property(nonatomic) BOOL hasIsSpecialMailboxSpecific;
@property(nonatomic) BOOL hasIsThreadSpecific;
@property(readonly, nonatomic) BOOL hasMailboxId;
@property(readonly, nonatomic) BOOL hasNotificationMessageId;
@property(readonly, nonatomic) BOOL hasRemoteId;
- (id)bccAtIndex:(NSUInteger)arg1;
- (NSUInteger)bccsCount;
- (void)addBcc:(id)arg1;
- (void)clearBccs;
@property(readonly, nonatomic) BOOL hasMessageIdHeader;
@property(readonly, nonatomic) BOOL hasDateReceived;
@property(readonly, nonatomic) BOOL hasDateSent;
- (id)ccAtIndex:(NSUInteger)arg1;
- (NSUInteger)ccsCount;
- (void)addCc:(id)arg1;
- (void)clearCcs;
- (id)toAtIndex:(NSUInteger)arg1;
- (NSUInteger)tosCount;
- (void)addTo:(id)arg1;
- (void)clearTos;
@property(readonly, nonatomic) BOOL hasFrom;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasSubject;
@property(readonly, nonatomic) BOOL hasConversationId;
@property(readonly, nonatomic) BOOL hasAccountId;
@property(readonly, nonatomic) BOOL hasMessageId;

@end
