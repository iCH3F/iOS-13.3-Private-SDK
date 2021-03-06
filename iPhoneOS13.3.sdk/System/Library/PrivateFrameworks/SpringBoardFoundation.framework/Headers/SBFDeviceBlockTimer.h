//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;
@protocol SBFBlockStatusProvider;

@interface SBFDeviceBlockTimer : NSObject
{
    BOOL _enabled;
    id /* CDUnknownBlockType */ _handler;
    NSString *_titleText;
    NSString *_subtitleText;
    id <SBFBlockStatusProvider> _blockStatusProvider;
    NSTimer *_timer;
}

@property(nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic, setter=_setTimer:) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic, setter=_setBlockStatusProvider:) id <SBFBlockStatusProvider> blockStatusProvider; // @synthesize blockStatusProvider=_blockStatusProvider;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (void)_clearTimer;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;

@end

