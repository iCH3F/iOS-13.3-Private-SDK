//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPersistentHistoryHelper : NSObject
{
}

+ (id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2;
+ (BOOL)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id )arg3;
+ (id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id )arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id )arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(NSUInteger)arg2 context:(id)arg3 error:(id )arg4;
+ (id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(NSUInteger)arg2 context:(id)arg3 error:(id )arg4;

@end

