//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_PARSearchResponse_QuerySuggestion-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QuerySuggestion : PBCodable <_PARSearchResponse_QuerySuggestion, NSSecureCoding>
{
    BOOL _previouslyEngaged;
    float _score;
    NSString *_suggestion;
    NSString *_query;
    NSData *_feedback;
    NSArray *_entities;
}

@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) BOOL previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSData *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)entitiesAtIndex:(NSUInteger)arg1;
- (NSUInteger)entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

@end

