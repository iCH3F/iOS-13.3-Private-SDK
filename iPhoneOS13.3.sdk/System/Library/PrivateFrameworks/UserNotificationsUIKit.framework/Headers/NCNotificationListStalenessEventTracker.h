//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NCNotificationListSection, NCNotificationStructuredSectionList, NSMutableDictionary, PETScalarEventTracker;
@protocol OS_dispatch_queue;

@interface NCNotificationListStalenessEventTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_lastDisplayedDateByNotificationMetadata;
    PETScalarEventTracker *_stalenessEventTracker;
    NCNotificationListSection *_notificationList;
    NCNotificationStructuredSectionList *_structuredSectionList;
}

+ (id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)arg1;
+ (id)_allMetricsSafeBundleIdentifiers;
+ (id)_metricsSafeBundleIdentifierByBundleIdentifier;
+ (id)eventTrackerWithAutomaticCollation;
@property(nonatomic) __weak NCNotificationStructuredSectionList *structuredSectionList; // @synthesize structuredSectionList=_structuredSectionList;
@property(nonatomic) __weak NCNotificationListSection *notificationList; // @synthesize notificationList=_notificationList;
// - (void).cxx_destruct;
- (void)_queue_collateAndRecordMetrics;
- (void)collateAndRecordMetrics;
- (void)_queue_processRequests:(id)arg1 timestamp:(id)arg2;
- (void)_handleListPresentedEvent;
- (void)handleEvent:(NSUInteger)arg1;
- (void)_stopAutocollation;
- (void)_startAutocollation;
- (void)dealloc;
- (id)init;

@end

