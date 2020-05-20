//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _TtC9Coherence11ObjCReplica, _TtC9Coherence11ObjCVersion, _TtC9Coherence9CRContext;

@interface TTMergeableString : NSObject
{
    vector_c5c053b6 _startNodes;
    vector_c5c053b6 _endNodes;
    vector_c5c053b6 _orderedSubstrings;
    NSUInteger _editCount;
    BOOL _cacheInvalid;
    TTMergeableString *_renamedString;
    BOOL _hasLocalChanges;
    _TtC9Coherence9CRContext *_context;
    _TtC9Coherence11ObjCVersion *_version;
    _TtC9Coherence11ObjCVersion *_addedByVersion;
    id _attributedString;
    NSUUID *_uuid;
    long long _localCounter;
    _TtC9Coherence11ObjCReplica *_addedByReplica;
    long long _addedByLocalCounter;
    long long _renameGeneration;
    struct TopoReplica _replica;
}

@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property(readonly, nonatomic) _TtC9Coherence11ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property(nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property(readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) _TtC9Coherence11ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) _TtC9Coherence11ObjCVersion *version; // @synthesize version=_version;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)finalizeTimestamps;
- (BOOL)needToFinalizeTimestamps;
- (void)applyRenamesAndRetainOrRelease:(id)arg1;
- (id)renamedIfAvailable;
- (id)fullyRenamed;
- (id)temporaryConcurrentNames;
- (id)temporaryNamesExcludingSelf:(BOOL)arg1;
- (id)renamed:(id)arg1;
- (void)applyTimestampRenames:(id)arg1;
- (void)apply:(id)arg1;
- (void)rename:(id)arg1;
- (void)useRenameIfAvailable;
@property(readonly, nonatomic) _TtC9Coherence9CRContext *context; // @synthesize context=_context;
- (id)dotDescription:(NSUInteger)arg1;
- (BOOL)graphIsEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)traverseUnordered:(id /* CDUnknownBlockType */)arg1;
- (void)sortSplitNodes;
- (NSUInteger)mergeWithString:(id)arg1;
- (void)dumpMergeData:(id)arg1;
- (BOOL)check:(id )arg1;
- (BOOL)canMergeString:(id)arg1;
- (void)coalesce;
- (void)updateSubstringIndexes;
- (void)updateAttributedStringAfterMerge;
- (void)invalidateCache;
- (void)_updateCache;
- (long long)substringCount;
- (vector_c5c053b6 )orderedSubstrings;
- (struct TopoSubstring )splitTopoSubstring:(struct TopoSubstring )arg1 atIndex:(unsigned int)arg2;
- (void)enumerateSubstrings:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)characterIndexForIndex:(id)arg1;
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(NSUInteger)arg2;
- (void)getCharacterRanges:(vector_7053a16b )arg1 forSubstrings:(vector_c5c053b6 )arg2;
- (void)getSubstrings:(vector_c5c053b6 )arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (struct TopoSubstring )getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_c5c053b6 )arg1 inOrderedSubstrings:(vector_c5c053b6 )arg2 forCharacterRange:(_NSRange)arg3;
- (void)getSubstrings:(vector_c5c053b6 )arg1 forCharacterRange:(_NSRange)arg2;
- (void)insertStorage:(id)arg1 after:(struct TopoSubstring )arg2 before:(struct TopoSubstring )arg3;
- (void)deleteSubstrings:(vector_c5c053b6 )arg1 withCharacterRanges:(vector_7053a16b )arg2;
- (void)addNewAddedByFor:(struct TopoSubstring )arg1;
- (vector_c5c053b6 )endNodes;
- (vector_c5c053b6 )startNodes;
- (BOOL)isFragment;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(id /* CDUnknownBlockType */)arg2;
- (id)characterRangesForSelection:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(NSUInteger)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)replicaUUIDForCharacterAtIndex:(NSUInteger)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)insertStorage:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObjectsInRange:(_NSRange)arg1;
- (void)replaceStorageInRange:(_NSRange)arg1 withStorage:(id)arg2;
- (NSUInteger)length;
- (id)copyRenamedIfAvailable:(BOOL)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)deleteAllSubstrings;
- (void)dealloc;
- (id)initAsFragment:(BOOL)arg1 storage:(id)arg2 uuid:(id)arg3 context:(id)arg4;
- (void)saveSubstrings:(vector_c5c053b6 )arg1 encoder:(id)arg2;
- (id)uuidLookupDictionaryFor:(id)arg1;
- (void)saveToEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1 error:(id )arg2;
- (BOOL)hasDeltaTo:(id)arg1 compareElements:(id /* CDUnknownBlockType */)arg2;
- (void)_deltaTo:(id)arg1 added:(id /* CDUnknownBlockType */)arg2 deleted:(id /* CDUnknownBlockType */)arg3;
- (void)deltaTo:(id)arg1 added:(id /* CDUnknownBlockType */)arg2 deleted:(id /* CDUnknownBlockType */)arg3;
- (void)deltaTo:(id)arg1 edited:(id /* CDUnknownBlockType */)arg2;
- (id)undoCommandToChangeTo:(id)arg1;
- (void)undeleteSubstrings:(vector_4788519f )arg1;

@end
