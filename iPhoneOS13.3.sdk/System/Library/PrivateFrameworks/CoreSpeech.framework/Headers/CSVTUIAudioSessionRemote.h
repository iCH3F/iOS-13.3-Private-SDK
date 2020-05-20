//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIAudioSession-Protocol.h>

@class CSAudioPowerMeter, CSAudioRecorder;
@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionRemote : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession>
{
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVTUIAudioSessionDelegate> _delegate;
    CSAudioPowerMeter *_powerMeter;
    NSUInteger _audioStreamHandleId;
}

@property(nonatomic) NSUInteger audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
@property(retain, nonatomic) CSAudioPowerMeter *powerMeter; // @synthesize powerMeter=_powerMeter;
@property(nonatomic) __weak id <CSVTUIAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 reason:(long long)arg3;
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 successfully:(BOOL)arg3 error:(id)arg4;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(NSUInteger)arg5;
- (void)_handleDidStopWithReason:(long long)arg1;
- (NSUInteger)audioSource;
- (long long)convertStopReason:(long long)arg1;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (void)updateMeters;
- (void)resetEndPointer;
- (void)setEndpointerDelegate:(id)arg1;
- (void)releaseAudioSession;
- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording;
- (BOOL)prepareRecord;
- (id)_audioRecorder;
- (id)init;

@end

