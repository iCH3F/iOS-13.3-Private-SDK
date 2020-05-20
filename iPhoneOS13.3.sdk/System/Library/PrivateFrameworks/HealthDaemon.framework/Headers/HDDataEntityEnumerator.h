//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDDatabaseTransactionContext, HDProfile, NSArray, NSMutableDictionary, NSNumber, NSSet, NSString, _HKFilter;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor
{
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    BOOL _useLeftJoin;
    BOOL _ignoreEntityClassAdditionalPredicateForEnumeration;
    BOOL _improveJoinOrderingForStartDateIndexSelection;
    NSSet *_objectTypes;
    _HKFilter *_filter;
    NSSet *_restrictedSourceEntities;
    id /* CDUnknownBlockType */ _authorizationFilter;
    NSNumber *_anchor;
    NSNumber *_deletedObjectsAnchor;
    NSArray *_sortDescriptors;
    HDDatabaseTransactionContext *_databaseTransactionContext;
    NSString *_lastSQL;
}

@property(readonly, copy, nonatomic) NSString *lastSQL; // @synthesize lastSQL=_lastSQL;
@property(nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection; // @synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection;
@property(nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration; // @synthesize ignoreEntityClassAdditionalPredicateForEnumeration=_ignoreEntityClassAdditionalPredicateForEnumeration;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // @synthesize databaseTransactionContext=_databaseTransactionContext;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSNumber *deletedObjectsAnchor; // @synthesize deletedObjectsAnchor=_deletedObjectsAnchor;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authorizationFilter; // @synthesize authorizationFilter=_authorizationFilter;
@property(retain, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSSet *objectTypes; // @synthesize objectTypes=_objectTypes;
// - (void).cxx_destruct;
- (id)_joinClauseForProperties:(id)arg1;
- (BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id )arg2;
- (BOOL)_prepareDescriptor:(id)arg1 error:(id )arg2;
- (BOOL)_setOrderingTermsOnDescriptor:(id)arg1 error:(id )arg2;
- (BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)enumerateWithError:(id )arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)encodingOptionForKey:(id)arg1;
- (void)setEncodingOption:(id)arg1 forKey:(id)arg2;
- (void)addEncodingOptionsFromDictionary:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithObjectTypes:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithEntityClass:(Class)arg1 profile:(id)arg2;

@end

