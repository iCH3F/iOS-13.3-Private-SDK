//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexTextEntry : PBCodable <NSCopying>
{
    NSString *_artworkIdentifier;
    NSMutableArray *_shieldTexts;
    int _shieldType;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *shieldTexts; // @synthesize shieldTexts=_shieldTexts;
@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldTextAtIndex:(NSUInteger)arg1;
- (NSUInteger)shieldTextsCount;
- (void)addShieldText:(id)arg1;
- (void)clearShieldTexts;
@property(nonatomic) BOOL hasShieldType;
@property(readonly, nonatomic) BOOL hasArtworkIdentifier;
- (void)dealloc;

@end

