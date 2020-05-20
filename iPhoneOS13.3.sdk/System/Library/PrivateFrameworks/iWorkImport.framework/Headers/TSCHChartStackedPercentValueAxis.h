//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartValueAxis.h>

@class TSCHChartAxisAnalysis;

__attribute__((visibility("hidden")))
@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis
{
    TSCHChartAxisAnalysis *mInProgressAnalysisForErrorBarData;
}

// - (void).cxx_destruct;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(NSUInteger)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(NSUInteger)arg2;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (BOOL)editableFormatForValueStrings;
- (id)dataFormatter;
- (double )unitSpaceValuesForSeries:(id)arg1 indexes:(_NSRange)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(NSUInteger)arg3;
- (double)unitSpaceValueForSeries:(id)arg1 index:(NSUInteger)arg2 min:(double)arg3 max:(double)arg4;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)formattedStringForAxisValue:(id)arg1;
- (double)interceptForAxis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (double)totalForGroup:(NSUInteger)arg1;
- (id)userMin;
- (id)userMax;
- (BOOL)supportsReferenceLines;

@end

