//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/CKKnowledgeStore.h>

@interface CKKnowledgeStore (CoreKnowledge)
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)removeAllValuesAndReturnError:(id )arg1;
- (void)removeAllValuesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)removeValuesMatching:(id)arg1 error:(id )arg2;
- (void)removeValuesMatching:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)removeValuesForKeys:(id)arg1 error:(id )arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)removeValueForKey:(id)arg1 error:(id )arg2;
- (void)removeValueForKey:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)removeEntity:(id)arg1 error:(id )arg2;
- (void)removeEntity:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)importTriplesFromFileAtPath:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)writeBatch;
@end

