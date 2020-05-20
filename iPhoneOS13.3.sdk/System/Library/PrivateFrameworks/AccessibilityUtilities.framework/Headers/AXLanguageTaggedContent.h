//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    _NSRange _currentChunk;
    BOOL _predictedByTagger;
    void _nlTagger;
    BOOL _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
    NSMutableOrderedSet *_predictedSecondaryLangMaps;
    NSMutableString *_contentString;
}

@property(retain, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property(retain, nonatomic) NSMutableString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps; // @synthesize predictedSecondaryLangMaps=_predictedSecondaryLangMaps;
@property(copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property(nonatomic, getter=isTagged) BOOL tagged; // @synthesize tagged=_tagged;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
// - (void).cxx_destruct;
- (void)updateTagsForLocalePrefChange;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(_NSRange)arg1;
- (BOOL)hasOnlyNonWesternLangMaps;
- (BOOL)hasOnlyWesternLangMaps;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (id)significantAmbiguousLangMaps;
- (BOOL)langMapIsSignificant:(id)arg1;
- (BOOL)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)tagContent;
- (BOOL)_addLanguageTagForCurrentChunk;
- (BOOL)_addLanguageTagForDateIfNecessary;
- (id)_overrideLanguageDetection:(id)arg1;
- (CDStruct_3a8d9e70 )_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (id)_allLangIDs;
- (int)langIDforLangCode:(id)arg1;
- (id)langCodeForlangId:(int)arg1;
- (void)enumeratePredictedTags:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateUnpredictedTags:(id /* CDUnknownBlockType */)arg1;
- (void)appendLanguageTaggedContent:(id)arg1;
@property(readonly, nonatomic) NSString *content;
- (id)description;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end

