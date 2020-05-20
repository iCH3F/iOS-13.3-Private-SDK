//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSSet, NSString, REMCRMergeableOrderedSet, REMObjectID, REMResolutionTokenMap;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding>
{
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
//     struct os_unfair_lock_s _lock;
    BOOL _markedForRemoval;
    BOOL _listsDADisplayOrderChanged;
    BOOL _inactive;
    BOOL _didChooseToMigrate;
    BOOL _didChooseToMigrateLocally;
    BOOL _didFinishMigration;
    BOOL _daAllowsCalendarAddDeleteModify;
    BOOL _daSupportsSharedCalendars;
    BOOL _daWasMigrated;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    REMObjectID *_objectID;
    long long _type;
    NSString *_name;
    REMCRMergeableOrderedSet *_listIDsMergeableOrdering;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSSet *_listIDsToUndelete;
    NSString *_daConstraintsDescriptionPath;
}

+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg1;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL daWasMigrated; // @synthesize daWasMigrated=_daWasMigrated;
@property(nonatomic) BOOL daSupportsSharedCalendars; // @synthesize daSupportsSharedCalendars=_daSupportsSharedCalendars;
@property(nonatomic) BOOL daAllowsCalendarAddDeleteModify; // @synthesize daAllowsCalendarAddDeleteModify=_daAllowsCalendarAddDeleteModify;
@property(copy, nonatomic) NSString *daConstraintsDescriptionPath; // @synthesize daConstraintsDescriptionPath=_daConstraintsDescriptionPath;
@property(nonatomic) BOOL didFinishMigration; // @synthesize didFinishMigration=_didFinishMigration;
@property(nonatomic) BOOL didChooseToMigrateLocally; // @synthesize didChooseToMigrateLocally=_didChooseToMigrateLocally;
@property(nonatomic) BOOL didChooseToMigrate; // @synthesize didChooseToMigrate=_didChooseToMigrate;
@property(nonatomic) BOOL inactive; // @synthesize inactive=_inactive;
@property(nonatomic) BOOL listsDADisplayOrderChanged; // @synthesize listsDADisplayOrderChanged=_listsDADisplayOrderChanged;
@property(retain, nonatomic) NSSet *listIDsToUndelete; // @synthesize listIDsToUndelete=_listIDsToUndelete;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @synthesize resolutionTokenMap=_resolutionTokenMap;
@property(nonatomic) BOOL markedForRemoval; // @synthesize markedForRemoval=_markedForRemoval;
@property(retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering; // @synthesize listIDsMergeableOrdering=_listIDsMergeableOrdering;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *daPushKey; // @synthesize daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @synthesize daSyncToken;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier;
// - (void).cxx_destruct;
- (id)listIDsMergeableOrderingReplicaIDSource;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, nonatomic) NSString *displayName;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setStoreGenerationIfNeeded:(NSUInteger)arg1;
- (NSUInteger)storeGeneration;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 listIDsMergeableOrdering:(id)arg4;

@end

