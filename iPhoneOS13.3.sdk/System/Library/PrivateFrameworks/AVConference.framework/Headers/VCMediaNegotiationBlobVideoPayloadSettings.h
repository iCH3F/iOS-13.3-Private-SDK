//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying>
{
    NSString *_featureString;
    unsigned int _parameterSet;
    unsigned int _payload;
    NSMutableArray *_videoRuleCollections;
}

+ (Class)videoRuleCollectionsType;
@property(nonatomic) unsigned int parameterSet; // @synthesize parameterSet=_parameterSet;
@property(retain, nonatomic) NSString *featureString; // @synthesize featureString=_featureString;
@property(retain, nonatomic) NSMutableArray *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(nonatomic) unsigned int payload; // @synthesize payload=_payload;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)videoRuleCollectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)videoRuleCollectionsCount;
- (void)addVideoRuleCollections:(id)arg1;
- (void)clearVideoRuleCollections;
- (void)dealloc;

@end

