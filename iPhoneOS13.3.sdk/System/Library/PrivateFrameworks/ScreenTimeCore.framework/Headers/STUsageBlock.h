//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface STUsageBlock : NSManagedObject
{
}

+ (id)usageCategoriesForUsageBlocks:(id)arg1;
+ (id)usageCountedItemsForUsageBlocks:(id)arg1;
+ (long long)totalNotificationsForUsageBlocks:(id)arg1;
+ (long long)totalPickupsForUsageBlocks:(id)arg1;
+ (double)totalScreenTimeForUsageBlocks:(id)arg1;
+ (id)fetchRequestMatchingUsage:(id)arg1 dateInterval:(id)arg2;

@end

