//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError;

@protocol BYBuddyDaemonProximitySourceProtocol <NSObject>
- (void)syncCompletedWithErrors:(NSArray *)arg1;
- (void)syncProgress:(double)arg1;
- (void)backupCompletedWithError:(NSError *)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)finishedWithError:(NSError *)arg1;
@end

