//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL;
@protocol IMFullScreenEffectSoundPlayerDelegate;

@protocol IMFullScreenEffectSoundPlayer <NSObject>
@property(nonatomic) __weak id <IMFullScreenEffectSoundPlayerDelegate> delegate;
- (void)stopPlayingSound;
- (void)startPlayingSound;
- (void)prepareToPlaySound;
- (id)initWithSoundURL:(NSURL *)arg1 hasHapticTrack:(BOOL)arg2;
@end

