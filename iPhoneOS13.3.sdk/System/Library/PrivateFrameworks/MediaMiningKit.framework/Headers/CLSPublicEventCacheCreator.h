//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject
{
    BOOL _simulatesTimeout;
    CLSPublicEventCache *_cache;
    NSUInteger _maximumBatchSize;
    double _queryRadius;
}

@property(nonatomic) BOOL simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(readonly, nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;
@property(readonly, nonatomic) NSUInteger maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id )arg2 progressBlock:(id /* CDUnknownBlockType */)arg3 error:(id )arg4;
- (id)createCacheForTimeLocationTuples:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithCache:(id)arg1 queryRadius:(double)arg2;

@end

