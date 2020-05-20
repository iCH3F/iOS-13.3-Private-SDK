//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol WBSOrderedTab, WBSTabOrderProvider;

@interface WBSTabOrderManager : NSObject
{
    NSMutableDictionary *_simplifiedIdentifierMap;
    long long _nextSimplifiedIdentifier;
    id <WBSTabOrderProvider> _tabOrderProvider;
}

@property(nonatomic) __weak id <WBSTabOrderProvider> tabOrderProvider; // @synthesize tabOrderProvider=_tabOrderProvider;
// - (void).cxx_destruct;
- (id)_nextNonClosedTabAdjacentToIndex:(NSUInteger)arg1 inAscendingOrder:(BOOL)arg2;
- (NSUInteger)_relationConsideringUserPreferenceForRelation:(NSUInteger)arg1 isBlankTab:(BOOL)arg2;
- (id)_insertionHintWithTabToInsertAfter:(id)arg1 relation:(NSUInteger)arg2;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(NSUInteger)arg1 relation:(NSUInteger)arg2;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)arg1;
- (BOOL)_tab:(id)arg1 isRelatedOrEqualToTab:(id)arg2;
- (BOOL)tab:(id)arg1 isInSameSetAsTab:(id)arg2;
@property(readonly, nonatomic) id <WBSOrderedTab> tabToSelectBeforeClosingSelectedTab;
- (BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (NSUInteger)_userPreferredNewSpawnedTabPosition;
- (NSUInteger)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)arg1;
- (id)tabInsertionHintForSpawnedTab;
- (id)tabToInsertSpawnedTabAfter;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(NSUInteger)arg1;
- (id)tabInsertionHintForNewBlankTab;
- (id)tabToInsertNewBlankTabAfter;
- (NSUInteger)_indexOfLastRelatedTab;
- (NSUInteger)_indexOfTabToInsertNewTabAfter;
- (id)_tabInsertionHintForPosition:(NSUInteger)arg1 isBlankTab:(BOOL)arg2;
- (id)tabInsertionHintForPosition:(NSUInteger)arg1;
- (id)tabToInsertNewTabAfterForPosition:(NSUInteger)arg1;
- (id)init;

@end

