//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFSpeechPackage, AFSpeechRecognition, NSArray, NSDictionary, NSError;

@protocol AFSpeechServiceDelegate <NSObject>
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(NSDictionary *)arg1 error:(NSError *)arg2;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;
@end

