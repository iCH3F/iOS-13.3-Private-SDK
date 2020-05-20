//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionController : NSObject
{
    NSObject<OS_os_log> *_logObject;
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionSyncService *_syncService;
    BOOL _running;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
// - (void).cxx_destruct;
- (void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;
- (void)_onQueue_endCapturingEvents;
- (void)_onQueue_beginCapturingEvents;
- (id)_init;
- (void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;
- (void)endCapturingEvents;
- (void)beginCapturingEvents;
- (id)init;

@end

