//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FCFetchCoordinator, NSMutableSet, NSOperation, NSSet;

@protocol FCFetchCoordinatorDelegate <NSObject>
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 addFetchOperation:(NSOperation *)arg2 context:(id)arg3;
- (NSOperation *)fetchCoordinator:(FCFetchCoordinator *)arg1 fetchOperationForKeys:(NSSet *)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 filterKeysToFetch:(NSMutableSet *)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4;
@end
