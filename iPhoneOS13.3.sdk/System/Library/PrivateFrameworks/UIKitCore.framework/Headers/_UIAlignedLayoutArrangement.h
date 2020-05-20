//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILayoutArrangement.h>

#import <UIKitCore/_UIALAPropertySource-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource>
{
    NSMutableDictionary *_alignmentConstraints;
    NSUInteger _alignment;
}

+ (Class)_configurationHistoryClass;
@property(nonatomic) NSUInteger alignment; // @synthesize alignment=_alignment;
// - (void).cxx_destruct;
- (void)_clearAllConstraintsArrays;
- (void)_updateArrangementConstraints;
- (void)_addConstraintGroupsAsNecessary;
- (void)_addIndividualConstraintsIfPossible;
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;
- (long long)_attributeForConstraintGroupName:(id)arg1;
- (void)_removeIndividualConstraintsAsNecessary;
- (void)_removeConstraintGroupsAsNecessary;
- (BOOL)_wantsConstraintsForAttribute:(long long)arg1;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;
- (id)_baselineDependentConstraints;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (void)_updateConfigurationHistory;
- (BOOL)_hasStaleConfiguration;
- (id)_alignmentPropertySource;
- (id)_alignmentConfigurationHistory;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (BOOL)_usesCenteringConnectionConstraint;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (long long)_axisForSpanningLayoutGuide;
- (id)_identifierForSpanningLayoutGuide;
- (NSUInteger)_indexOfItemForLocationAttribute:(long long)arg1;
@property(nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) BOOL layoutFillsCanvas;
@property(nonatomic) long long axis;
- (id)initWithItems:(id)arg1;

@end

