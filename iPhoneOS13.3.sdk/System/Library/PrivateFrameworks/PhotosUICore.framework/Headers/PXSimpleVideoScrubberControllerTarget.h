//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXVideoScrubberControllerTarget-Protocol.h>

@class AVPlayer;

@interface PXSimpleVideoScrubberControllerTarget : NSObject <PXVideoScrubberControllerTarget>
{
    CDStruct_1b6d18a9 _currentItemDuration;
    id /* CDUnknownBlockType */ statusChangeHandler;
    id /* CDUnknownBlockType */ durationChangeHandler;
    id /* CDUnknownBlockType */ playerItemChangeHandler;
    AVPlayer *_videoPlayer;
}

@property(readonly, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ durationChangeHandler; // @synthesize durationChangeHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ statusChangeHandler; // @synthesize statusChangeHandler;
// - (void).cxx_destruct;
- (void)cancelPendingSeeks;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)removeTimeObserver:(id)arg1;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (long long)playerStatus;
- (id)playerItem;
- (float)playRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithVideoPlayer:(id)arg1;
- (id)init;

@end

