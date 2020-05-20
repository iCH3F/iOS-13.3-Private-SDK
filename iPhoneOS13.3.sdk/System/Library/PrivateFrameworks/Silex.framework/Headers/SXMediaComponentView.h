//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class SXMediaExposureEvent;
@protocol SXAnalyticsReporting;

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener>
{
    BOOL _isDisplayingMedia;
    id <SXAnalyticsReporting> _analyticsReporting;
    SXMediaExposureEvent *_mediaExposureEvent;
    double _minimumVisibleY;
    double _maximumVisibleY;
    CGRect _visibleBounds;
}

@property(nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property(nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property(retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent; // @synthesize mediaExposureEvent=_mediaExposureEvent;
@property(nonatomic) CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(nonatomic) BOOL isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
@property(readonly, nonatomic) id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
// - (void).cxx_destruct;
- (void)visibleBoundsChanged;
- (void)calculateVisibleBounds;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (BOOL)shouldSubmitMediaExposureEventForExposedBounds:(CGRect)arg1;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (void)submitEvents;
- (id)mediaEventForClass:(Class)arg1;
- (NSUInteger)analyticsVideoType;
- (NSUInteger)analyticsMediaType;
- (NSUInteger)analyticsGalleryType;
- (void)finishMediaExposureEventIfNeeded;
- (void)createMediaExposureEventIfNeeded;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6;

@end

