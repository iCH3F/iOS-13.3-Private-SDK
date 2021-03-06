//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphEdge.h>

@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphEdge
{
}

- (id)_readableStringForContactSuggestionProperty:(id)arg1;
- (NSUInteger)_genderMatch;
@property(readonly, nonatomic) BOOL personContactGenderMismatch;
@property(readonly, nonatomic) BOOL personContactGenderMatch;
@property(readonly, nonatomic) NSString *messageGroupsDebug;
@property(readonly, nonatomic) NSString *socialGroupsDebug;
@property(readonly, nonatomic) double socialGroupsConfidence;
@property(readonly, nonatomic) NSUInteger numberOfMatchedMessageGroups;
@property(readonly, nonatomic) NSUInteger numberOfMatchedRelationships;
@property(readonly, nonatomic) NSString *relationshipsDebug;
@property(readonly, nonatomic) BOOL contactFaceprintMatch;
@property(readonly, nonatomic) double facetimeFaceprintConfidence;
@property(readonly, nonatomic) NSUInteger numberOfCMMMoments;
@property(readonly, nonatomic) NSUInteger numberOfAppearancesInSharedAssets;
@property(readonly, nonatomic) NSUInteger numberOfMomentsOverlappingWithCalendarEvents;
@property(readonly, nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property(readonly, nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property(readonly, nonatomic) NSUInteger numberOfMomentsAtMentionedAddress;
@property(readonly, nonatomic) NSUInteger numberOfMomentsAtHome;
- (BOOL)isHighConfidence;
- (BOOL)isFilteredOut;
- (id)_stringForGenderMatch:(NSUInteger)arg1;
- (id)description;
- (double)confidence;

@end

