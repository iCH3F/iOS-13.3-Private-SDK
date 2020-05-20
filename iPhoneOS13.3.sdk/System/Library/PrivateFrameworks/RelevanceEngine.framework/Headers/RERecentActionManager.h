//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton
{
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}

// - (void).cxx_destruct;
- (void)_handleRecentActionNotification:(id)arg1;
- (NSUInteger)actionNumberOfTimesPeformedToday:(id)arg1;
- (BOOL)actionWasPerformedLocally:(id)arg1;
- (id)lastPerformedDateForAction:(id)arg1;
- (id)_dataForAction:(id)arg1;
- (void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(BOOL)arg3;
- (void)didPerformAction:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

