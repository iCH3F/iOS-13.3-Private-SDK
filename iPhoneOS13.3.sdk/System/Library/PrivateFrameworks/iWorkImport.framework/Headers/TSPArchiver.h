//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

@class NSHashTable, NSMutableSet, NSObject, NSSet, NSUUID, TSPObject, TSPReferenceOrderedSet, TSPUnknownContentSnapshot;
@protocol OS_dispatch_data, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface TSPArchiver : TSPArchiverBase
{
    _Atomic char _flags;
    TSPUnknownContentSnapshot *_unknownContentSnapshot;
    NSObject<OS_dispatch_group> *_archiveGroup;
    NSObject<OS_dispatch_group> *_serializeGroup;
    NSObject<OS_dispatch_data> *_serializedData;
    NSMutableSet *_featureInfos;
    NSUUID *_objectUUID;
    TSPObject *_explicitComponentRootObject;
    TSPReferenceOrderedSet *_aggregatedStrongReferences;
    TSPReferenceOrderedSet *_aggregatedWeakReferences;
    TSPReferenceOrderedSet *_aggregatedCommandToModelReferences;
    NSHashTable *_aggregatedLazyReferences;
    NSHashTable *_aggregatedDataReferences;
}

@property(readonly, nonatomic) NSHashTable *aggregatedDataReferences; // @synthesize aggregatedDataReferences=_aggregatedDataReferences;
@property(readonly, nonatomic) NSHashTable *aggregatedLazyReferences; // @synthesize aggregatedLazyReferences=_aggregatedLazyReferences;
@property(readonly, nonatomic) TSPReferenceOrderedSet *aggregatedCommandToModelReferences; // @synthesize aggregatedCommandToModelReferences=_aggregatedCommandToModelReferences;
@property(readonly, nonatomic) TSPReferenceOrderedSet *aggregatedWeakReferences; // @synthesize aggregatedWeakReferences=_aggregatedWeakReferences;
@property(readonly, nonatomic) TSPReferenceOrderedSet *aggregatedStrongReferences; // @synthesize aggregatedStrongReferences=_aggregatedStrongReferences;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // @synthesize serializedData=_serializedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *serializeGroup; // @synthesize serializeGroup=_serializeGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *archiveGroup; // @synthesize archiveGroup=_archiveGroup;
@property(readonly, nonatomic) TSPObject *explicitComponentRootObject; // @synthesize explicitComponentRootObject=_explicitComponentRootObject;
@property(readonly, nonatomic) NSUUID *objectUUID; // @synthesize objectUUID=_objectUUID;
// - (void).cxx_destruct;
- (BOOL)isSavingCollaborativeDocument;
- (BOOL)isSavingDocumentAs;
- (void)validateOrderedArchivableContent:(id)arg1;
- (id)calculateOrderedArchivableContent;
- (void)cleanup;
- (void)serialize;
- (BOOL)updateMessageInfo:(struct MessageInfo )arg1 withArchiver:(id)arg2;
- (void)aggregateReferencesFromArchiver:(id)arg1;
- (void)archive;
@property(readonly, nonatomic) BOOL success;
- (void)fail;
- (BOOL)beginWrite;
@property(readonly, nonatomic) BOOL needsArchive;
- (BOOL)beginArchive;
- (id)addAlternateArchiverForVersion:(NSUInteger)arg1 fieldPath:(const struct FieldPath )arg2 isDiffArchiver:(BOOL)arg3 diffReadVersion:(NSUInteger)arg4;
- (id)alternateForVersion:(NSUInteger)arg1;
- (void)requiresDocumentVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2;
- (void)requiresDocumentVersion:(NSUInteger)arg1;
- (void)requiresDocumentReadVersion:(NSUInteger)arg1 writeVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)requiresDocumentReadVersion:(NSUInteger)arg1 writeVersion:(NSUInteger)arg2;
- (void)addDocumentFeatureInfoWithIdentifier:(id)arg1 readVersion:(NSUInteger)arg2 writeVersion:(NSUInteger)arg3 validatingValues:(BOOL)arg4;
@property(readonly, nonatomic) NSSet *featureInfos;
@property(readonly, nonatomic) BOOL shouldSaveAlternates;
- (id)initWithObject:(id)arg1 flags:(BOOL)arg2;
- (id)initWithObject:(id)arg1;

@end

