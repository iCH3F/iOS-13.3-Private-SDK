//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackAdvancing-Protocol.h>
#import <SilexVideo/SVVideoPlaybackSkipping-Protocol.h>

@protocol SVVideoQueueProviding, SVVideoSkipHandling, SVVideoSkipPolicy;

@interface SVVideoSkipManager : NSObject <SVVideoPlaybackSkipping, SVVideoPlaybackAdvancing>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoSkipPolicy> _policy;
    id <SVVideoSkipHandling> _handler;
}

@property(readonly, nonatomic) id <SVVideoSkipHandling> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) id <SVVideoSkipPolicy> policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
// - (void).cxx_destruct;
- (BOOL)skipToVideo:(id)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)skipToPrevious;
- (BOOL)skipToNext;
- (BOOL)advanceAnimated:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)advanceAnimated:(BOOL)arg1;
- (id)initWithQueueProvider:(id)arg1 policy:(id)arg2 handler:(id)arg3;

@end

