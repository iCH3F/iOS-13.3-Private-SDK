//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol PXMutableVideoSession <NSObject>
@property(nonatomic) BOOL allowsExternalPlayback;
@property(nonatomic) BOOL preventsSleepDuringVideoPlayback;
@property(nonatomic) long long desiredPlayState;
@property(nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property(nonatomic) BOOL seekToBeginningAtEnd;
@property(nonatomic) CDStruct_e83c9415 playbackTimeRange;
- (void)setAudioSessionCategory:(NSString *)arg1 options:(NSUInteger)arg2;
- (void)setVolume:(float)arg1 withFade:(BOOL)arg2;
@end

