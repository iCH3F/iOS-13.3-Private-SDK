//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSUUID, TSPPersistedObjectUUIDMap;

@protocol TSPPersistedObjectUUIDMapDelegate
- (void)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 foundDuplicateUUID:(NSUUID *)arg2 firstObjectLocation:(struct ObjectLocation)arg3 secondObjectLocation:(struct ObjectLocation)arg4;
- (NSString *)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
@end

