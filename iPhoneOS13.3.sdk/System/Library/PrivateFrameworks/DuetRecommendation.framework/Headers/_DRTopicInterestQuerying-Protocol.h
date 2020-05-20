//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSPredicate, NSString, _DRTopicInterestSummary;

@protocol _DRTopicInterestQuerying
+ (NSPredicate *)predicateForTopicInteractionsAfter:(NSDate *)arg1;
+ (NSPredicate *)predicateForTopicsWithPrefix:(NSString *)arg1;
- (void)enumerateTopicCountsWithFilter:(NSPredicate *)arg1 block:(void (^)(NSString *, NSUInteger, NSUInteger, BOOL ))arg2;
- (_DRTopicInterestSummary *)computeSummaryWithFilter:(NSPredicate *)arg1;
@end

