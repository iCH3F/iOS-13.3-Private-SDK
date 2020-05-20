//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable <NSCopying>
{
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    unsigned int _maxMediaBitrate;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned int _metadata;
    unsigned int _payload;
    unsigned int _qualityIndex;
    unsigned int _repairedMaxNetworkBitrate;
    unsigned int _repairedStreamID;
    unsigned int _ssrc;
    unsigned int _streamID;
    unsigned int _supportedVideoFormats;
    struct {
        unsigned int maxMediaBitrate:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int metadata:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int repairedStreamID:1;
    } _has;
}

+ (int)payloadForVideoPayload:(int)arg1;
+ (int)videoPayloadForPayload:(int)arg1;
+ (BOOL)convertVideoFormat:(int)arg1 width:(int )arg2 height:(int )arg3;
+ (int)videoFormatForWidth:(int)arg1 height:(int)arg2;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned int repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned int supportedVideoFormats; // @synthesize supportedVideoFormats=_supportedVideoFormats;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property(nonatomic) BOOL hasRepairedStreamID;
@property(nonatomic) BOOL hasMaxPacketsPerSecond;
@property(nonatomic) BOOL hasMaxMediaBitrate;
@property(nonatomic) BOOL hasMetadata;
@property(nonatomic) BOOL hasMaxNetworkBitrate;
- (void)printWithLogFile:(void )arg1;
- (id)description;
@property(readonly, nonatomic) BOOL isSubStream;
- (id)newMultiwayVideoStream;
- (id)initWithStreamConfig:(id)arg1;

@end

