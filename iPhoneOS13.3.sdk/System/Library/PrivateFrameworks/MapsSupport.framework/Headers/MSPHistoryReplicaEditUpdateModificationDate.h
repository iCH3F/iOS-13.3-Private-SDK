//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplicaEditRemoveTombstone.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone
{
    NSDate *_modificationDate;
}

@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end
