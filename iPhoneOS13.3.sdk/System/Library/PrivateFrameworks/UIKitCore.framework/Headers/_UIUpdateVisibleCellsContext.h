//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateVisibleCellsContext : NSObject
{
    NSMutableArray *_sizes;
    NSMutableArray *_attributes;
    NSMutableArray *_indexPaths;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

@property(readonly, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *attributes;
@property(readonly, nonatomic) BOOL hasLeftVisibleCellsPass;
- (void)didLeaveVisibleCellsPass;
- (void)didEnterVisibleCellsPass;
@property(readonly, nonatomic) NSIndexSet *sectionIndexes;
- (id)description;
- (BOOL)shouldInvalidate;
- (void)addPreferredAttributes:(id)arg1;
- (id)init;

@end

