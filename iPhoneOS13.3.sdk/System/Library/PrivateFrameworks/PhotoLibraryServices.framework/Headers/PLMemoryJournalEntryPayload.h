//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSSet, NSString;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload
{
}

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelPropertiesDescription;
- (BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
@property(retain, nonatomic) NSSet *representativeAssetUUIDs;
@property(retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property(retain, nonatomic) NSString *keyAssetUUID;
@property(retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property(retain, nonatomic) NSSet *curatedAssetUUIDs;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(BOOL)arg2;
- (BOOL)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(BOOL)arg2;
- (id)insertMemoryFromDataInManagedObjectContext:(id)arg1;

@end

