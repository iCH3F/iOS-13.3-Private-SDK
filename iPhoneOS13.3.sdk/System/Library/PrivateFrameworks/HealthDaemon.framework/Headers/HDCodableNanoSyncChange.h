//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncChange-Protocol.h>

@class HDCodableEntityIdentifier, NSMutableArray, NSNumber, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying>
{
    long long _endAnchor;
    long long _sequence;
    long long _startAnchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    NSMutableArray *_objectDatas;
    int _objectType;
    NSMutableArray *_requiredAnchors;
    BOOL _complete;
    BOOL _speculative;
    struct {
        unsigned int endAnchor:1;
        unsigned int sequence:1;
        unsigned int startAnchor:1;
        unsigned int objectType:1;
        unsigned int complete:1;
        unsigned int speculative:1;
    } _has;
}

+ (Class)requiredAnchorsType;
+ (Class)objectDataType;
+ (id)changeWithNanoSyncEntityClass:(Class)arg1;
@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) BOOL speculative; // @synthesize speculative=_speculative;
@property(retain, nonatomic) NSMutableArray *requiredAnchors; // @synthesize requiredAnchors=_requiredAnchors;
@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property(nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property(nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasEntityIdentifier;
@property(nonatomic) BOOL hasComplete;
@property(nonatomic) BOOL hasSequence;
@property(nonatomic) BOOL hasSpeculative;
- (id)requiredAnchorsAtIndex:(NSUInteger)arg1;
- (NSUInteger)requiredAnchorsCount;
- (void)addRequiredAnchors:(id)arg1;
- (void)clearRequiredAnchors;
- (id)objectDataAtIndex:(NSUInteger)arg1;
- (NSUInteger)objectDatasCount;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
@property(nonatomic) BOOL hasEndAnchor;
@property(nonatomic) BOOL hasStartAnchor;
- (int)StringAsObjectType:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasObjectType;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
- (id)nanoSyncDescription;
- (id)decodedObjectsForProfile:(id)arg1 error:(id )arg2;
- (id)requiredAnchorMapWithProfile:(id)arg1 error:(id )arg2;
- (void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2;
@property(readonly, nonatomic) BOOL done;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
- (id)speculativeCopy;
- (Class)syncEntityClassForProfile:(id)arg1;
- (id)syncEntityIdentifier;
@property(readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;

@end

