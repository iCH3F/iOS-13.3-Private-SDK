//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStylePack : PBCodable <NSCopying>
{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property(retain, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;
@property(retain, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)genericShieldAtIndex:(NSUInteger)arg1;
- (NSUInteger)genericShieldsCount;
- (void)addGenericShield:(id)arg1;
- (void)clearGenericShields;
- (id)textureAtlasAtIndex:(NSUInteger)arg1;
- (NSUInteger)textureAtlasCount;
- (void)addTextureAtlas:(id)arg1;
- (void)clearTextureAtlas;
- (void)dealloc;

@end

