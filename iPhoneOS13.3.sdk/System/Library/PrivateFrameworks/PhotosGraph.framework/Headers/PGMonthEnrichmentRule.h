//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemEnrichmentRule-Protocol.h>

@class PGManager;
@protocol PGHighlightItemModelReader;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGManager *_manager;
    id <PGHighlightItemModelReader> _modelReader;
}

@property(readonly, nonatomic) id <PGHighlightItemModelReader> modelReader; // @synthesize modelReader=_modelReader;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(NSUInteger)arg3 sortDescriptors:(id)arg4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2 maximumNumberOfVisibleItems:(NSUInteger)arg3 maximumNumberOfVisibleRegularItems:(NSUInteger)arg4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_sampleAssets:(id)arg1 withSize:(NSUInteger)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)initWithManager:(id)arg1 modelReader:(id)arg2;

@end

