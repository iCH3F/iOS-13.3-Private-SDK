//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@interface HDLiveDataCollector : HDDataCollector
{
}

- (id)hkObjectsFromSensorDatum:(id)arg1 context:(id)arg2;
- (void)beginUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_queue_handleSensorDatum:(id)arg1 context:(id)arg2;
- (void)_queue_beginStreaming;

@end

