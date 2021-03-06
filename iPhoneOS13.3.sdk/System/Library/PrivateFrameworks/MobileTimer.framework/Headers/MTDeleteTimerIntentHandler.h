//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import <MobileTimer/INDeleteTimerIntentHandling-Protocol.h>

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>
{
}

- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)_deleteTimer:(id)arg1 multiple:(BOOL)arg2 dryRun:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)handleDeleteTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end

