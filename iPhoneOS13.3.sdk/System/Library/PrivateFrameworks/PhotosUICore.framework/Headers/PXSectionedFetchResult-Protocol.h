//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSIndexSet;
@protocol NSObject><NSCopying;

@protocol PXSectionedFetchResult <NSObject>
@property(readonly, nonatomic) long long count;
- (BOOL)containsObject:(id <NSObject><NSCopying>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <NSObject><NSCopying>)objectAtIndex:(NSUInteger)arg1;
@end

