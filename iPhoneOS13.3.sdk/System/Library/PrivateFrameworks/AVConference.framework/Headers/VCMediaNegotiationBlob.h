//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings, VCMediaNegotiationFaceTimeSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable <NSCopying>
{
    NSUInteger _ntpTime;
    VCMediaNegotiationBlobAudioSettings *_audioSettings;
    NSMutableArray *_bandwidthSettings;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    unsigned int _blobVersion;
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;
    VCMediaNegotiationFaceTimeSettings *_faceTimeSettings;
    unsigned int _mediaControlInfoVersion;
    VCMediaNegotiationBlobMomentsSettings *_momentsSettings;
    NSMutableArray *_multiwayAudioStreams;
    NSMutableArray *_multiwayVideoStreams;
    VCMediaNegotiationBlobVideoSettings *_screenSettings;
    NSString *_userAgent;
    VCMediaNegotiationBlobVideoSettings *_videoSettings;
    BOOL _allowDynamicMaxBitrate;
    BOOL _allowsContentsChangeWithAspectPreservation;
    struct {
        unsigned int ntpTime:1;
        unsigned int basebandCodecSampleRate:1;
        unsigned int blobVersion:1;
        unsigned int mediaControlInfoVersion:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;
}

+ (Class)multiwayVideoStreamType;
+ (Class)multiwayAudioStreamsType;
+ (Class)bandwidthSettingsType;
@property(retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings; // @synthesize faceTimeSettings=_faceTimeSettings;
@property(retain, nonatomic) NSMutableArray *multiwayVideoStreams; // @synthesize multiwayVideoStreams=_multiwayVideoStreams;
@property(nonatomic) unsigned int blobVersion; // @synthesize blobVersion=_blobVersion;
@property(nonatomic) NSUInteger ntpTime; // @synthesize ntpTime=_ntpTime;
@property(retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) NSMutableArray *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // @synthesize captionsSettings=_captionsSettings;
@property(retain, nonatomic) NSMutableArray *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // @synthesize screenSettings=_screenSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL allowDynamicMaxBitrate; // @synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFaceTimeSettings;
@property(nonatomic) BOOL hasMediaControlInfoVersion;
@property(nonatomic) unsigned int mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
- (id)multiwayVideoStreamAtIndex:(NSUInteger)arg1;
- (NSUInteger)multiwayVideoStreamsCount;
- (void)addMultiwayVideoStream:(id)arg1;
- (void)clearMultiwayVideoStreams;
@property(nonatomic) BOOL hasBlobVersion;
@property(nonatomic) BOOL hasNtpTime;
@property(readonly, nonatomic) BOOL hasMomentsSettings;
- (id)multiwayAudioStreamsAtIndex:(NSUInteger)arg1;
- (NSUInteger)multiwayAudioStreamsCount;
- (void)addMultiwayAudioStreams:(id)arg1;
- (void)clearMultiwayAudioStreams;
@property(readonly, nonatomic) BOOL hasCaptionsSettings;
- (id)bandwidthSettingsAtIndex:(NSUInteger)arg1;
- (NSUInteger)bandwidthSettingsCount;
- (void)addBandwidthSettings:(id)arg1;
- (void)clearBandwidthSettings;
@property(nonatomic) BOOL hasBasebandCodecSampleRate;
@property(readonly, nonatomic) BOOL hasBasebandCodec;
@property(readonly, nonatomic) BOOL hasUserAgent;
@property(readonly, nonatomic) BOOL hasScreenSettings;
@property(readonly, nonatomic) BOOL hasVideoSettings;
@property(readonly, nonatomic) BOOL hasAudioSettings;
@property(nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation;
@property(nonatomic) BOOL hasAllowDynamicMaxBitrate;
- (void)dealloc;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void )arg3;
- (void)printMultiwayVideoStreamsWithLogFile:(void )arg1;
- (void)printMultiwayAudioStreamsWithLogFile:(void )arg1;
- (void)printMomentsSettingsWithLogFile:(void )arg1;
- (void)printCaptionsSettingsWithLogFile:(void )arg1;
- (void)printBandwidthSettingsWithLogFile:(void )arg1;

@end

