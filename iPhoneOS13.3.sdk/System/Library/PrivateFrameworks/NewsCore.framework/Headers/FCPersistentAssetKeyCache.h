//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCAssetKeyCacheType-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>

@class NFUnfairLock, NSMutableDictionary, NSString;

@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving>
{
    BOOL _flushingEnabled;
    BOOL _needsSave;
    NSString *_cachePath;
    NSMutableDictionary *_cacheEntries;
    NFUnfairLock *_cacheEntriesLock;
}

+ (id)_persistenceCoder;
@property BOOL needsSave; // @synthesize needsSave=_needsSave;
@property BOOL flushingEnabled; // @synthesize flushingEnabled=_flushingEnabled;
@property(readonly, nonatomic) NFUnfairLock *cacheEntriesLock; // @synthesize cacheEntriesLock=_cacheEntriesLock;
@property(readonly, nonatomic) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(readonly, copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
// - (void).cxx_destruct;
- (void)_saveToDisk;
- (void)_loadFromDisk;
- (void)_prepareForUse;
- (void)activityObservingApplicationDidEnterBackground;
- (void)enableFlushingWithFlushingThreshold:(NSUInteger)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;
- (void)saveIfNeeded;
- (id)initWithCacheDirectory:(id)arg1 cacheName:(id)arg2;

@end

