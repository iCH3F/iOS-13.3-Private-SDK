//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMemoryCore-Protocol.h>
#import <PhotosGraph/PGMemoryProtocol-Protocol.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSMutableSet, NSSet, NSString, PGMemoryDebug, PHAsset, PHAssetCollection;

@interface PGMemory : NSObject <PGMemoryProtocol, PGMemoryCore>
{
    NSDate *_creationDate;
    PHAssetCollection *_assetCollection;
    PHAssetCollection *_curatedAssetCollection;
    PHAssetCollection *_extendedCuratedAssetCollection;
    PHAsset *_curatedKeyAsset;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    double _score;
    long long _sourceType;
    NSUInteger _duration;
    NSUInteger _category;
    NSUInteger _subcategory;
    NSUInteger _originalSubcategory;
    NSUInteger _matchedTypes;
    NSDate *_matchedLocalDate;
    CLLocation *_matchedLocation;
    NSSet *_matchedPeople;
    NSString *_matchedEventName;
    NSSet *_features;
    NSMutableSet *_persistedFeatures;
    NSUInteger _aggregatedVersions;
    NSString *_meUUID;
    PGMemoryDebug *_debug;
    long long _notificationQuality;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
    NSArray *_blacklistableFeatures;
    NSString *_rejectionCause;
    NSDictionary *_musicGenreDistribution;
}

+ (id)stringForSourceType:(long long)arg1;
+ (id)otherMemoryCriteria;
+ (id)greatMemoryCriteria;
+ (id)stellarMemoryCriteria;
+ (id)mustSeeMemoryCriteria;
@property(copy, nonatomic) NSDictionary *musicGenreDistribution; // @synthesize musicGenreDistribution=_musicGenreDistribution;
@property(nonatomic) NSString *rejectionCause; // @synthesize rejectionCause=_rejectionCause;
@property(retain, nonatomic) NSArray *blacklistableFeatures; // @synthesize blacklistableFeatures=_blacklistableFeatures;
@property(retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs; // @synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs;
@property(retain, nonatomic) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property(nonatomic) long long notificationQuality; // @synthesize notificationQuality=_notificationQuality;
@property(retain, nonatomic) PGMemoryDebug *debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSString *meUUID; // @synthesize meUUID=_meUUID;
@property(readonly, nonatomic) NSUInteger aggregatedVersions; // @synthesize aggregatedVersions=_aggregatedVersions;
@property(retain, nonatomic) NSMutableSet *persistedFeatures; // @synthesize persistedFeatures=_persistedFeatures;
@property(retain, nonatomic) NSSet *features; // @synthesize features=_features;
@property(retain, nonatomic) NSString *matchedEventName; // @synthesize matchedEventName=_matchedEventName;
@property(retain, nonatomic) NSSet *matchedPeople; // @synthesize matchedPeople=_matchedPeople;
@property(retain, nonatomic) CLLocation *matchedLocation; // @synthesize matchedLocation=_matchedLocation;
@property(retain, nonatomic) NSDate *matchedLocalDate; // @synthesize matchedLocalDate=_matchedLocalDate;
@property(nonatomic) NSUInteger matchedTypes; // @synthesize matchedTypes=_matchedTypes;
@property(nonatomic) NSUInteger originalSubcategory; // @synthesize originalSubcategory=_originalSubcategory;
@property(nonatomic) NSUInteger subcategory; // @synthesize subcategory=_subcategory;
@property(nonatomic) NSUInteger category; // @synthesize category=_category;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(retain, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(retain, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(retain, nonatomic) PHAsset *curatedKeyAsset; // @synthesize curatedKeyAsset=_curatedKeyAsset;
@property(retain, nonatomic) PHAssetCollection *extendedCuratedAssetCollection; // @synthesize extendedCuratedAssetCollection=_extendedCuratedAssetCollection;
@property(retain, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger suggestedMood;
@property(readonly, nonatomic) NSArray *moodKeywords;
@property(readonly, nonatomic) NSArray *meaningLabels;
- (void)addPersistedFeature:(id)arg1;
@property(nonatomic) unsigned short memoriesAlgorithmsVersion;
@property(nonatomic) unsigned short relatedAlgorithmsVersion;
@property(nonatomic) unsigned short curationAlgorithmsVersion;
@property(nonatomic) unsigned short graphSchemaVersion;
- (id)_localIdentifiersInAssetCollection:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAssetCollection:(id)arg1;
- (double)_scoreForMemoryCriteria:(id)arg1;
- (double)phMemoryScore;
- (BOOL)isGreat;
- (BOOL)isStellar;
- (BOOL)isMustSee;

@end

