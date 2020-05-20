//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PSDataUsageStatisticsCache;
@protocol PSAppCellularUsageSpecifierDelegate;

__attribute__((visibility("hidden")))
@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject
{
    id <PSAppCellularUsageSpecifierDelegate> _specifierDelegate;
    PSDataUsageStatisticsCache *_statisticsCache;
}

@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(nonatomic) __weak id <PSAppCellularUsageSpecifierDelegate> specifierDelegate; // @synthesize specifierDelegate=_specifierDelegate;
// - (void).cxx_destruct;
- (id)specifiers;
- (id)initWithPolicySpecifierDelegate:(id)arg1 statisticsCache:(id)arg2;

@end

