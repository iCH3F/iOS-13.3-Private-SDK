//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTAlarmIntentHandler.h>

#import <MobileTimer/MTCreateAlarmIntentHandling-Protocol.h>

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>
{
}

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)handleMTCreateAlarm:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmMTCreateAlarm:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1;
- (void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end

