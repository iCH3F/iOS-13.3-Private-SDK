//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventHandlers.h>

@class MTBaseEventDataProvider, MTMediaActivityEventHandler;

@interface MTVPAFEventHandlers : MTEventHandlers
{
    MTBaseEventDataProvider *_base;
    MTMediaActivityEventHandler *_playStart;
    MTMediaActivityEventHandler *_playStop;
    MTMediaActivityEventHandler *_seekStart;
    MTMediaActivityEventHandler *_seekStop;
}

- (void)setBase:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic) MTMediaActivityEventHandler *seekStop; // @synthesize seekStop=_seekStop;
@property(readonly, nonatomic) MTMediaActivityEventHandler *seekStart; // @synthesize seekStart=_seekStart;
@property(readonly, nonatomic) MTMediaActivityEventHandler *playStop; // @synthesize playStop=_playStop;
@property(readonly, nonatomic) MTMediaActivityEventHandler *playStart; // @synthesize playStart=_playStart;
- (id)base;

@end

