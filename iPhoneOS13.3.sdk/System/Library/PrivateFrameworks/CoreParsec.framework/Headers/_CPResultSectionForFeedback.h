//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPResultSectionForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>
{
    int _knownBundleIdentifier;
    NSArray *_results;
    NSString *_identifier;
    double _rankingScore;
    NSData *_fallbackResultSection;
    NSString *_bundleIdentifier;
    NSUInteger _whichBundleid;
}

@property(readonly, nonatomic) NSUInteger whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(copy, nonatomic) NSData *fallbackResultSection; // @synthesize fallbackResultSection=_fallbackResultSection;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)resultsAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)clearBundleid;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;

@end

