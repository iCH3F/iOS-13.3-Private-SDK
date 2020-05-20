//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FISimpleHistogram, HKActivitySummary, NSDate, NSDateInterval, NSMutableArray;
@protocol FITypicalDayActivityModelDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FITypicalDayActivityModel : NSObject
{
    NSDateInterval *_interval;
    HKActivitySummary *_queue_currentActivitySummary;
    FISimpleHistogram *_queue_moveHistogram;
    FISimpleHistogram *_queue_exerciseHistogram;
    NSMutableArray *_queue_bucketDates;
    BOOL _activitySummaryLoaded;
    NSObject<OS_dispatch_group> *_activitySummaryBarrierGroup;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_projectedOffWristDateToday;
    long long _totalActiveDays;
    id <FITypicalDayActivityModelDelegate> _delegate;
}

+ (id)_emptySimpleHistogram;
@property(nonatomic) __weak id <FITypicalDayActivityModelDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)_bucketIndexForDate:(id)arg1 startOfDay:(id)arg2 bucketDates:(id)arg3;
- (id)_bucketDateForIndex:(NSUInteger)arg1 startOfDay:(id)arg2;
- (BOOL)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
@property(readonly, nonatomic) long long totalActiveDays;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)arg1 activeDays:(long long)arg2;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)arg1 activitySummary:(id)arg2 activeDays:(long long )arg3;
- (void)_queue_updateHistogram:(id)arg1 goalType:(long long)arg2 activitySummary:(id)arg3;
- (void)_waitUntilActivitySummaryLoaded;
- (void)handleUpdatedCurrentActivitySummary:(id)arg1;
- (double)projectedDayDuration;
- (id)userStartOfDay;
- (id)userEndOfDay;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 height:(id)arg3 weight:(id)arg4 wheelchairUse:(long long)arg5;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg1;
- (BOOL)shouldSuggestWalkWithActivitySettingsController:(id)arg1;
- (id)debugDescription;
- (void)rebuildWithInterval:(id)arg1;
- (BOOL)projectedToBeatMoveRecordByEndOfDay;
- (BOOL)willCompletingMoveRingEarnStreakAchievement;
- (double)currentStandGoalPercentage;
- (double)currentExerciseGoalPercentage;
- (double)currentMoveGoalPercentage;
- (BOOL)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)arg1;
- (BOOL)willCompleteExerciseGoalWithBufferPercentage:(double)arg1;
- (BOOL)willCompleteMoveGoalWithBufferPercentage:(double)arg1;
- (BOOL)_willCompleteGoalWithType:(long long)arg1 bufferPercentage:(double)arg2;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)arg1;
- (double)_queue_currentValueForHistogram:(id)arg1;
- (id)endOfToday;
- (id)startOfToday;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2;

@end

