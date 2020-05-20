//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>
{
}

+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (id)syncEntityIdentifier;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

