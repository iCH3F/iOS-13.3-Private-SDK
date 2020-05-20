//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload
{
}

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(BOOL)arg3;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
- (BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property(readonly, nonatomic) BOOL isRootFolder;
@property(readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end

