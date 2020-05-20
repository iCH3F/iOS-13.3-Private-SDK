//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/WDMedicalRecordSummaryDelegate-Protocol.h>

@class HRProfile, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, WDMedicalRecordDaySummaryDelegate;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate>
{
    NSMutableDictionary *_categoriesBySourceAlphaOrdered;
    NSMutableDictionary *_categoriesBySourceByType;
    NSMutableSet *_inProgressCatogorySummaries;
    id <WDMedicalRecordDaySummaryDelegate> _delegate;
    HRProfile *_profile;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <WDMedicalRecordDaySummaryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *inProgressCatogorySummaries; // @synthesize inProgressCatogorySummaries=_inProgressCatogorySummaries;
@property(retain, nonatomic) NSMutableDictionary *categoriesBySourceByType; // @synthesize categoriesBySourceByType=_categoriesBySourceByType;
@property(retain, nonatomic) NSMutableDictionary *categoriesBySourceAlphaOrdered; // @synthesize categoriesBySourceAlphaOrdered=_categoriesBySourceAlphaOrdered;
// - (void).cxx_destruct;
- (id)_alphaSortedCategories:(id)arg1;
- (id)_alphaSortedKeysForCategories:(id)arg1;
- (void)summaryDidFinishRecompute:(id)arg1;
- (id)displayItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfDisplayItems;
- (void)recomputeIfNeeded;
- (void)addMedicalRecord:(id)arg1;
- (id)initWithProfile:(id)arg1 style:(long long)arg2 delegate:(id)arg3;

@end

