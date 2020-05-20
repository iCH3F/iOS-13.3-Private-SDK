//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGBehavioralAlgorithm-Protocol.h>

@class NSMapTable, NSSet;

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm>
{
    NSSet *_goldAssets;
    NSSet *_goldAssetUUIDs;
    NSMapTable *_goldAssetSceneprintsAndDates;
    double _similarityThreshold;
}

@property(nonatomic) double similarityThreshold; // @synthesize similarityThreshold=_similarityThreshold;
@property(readonly, nonatomic) NSMapTable *goldAssetSceneprintsAndDates; // @synthesize goldAssetSceneprintsAndDates=_goldAssetSceneprintsAndDates;
@property(readonly, nonatomic) NSSet *goldAssetUUIDs; // @synthesize goldAssetUUIDs=_goldAssetUUIDs;
@property(readonly, nonatomic) NSSet *goldAssets; // @synthesize goldAssets=_goldAssets;
// - (void).cxx_destruct;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (id)dataToPersist;
- (float)semanticScoreForAsset:(id)arg1;
- (void)preprocessWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;

@end

