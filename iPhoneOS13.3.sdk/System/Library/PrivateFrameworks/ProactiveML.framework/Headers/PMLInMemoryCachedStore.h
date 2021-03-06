//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLTrainingStore.h>

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore
{
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(NSUInteger)arg3;
// - (void).cxx_destruct;
- (void)_registerUnlockHandler;
- (void)_openDbIfUnlocked;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(NSUInteger)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(NSUInteger)arg5 skew:(double)arg6 block:(id /* CDUnknownBlockType */)arg7;
- (id)initWithSessionBatch:(id)arg1;

@end

