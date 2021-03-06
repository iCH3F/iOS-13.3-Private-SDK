//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@protocol SVVideoVolumeObserverFactory, SVVideoVolumeObserving, SVVolumeReporting;

@interface SVVolumeManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVolumeReporting> _volumeReporter;
    id <SVVideoVolumeObserverFactory> _volumeObserverFactory;
    id <SVVideoVolumeObserving> _volumeObserver;
}

@property(retain, nonatomic) id <SVVideoVolumeObserving> volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(readonly, nonatomic) id <SVVideoVolumeObserverFactory> volumeObserverFactory; // @synthesize volumeObserverFactory=_volumeObserverFactory;
@property(readonly, nonatomic) id <SVVolumeReporting> volumeReporter; // @synthesize volumeReporter=_volumeReporter;
// - (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithVolumeReporter:(id)arg1 volumeObserverFactory:(id)arg2;

@end

