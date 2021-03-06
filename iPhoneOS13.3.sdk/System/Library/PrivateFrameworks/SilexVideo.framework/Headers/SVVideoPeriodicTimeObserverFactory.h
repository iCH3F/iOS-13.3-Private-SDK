//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPeriodicTimeObserverFactory-Protocol.h>

@protocol SVPlayerProviding, SVTimeConverting, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPeriodicTimeObserverFactory : NSObject <SVVideoPeriodicTimeObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVTimeConverting> _timeConverter;
}

@property(readonly, nonatomic) id <SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
// - (void).cxx_destruct;
- (id)createPeriodicTimeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playbackStateObserverFactory:(id)arg2 timeConverter:(id)arg3;

@end

