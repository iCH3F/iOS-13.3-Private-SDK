//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject
{
    unsigned int _outBatchCount;
    NSMutableDictionary *_queryTasks;
    SDConnectionConfiguration *_configuration;
    NSMutableOrderedSet *_pausedTasks;
}

@property(retain, nonatomic) NSMutableOrderedSet *pausedTasks; // @synthesize pausedTasks=_pausedTasks;
@property(retain, nonatomic) SDConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSMutableDictionary *queryTasks; // @synthesize queryTasks=_queryTasks;
@property(readonly, nonatomic) unsigned int outBatchCount; // @synthesize outBatchCount=_outBatchCount;
// - (void).cxx_destruct;
- (id)protectionClass;
- (BOOL)searchInternal;
- (id)bundleID;
- (void)_didReceiveResultsBatchCompletion;
- (void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2;
- (void)dealloc;
- (void)cancelQueryTasks;
- (void)setQueryTask:(id)arg1 forQueryID:(long long)arg2;
- (id)queryTask:(long long)arg1;
- (void)cancelQueryTask:(long long)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnectionConfiguration:(id)arg1;

@end
