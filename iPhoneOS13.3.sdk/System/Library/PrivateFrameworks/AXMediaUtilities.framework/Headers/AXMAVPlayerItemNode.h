//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

#import <AXMediaUtilities/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

@class AVPlayerItem, AXMVisionAnalysisOptions, NSObject;
@protocol OS_dispatch_queue;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate>
{
    NSObject<OS_dispatch_queue> *_avkit_queue;
    BOOL _triggeringLegibilityEvents;
    AVPlayerItem *_targetPlayerItem;
    AXMVisionAnalysisOptions *_analysisOptions;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak AVPlayerItem *targetPlayerItem; // @synthesize targetPlayerItem=_targetPlayerItem;
@property(readonly, nonatomic, getter=isTriggeringLegibilityEvents) BOOL triggeringLegibilityEvents; // @synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents;
// - (void).cxx_destruct;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;
- (id)axmDescription;
- (void)endAutoTriggerOfLegibilityEvents;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(BOOL)arg1;

@end
