//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/ADBannerViewInternalDelegate-Protocol.h>
#import <Silex/SXVideoAdProviding-Protocol.h>

@class SVTimeline, SXPrerollAdResponse, SXVideoAdStateManager;
@protocol SVVideoMetadata, SVVisibilityMonitoring, SXAnalyticsReporting, SXVASTAnalyticsEventInfoFactory, SXVideoAdProviderDataSource, SXVideoAdViewControllerProviding;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding>
{
    id <SXVideoAdProviderDataSource> _dataSource;
    id <SXAnalyticsReporting> _analyticsReporter;
    SXPrerollAdResponse *_response;
    id <SVVideoMetadata> _metadata;
    SVTimeline *_timeline;
    id <SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
    SXVideoAdStateManager *_stateManager;
    id <SVVisibilityMonitoring> _videoVisibilityMonitor;
    id <SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
}

@property(readonly, nonatomic) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory; // @synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory;
@property(readonly, nonatomic) id <SVVisibilityMonitoring> videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property(readonly, nonatomic) id <SVVisibilityMonitoring> videoVisibilityMonitor; // @synthesize videoVisibilityMonitor=_videoVisibilityMonitor;
@property(readonly, nonatomic) SXVideoAdStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) id <SXVideoAdViewControllerProviding> fullscreenViewControllerProvider; // @synthesize fullscreenViewControllerProvider=_fullscreenViewControllerProvider;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak id <SVVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SXPrerollAdResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property(nonatomic) __weak id <SXVideoAdProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)adVisibilityStateChanged;
- (void)reportEngagementEventWithType:(NSUInteger)arg1;
- (void)configureTimelineForImpressionReporting;
- (void)nextVideoStartPlaying;
- (void)presentPrivacyStatement;
- (void)presentAction;
@property(readonly, nonatomic) BOOL hasAction;
- (double)threshold;
@property(readonly, nonatomic) NSUInteger skipThreshold;
- (void)skipped;
- (void)muteStateChanged:(BOOL)arg1;
- (void)tappedToToggleControls;
- (void)exitedFullscreen;
- (void)enteredFullscreen;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiatedWithButtonTapped:(BOOL)arg1;
- (id /* CDUnknownBlockType */)loadWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4;

@end

