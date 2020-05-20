//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;

@interface MAAssetQuery : NSObject
{
    BOOL _doNotBlockBeforeFirstUnlock;
    NSDate *_postedDate;
    NSMutableArray *_queryParams;
    NSString *_assetType;
    NSArray *_results;
    NSSet *_assetIds;
    long long _returnTypes;
    NSDate *_lastFetchDate;
}

@property(readonly, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(readonly, nonatomic) long long returnTypes; // @synthesize returnTypes=_returnTypes;
@property(readonly, nonatomic) NSSet *assetIds; // @synthesize assetIds=_assetIds;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSMutableArray *queryParams; // @synthesize queryParams=_queryParams;
@property(nonatomic) BOOL doNotBlockBeforeFirstUnlock; // @synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock;
@property(readonly, nonatomic) NSDate *postedDate; // @synthesize postedDate=_postedDate;
- (long long)queryMetaDataSync;
- (long long)queryInstalledAssetIds;
- (void)queryMetaData:(id /* CDUnknownBlockType */)arg1;
- (void)getResultsFromMessage:(id)arg1;
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;
- (long long)addKeyValueNull:(id)arg1;
- (long long)addKeyValueArray:(id)arg1 with:(id)arg2;
- (void)returnTypes:(long long)arg1;
- (void)augmentResultsWithState:(BOOL)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end

