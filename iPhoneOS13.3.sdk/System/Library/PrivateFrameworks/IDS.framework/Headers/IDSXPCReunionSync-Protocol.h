//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@protocol IDSXPCReunionSync <NSObject>
- (void)reunionSyncCompletedForServices:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)reunionSyncStartedForServices:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

