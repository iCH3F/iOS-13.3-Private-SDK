//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSearchController.h>

@class IMTimingCollection, NSArray, NSSet;

@interface CKMessageTypeSearchController : CKSearchController
{
    BOOL _searchTerminated;
    BOOL _gotResults;
    NSSet *_intermediaryResults;
    NSArray *_resultsToCheck;
    IMTimingCollection *_timingCollection;
}

+ (NSUInteger)recencyRankedTargetResultCount;
+ (BOOL)useRecencyRankedSearchForMode:(NSUInteger)arg1;
+ (id)timeRankedQueries;
@property(retain, nonatomic) IMTimingCollection *timingCollection; // @synthesize timingCollection=_timingCollection;
@property(retain, nonatomic) NSArray *resultsToCheck; // @synthesize resultsToCheck=_resultsToCheck;
@property(nonatomic) BOOL gotResults; // @synthesize gotResults=_gotResults;
@property(retain, nonatomic) NSSet *intermediaryResults; // @synthesize intermediaryResults=_intermediaryResults;
@property(nonatomic) BOOL searchTerminated; // @synthesize searchTerminated=_searchTerminated;
// - (void).cxx_destruct;
- (void)_IMSPIQueryMessageItemsWithGUIDs:(id)arg1 results:(id /* CDUnknownBlockType */)arg2;
- (void)deleteAttachmentForResult:(id)arg1;
- (id)menuActionsForResult:(id)arg1 atRect:(CGRect)arg2;
- (BOOL)wantsDeleteAction;
- (NSDirectionalEdgeInsets)additionalGroupInsets;
- (Class)footerClass;
- (BOOL)wantsFooterSection;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (void)_asyncCheckIfResultsExistOnDisk:(id)arg1 firstBatch:(BOOL)arg2;
- (void)checkIfResultsExistOnDiskAndNotify:(id)arg1;
- (void)postProcessAndUpdateResults:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (void)searchEnded;
- (void)searchWithText:(id)arg1 mode:(NSUInteger)arg2;
- (void)fractionalWidth:(double )arg1 count:(NSUInteger )arg2 forLayoutWidth:(NSUInteger)arg3;
- (NSUInteger)maxResultsForMode:(NSUInteger)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (id)zkwFilterQueries;

@end

