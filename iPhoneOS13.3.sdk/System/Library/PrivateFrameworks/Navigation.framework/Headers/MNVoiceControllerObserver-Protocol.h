//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNVoiceController, NSString;

@protocol MNVoiceControllerObserver <NSObject>
- (void)voiceController:(MNVoiceController *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)voiceController:(MNVoiceController *)arg1 didActivateAudioSession:(BOOL)arg2;
@end

