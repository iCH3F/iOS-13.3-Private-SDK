//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject
{
    NSMutableDictionary *_fetchOperationsByIdentifier;
    NSMutableDictionary *_fetchOperationsByUUID;
    NSMutableDictionary *_retryCountByIdentifier;
}

// - (void).cxx_destruct;
- (void)resetRetryCountForIdentifier:(id)arg1;
- (void)incrementRetryCountForIdentifier:(id)arg1;
- (long long)retryCountForIdentifier:(id)arg1;
- (id)allPendingIdentifiers;
- (id)fetchOperationForIdentifier:(id)arg1;
- (void)removeFetchOperation:(id)arg1;
- (void)addFetchOperation:(id)arg1;
- (id)init;

@end

