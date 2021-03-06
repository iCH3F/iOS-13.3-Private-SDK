//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation
{
}

- (void)_reportCloudSyncDescriptionWithHealthStore:(id)arg1;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)arg1 storeUUID:(id)arg2 database:(id)arg3;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)arg1;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)arg1;
- (void)_reportCloudSyncJournalStats;
- (BOOL)_reportCloudSyncStatusWithHealthStore:(id)arg1;
- (void)run;
- (id)reportFilename;

@end

