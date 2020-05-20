//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SVVideoMetadata-Protocol.h>

@class NSArray, NSError, NSHashTable, SVKeyValueObserver, SXAVPlayer;
@protocol SXAVPlayerFactory, SXVideoPlaybackHost, SXVideoProviding;

@interface SXPlaybackCoordinator : NSObject <SVVideoMetadata>
{
    BOOL _playbackLikelyToKeepUp;
    BOOL _playbackBufferFull;
    BOOL _muted;
    BOOL _playbackRequested;
    BOOL _initiatedPlayback;
    id <SXVideoProviding> _video;
    NSUInteger _state;
    NSObject<SXVideoPlaybackHost> *_host;
    NSError *_error;
    NSHashTable *_observers;
    SXAVPlayer *_player;
    id /* CDUnknownBlockType */ _cancelHandler;
    SVKeyValueObserver *_playerItemPresentationSizeObserver;
    SVKeyValueObserver *_readyForDisplayObserver;
    id <SXAVPlayerFactory> _playerFactory;
    SVKeyValueObserver *_muteStateObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    CGSize _dimensions;
}

@property(retain, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // @synthesize playbackBufferFullObserver=_playbackBufferFullObserver;
@property(retain, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // @synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver;
@property(retain, nonatomic) SVKeyValueObserver *muteStateObserver; // @synthesize muteStateObserver=_muteStateObserver;
@property(readonly, nonatomic) id <SXAVPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver; // @synthesize readyForDisplayObserver=_readyForDisplayObserver;
@property(retain, nonatomic) SVKeyValueObserver *playerItemPresentationSizeObserver; // @synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver;
@property(nonatomic) BOOL initiatedPlayback; // @synthesize initiatedPlayback=_initiatedPlayback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) BOOL playbackRequested; // @synthesize playbackRequested=_playbackRequested;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) __weak NSObject<SXVideoPlaybackHost> *host; // @synthesize host=_host;
@property(nonatomic) CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, nonatomic) id <SXVideoProviding> video; // @synthesize video=_video;
@property(readonly, nonatomic) BOOL playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(readonly, nonatomic) BOOL playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
// - (void).cxx_destruct;
- (void)removePlayerItemPresentationSizeObserver;
- (void)addPlayerItemPresentationSizeObserver;
- (void)muteStateChanged;
- (void)addMuteStateObserver;
- (void)playbackLikelyToKeepUpStateChanged;
- (void)addPlaybackLikelyToKeepUpObserver;
- (void)playbackBufferFullStateChanged;
- (void)addPlaybackBuferObserver;
- (void)stateChanged;
- (void)loadedTimeRangesChanged;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiatedWithButtonTapped:(BOOL)arg1;
- (void)setupPlayerWithURL:(id)arg1;
- (void)loadVideoIfNeeded;
- (void)load;
@property(readonly, nonatomic) double loadingProgress;
@property(readonly, nonatomic) double volume;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) double timePlayed;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double framerate;
- (void)seekToTime:(double)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)removePlaybackObserver:(id)arg1;
- (void)addPlaybackObserver:(id)arg1;
- (void)pause;
- (void)playWithButtonTapped:(BOOL)arg1;
- (id)initWithVideo:(id)arg1 playerFactory:(id)arg2;

@end

