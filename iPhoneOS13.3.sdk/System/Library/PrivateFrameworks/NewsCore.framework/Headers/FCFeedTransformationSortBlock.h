//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort
{
    id /* CDUnknownBlockType */ _sortBlock;
}

+ (id)transformationWithSortBlock:(id /* CDUnknownBlockType */)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sortBlock; // @synthesize sortBlock=_sortBlock;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

