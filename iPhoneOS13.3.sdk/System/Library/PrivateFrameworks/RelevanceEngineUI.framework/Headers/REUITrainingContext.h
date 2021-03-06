//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RETrainingContext.h>

@class NSArray, NSMutableDictionary;

@interface REUITrainingContext : RETrainingContext
{
    NSMutableDictionary *_becameVisibleDates;
    NSMutableDictionary *_visibilityDurations;
    BOOL _resetsWhenResignsCurrent;
}

@property(nonatomic) BOOL resetsWhenResignsCurrent; // @synthesize resetsWhenResignsCurrent=_resetsWhenResignsCurrent;
// - (void).cxx_destruct;
- (BOOL)performSimulationCommand:(id)arg1 withOptions:(id)arg2;
- (void)_willResignCurrent;
- (id)_lowerElementsThanElement:(id)arg1;
- (id)_higherElementsThanElement:(id)arg1;
- (id)_visibleElements;
- (id)_interactionForElement:(id)arg1;
- (void)resetContext;
- (BOOL)isDisplayingElementWithIdentifier:(id)arg1;
- (void)elementWithIdentifierDidEndDisplay:(id)arg1;
- (void)_trainDwellForElement:(id)arg1 withInterval:(double)arg2;
- (void)elementWithIdentifierDidDisplay:(id)arg1;
- (void)selectElementWithIdentifier:(id)arg1;
- (id)init;
- (id)interactionTypeForElement:(id)arg1;
- (BOOL)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(NSUInteger)arg1 relativeToElement:(id)arg2;
@property(readonly, nonatomic) NSArray *visibleElementIdentifiers;
@property(readonly, nonatomic) NSUInteger onScreenElementCount;
@property(readonly, nonatomic) double minimumPositiveDwellTime;
@property(readonly, nonatomic) double maximumNegativeDwellTime;

@end

