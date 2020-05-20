//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGTimeTitleUtility : NSObject
{
}

+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1;
+ (id)_significantDateNodesFromEventNodes:(id)arg1 dateFormatterType:(NSUInteger)arg2;
+ (id)_dateNodesFromEventNodes:(id)arg1 eventsStartDate:(id )arg2 eventsEndDate:(id )arg3;
+ (id)_commonLocationLabelForLocationNodes:(id)arg1;
+ (BOOL)_hasReachedNumberVisitsPerYear:(NSUInteger)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (BOOL)_hasReachedNumberVisitsPerMonth:(NSUInteger)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (void)_enumerateNeighborNodesOfEventNodes:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
+ (BOOL)_eventNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2;
+ (BOOL)_eventNodesCoverCompleteYear:(id)arg1;
+ (BOOL)_eventNodesCoverCompleteMonth:(id)arg1;
+ (NSUInteger)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(NSUInteger)arg2;
+ (BOOL)yearIsNeededForDisplayingDate:(id)arg1;
+ (BOOL)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(BOOL)arg3;
+ (id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
+ (id)babyGrowingUpTimeTitleWithEventNodes:(id)arg1;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1 requireMultipleYears:(BOOL)arg2;
+ (id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(NSUInteger)arg5 locale:(id)arg6;
+ (id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(NSUInteger)arg2;
+ (id)splitTimeTitleWithOptions:(id)arg1;
+ (id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(NSUInteger)arg2;
+ (id)timeTitleWithOptions:(id)arg1;

@end

