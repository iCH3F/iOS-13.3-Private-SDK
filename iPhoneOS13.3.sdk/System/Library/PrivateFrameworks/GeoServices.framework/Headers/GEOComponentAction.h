//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable <NSCopying>
{
    CDStruct_95bda58d _actions;
    int _component;
    BOOL _handleLocally;
    struct {
        unsigned int has_component:1;
        unsigned int has_handleLocally:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHandleLocally;
@property(nonatomic) BOOL handleLocally;
- (int)StringAsActions:(id)arg1;
- (id)actionsAsString:(int)arg1;
- (void)setActions:(int )arg1 count:(NSUInteger)arg2;
- (int)actionsAtIndex:(NSUInteger)arg1;
- (void)addActions:(int)arg1;
- (void)clearActions;
@property(readonly, nonatomic) int actions;
@property(readonly, nonatomic) NSUInteger actionsCount;
- (int)StringAsComponent:(id)arg1;
- (id)componentAsString:(int)arg1;
@property(nonatomic) BOOL hasComponent;
@property(nonatomic) int component;
- (void)dealloc;

@end

