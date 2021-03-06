//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, VMAudioMessage, VMTranscriptMessage;

@interface VMVoicemailMessage : PBCodable <NSCopying>
{
    double _date;
    double _duration;
    VMAudioMessage *_audio;
    NSString *_callbackDestinationID;
    NSString *_dataURL;
    unsigned int _flags;
    unsigned int _identifier;
    unsigned int _protocolVersion;
    NSString *_receiverDestinationID;
    unsigned int _remoteUID;
    NSString *_senderDestinationID;
    VMTranscriptMessage *_transcript;
    NSString *_transcriptionURL;
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int flags:1;
        unsigned int identifier:1;
        unsigned int protocolVersion:1;
        unsigned int remoteUID:1;
    } _has;
}

@property(retain, nonatomic) NSString *receiverDestinationID; // @synthesize receiverDestinationID=_receiverDestinationID;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) VMAudioMessage *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) VMTranscriptMessage *transcript; // @synthesize transcript=_transcript;
@property(retain, nonatomic) NSString *transcriptionURL; // @synthesize transcriptionURL=_transcriptionURL;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *callbackDestinationID; // @synthesize callbackDestinationID=_callbackDestinationID;
@property(retain, nonatomic) NSString *senderDestinationID; // @synthesize senderDestinationID=_senderDestinationID;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int remoteUID; // @synthesize remoteUID=_remoteUID;
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
@property(readonly, nonatomic) BOOL hasReceiverDestinationID;
@property(nonatomic) BOOL hasProtocolVersion;
@property(readonly, nonatomic) BOOL hasAudio;
@property(readonly, nonatomic) BOOL hasTranscript;
@property(readonly, nonatomic) BOOL hasTranscriptionURL;
@property(nonatomic) BOOL hasFlags;
@property(readonly, nonatomic) BOOL hasDataURL;
@property(nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) BOOL hasCallbackDestinationID;
@property(readonly, nonatomic) BOOL hasSenderDestinationID;
@property(nonatomic) BOOL hasDate;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasRemoteUID;

@end

