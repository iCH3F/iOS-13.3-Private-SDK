//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollectionMinimalDelegate-Protocol.h>

@class FPItemCollection, NSArray, NSDictionary;

@protocol FPItemCollectionItemIDBasedDelegate <FPItemCollectionMinimalDelegate>
- (void)collection:(FPItemCollection *)arg1 didUpdateItems:(NSArray *)arg2 replaceItemsByFormerID:(NSDictionary *)arg3 deleteItemsWithIDs:(NSArray *)arg4;
@end

