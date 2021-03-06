//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexSet, NSString, TSTCellRegion, TSTGroupBy, TSTGroupingColumnList, TSUUUIDSet;

@protocol TSTCategoryProviding
@property(nonatomic) double categoryColumnWidth;
@property(nonatomic) UUIDData_5fbc143e groupByUid;
@property(readonly, nonatomic) UUIDData_5fbc143e baseTableUID;
@property(readonly, nonatomic) struct TSUChromeRowIndex numberOfChromeFooterRows;
@property(readonly, nonatomic) struct TSUChromeRowIndex numberOfChromeHeaderRows;
@property(readonly, nonatomic) struct TSUChromeColumnIndex numberOfChromeHeaderColumns;
@property(readonly, nonatomic) struct TSUChromeRowIndex numberOfChromeRows;
@property(readonly, nonatomic) struct TSUChromeColumnIndex numberOfChromeColumns;
@property(readonly, nonatomic) struct TSUModelRowIndex numberOfBaseFooterRows;
@property(readonly, nonatomic) struct TSUModelRowIndex numberOfBaseHeaderRows;
@property(readonly, nonatomic) struct TSUModelColumnIndex numberOfBaseHeaderColumns;
@property(readonly, nonatomic) struct TSUModelRowIndex numberOfBaseRows;
@property(readonly, nonatomic) struct TSUModelColumnIndex numberOfBaseColumns;
@property(retain, nonatomic) TSTGroupBy *groupBy;
- (void)resetViewMap;
- (void)setLabelRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (double)labelRowHeightAtCategoryLevel:(unsigned char)arg1;
- (void)setSummaryRowHeight:(double)arg1 atCategoryLevel:(unsigned char)arg2;
- (double)summaryRowHeightAtCategoryLevel:(unsigned char)arg1;
- (BOOL)shouldDisplaySummaryLabelRowAtGroupLevel:(unsigned char)arg1;
- (struct TSCECategoryRef)categoryRefReferringToCellRef:(const RefTypeHolder_adbccd1a )arg1;
- (unsigned char)groupLevelForGroupUid:(const UUIDData_5fbc143e )arg1;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (unsigned char)aggregateTypeForColumnUID:(UUIDData_5fbc143e)arg1 atGroupLevel:(unsigned char)arg2;
- (BOOL)isCategoryGroupOrParentsCollapsed:(UUIDData_5fbc143e)arg1;
- (TSUUUIDSet *)allRowUIDsAtSameLevelAsRowIndex:(unsigned int)arg1 withFilter:(BOOL (^)(struct UUIDData<TSP::UUIDData>, struct UUIDData<TSP::UUIDData>))arg2;
- (BOOL)groupingTypesAreUniqueForColumn:(unsigned short)arg1;
- (NSUInteger)groupingColumnLevelCountForColumn:(unsigned short)arg1;
- (NSString *)columnDisplayNameForCategoryLevel:(unsigned char)arg1;
- (TSTCellRegion *)regionSubtractingCategoryColumnsAndRows:(TSTCellRegion *)arg1;
- (_NSRange)rowRangeUnderSummaryOrLabelRow:(unsigned int)arg1;
- (NSIndexSet *)indexesForGroupingColumnsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForGroupingColumns;
- (NSIndexSet *)indexesForCategoryColumnsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForCategoryColumns;
- (NSIndexSet *)indexesForBodyColumns;
- (NSIndexSet *)indexesForBodyAndFooterRows;
- (NSIndexSet *)indexesForBodyRows;
- (NSIndexSet *)indexesForSummaryAndLabelRowsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForSummaryAndLabelRows;
- (NSIndexSet *)indexesForLabelRows;
- (NSIndexSet *)indexesForLabelRowsUpToGroupLevel:(unsigned char)arg1 omitGroupsWithUids:(const UUIDSet_bcc2db41 )arg2;
- (NSIndexSet *)indexesForLabelRowsAtGroupLevel:(unsigned char)arg1;
- (NSIndexSet *)indexesForLabelRowsAtGroupLevel:(unsigned char)arg1 inRegion:(TSTCellRegion *)arg2;
- (NSIndexSet *)indexesForLabelRowsInRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesForSummaryRows;
- (NSIndexSet *)indexesForSummaryRowsUpToGroupLevel:(unsigned char)arg1 omitGroupsWithUids:(const UUIDSet_bcc2db41 )arg2;
- (NSIndexSet *)indexesForBodyRowsInGroupWithRowAtIndex:(unsigned int)arg1;
- (NSIndexSet *)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg1;
- (NSIndexSet *)indexesForSummaryRowsAtGroupLevel:(unsigned char)arg1 inRegion:(TSTCellRegion *)arg2;
- (NSIndexSet *)indexesForSummaryRowsInRegion:(TSTCellRegion *)arg1;
- (BOOL)isCategorySummaryRowCollapsed:(unsigned int)arg1;
- (NSIndexSet *)expandSummaryGroupUIDs:(TSUUUIDSet *)arg1;
- (NSIndexSet *)collapseSummaryGroupUIDs:(TSUUUIDSet *)arg1;
- (NSIndexSet *)indexesForSummaryAndBodyRowsInGroupUIDs:(TSUUUIDSet *)arg1;
- (TSUUUIDSet *)allGroupUIDs;
- (unsigned short)categoryColumnIndex;
- (NSIndexSet *)populatedCategoryGroupLevelsInColumn:(unsigned short)arg1;
- (unsigned int)numberOfCategoryColumns;
- (unsigned int)numberOfCategoryLevels;
- (unsigned char)categoryGroupLevelAtRow:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtLabelRow:(unsigned int)arg1;
- (unsigned char)categoryGroupLevelAtSummaryRow:(unsigned int)arg1;
- (BOOL)isCategoryAnyKindOfCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryGroupingColumn:(unsigned short)arg1;
- (BOOL)isCategoryGroupValueLabelCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryGroupValueCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryColumnUneditableCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryLabelCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategorySummaryCell:(struct TSUCellCoord)arg1;
- (BOOL)isCategoryColumn:(unsigned short)arg1;
- (BOOL)isCategorySummaryOrLabelRow:(unsigned int)arg1;
- (BOOL)isCategoryLabelRow:(unsigned int)arg1;
- (BOOL)isCategorySummaryRow:(unsigned int)arg1;
- (void)applyGroupingColumns:(TSTGroupingColumnList *)arg1;
- (void)setIsCategoryEnabled:(BOOL)arg1;
@end

