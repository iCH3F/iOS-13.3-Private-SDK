//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class SXViewport;
@protocol SXMediaPlaybackDelegate;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener>
{
    id <SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
    SXViewport *_viewport;
}

@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(nonatomic) __weak id <SXMediaPlaybackDelegate> mediaPlaybackDelegate; // @synthesize mediaPlaybackDelegate=_mediaPlaybackDelegate;
// - (void).cxx_destruct;
- (void)viewport:(id)arg1 appearStateChangedFromState:(NSUInteger)arg2;
- (void)registerMediaPlayBack:(id)arg1;
- (id)initWithViewport:(id)arg1;

@end

