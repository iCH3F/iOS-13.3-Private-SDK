//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase
{
}

+ (void)nukeCompletionBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedLogger;
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(id /* CDUnknownBlockType */)arg3;
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)init;
- (void)_logSqliteErrorLine:(int)arg1;

@end

