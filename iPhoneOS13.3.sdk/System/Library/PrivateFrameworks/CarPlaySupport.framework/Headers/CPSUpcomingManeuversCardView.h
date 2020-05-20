//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSHairlineView, NSArray, NSMutableArray, NSMutableDictionary;

@interface CPSUpcomingManeuversCardView : CPSInheritedBackgroundColorView <CPSNavigationDisplaying>
{
    BOOL _saveManeuversToDisk;
    NSArray *_maneuvers;
    NSMutableDictionary *_currentTravelEstimatesForManeuverIdentifiers;
    NSArray *_maneuverStyles;
    NSMutableArray *_maneuverViewStack;
    NSMutableArray *_verticalConstraints;
    CPSHairlineView *_hairlineView;
}

@property(nonatomic) BOOL saveManeuversToDisk; // @synthesize saveManeuversToDisk=_saveManeuversToDisk;
@property(readonly, nonatomic) CPSHairlineView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(readonly, nonatomic) NSMutableArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(readonly, nonatomic) NSMutableArray *maneuverViewStack; // @synthesize maneuverViewStack=_maneuverViewStack;
@property(readonly, nonatomic) NSArray *maneuverStyles; // @synthesize maneuverStyles=_maneuverStyles;
@property(retain, nonatomic) NSMutableDictionary *currentTravelEstimatesForManeuverIdentifiers; // @synthesize currentTravelEstimatesForManeuverIdentifiers=_currentTravelEstimatesForManeuverIdentifiers;
@property(readonly, nonatomic) NSArray *maneuvers; // @synthesize maneuvers=_maneuvers;
// - (void).cxx_destruct;
- (void)_updateVerticalConstraints;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (CGSize)intrinsicContentSize;
- (void)_resetToFull;
- (void)layoutSubviews;
- (void)_clearManeuvers;
- (void)backgroundColorDidChange;
- (id)_maneuverViews;
- (id)init;

@end

