//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGDejunkerDeduper.h>

@class NSDictionary, NSSet;

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper
{
    NSDictionary *_personLocalIdentifiersByItemIdentifier;
    NSDictionary *_peopleScenesByItemIdentifier;
    NSDictionary *_averageFaceQualityByItemIdentifier;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property(retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers; // @synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers;
// - (void).cxx_destruct;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(BOOL )arg3;
- (BOOL)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2;
- (BOOL)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)featureWithItem:(id)arg1;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)debugPersonStringForItem:(id)arg1;
- (BOOL)isJunkForItem:(id)arg1;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (id)bestItemInItems:(id)arg1 options:(id)arg2;
- (void)_buildCachesWithItems:(id)arg1 options:(id)arg2;
- (id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id )arg3;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* CDUnknownBlockType */)arg4;

@end

