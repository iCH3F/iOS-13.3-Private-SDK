//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMSpeechURLRecognitionRequestOperation.h>

#import <VisualVoicemail/_VMSpeechRecognitionTaskDelegatePrivate-Protocol.h>

@class NSObject, VMVoicemailTranscript;
@protocol OS_dispatch_semaphore;

@interface VMTranscriptionTranscribeOperation : VMSpeechURLRecognitionRequestOperation <_VMSpeechRecognitionTaskDelegatePrivate>
{
    double _duration;
    double _timeout;
    id /* CDUnknownBlockType */ _transcribeOperationCompletion;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    VMVoicemailTranscript *_transcript;
}

@property(retain, nonatomic) VMVoicemailTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(copy) id /* CDUnknownBlockType */ transcribeOperationCompletion; // @synthesize transcribeOperationCompletion=_transcribeOperationCompletion;
@property double timeout; // @synthesize timeout=_timeout;
@property double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
@property BOOL processOnServer;
- (void)main;
- (void)cancel;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;

@end

