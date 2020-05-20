//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesType : NSObject
{
    NSArray *mSeriesRendererClasses;
}

+ (id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+ (id)inspectorDefaultLocalizedValueLabelsTabName;
+ (Class)sceneObjectClass;
+ (id)allSeriesTypes;
+ (id)styleArchTypes;
+ (id)expandProperties:(id)arg1;
+ (id)stackedBar3DSeries;
+ (id)bar3DSeries;
+ (id)stackedColumn3DSeries;
+ (id)donut3DSeries;
+ (id)pie3DSeries;
+ (id)stackedArea3DSeries;
+ (id)area3DSeries;
+ (id)line3DSeries;
+ (id)column3DSeries;
+ (id)bubbleSeries;
+ (id)mixedAreaSeries;
+ (id)mixedLineSeries;
+ (id)mixedColumnSeries;
+ (id)stackedAreaSeries;
+ (id)stackedBarSeries;
+ (id)stackedColumnSeries;
+ (id)areaSeries;
+ (id)lineSeries;
+ (id)barSeries;
+ (id)columnSeries;
+ (id)scatterSeries;
+ (id)donutSeries;
+ (id)pieSeries;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)_singletonAlloc;
// - (void).cxx_destruct;
- (id)seriesFillLabelUIString;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (BOOL)supportsFillSetFill;
- (int)specificFillSetFillProperty;
- (int)fillSetFillProperty;
- (int)seriesStrokeProperty;
- (BOOL)supportsCalloutLines;
- (id)supportedValueLabelsAxisCombinations;
- (id)axisTypesForValueLabels;
- (int)defaultSymbolType;
- (id)userInterfaceName;
- (id)coordinateAxisForSeries:(id)arg1;
- (id)valueAxisForSeries:(id)arg1;
- (id)p_axisForSeries:(id)arg1 isCategory:(BOOL)arg2;
- (Class)sceneObjectClass;
- (BOOL)supportsValueLabelsAxisOption;
- (BOOL)supportsValueLabelsSeriesName;
- (BOOL)supportsValueLabels;
- (NSUInteger)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (NSUInteger)seriesIndexForDrawing:(id)arg1;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(NSUInteger)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(NSUInteger)arg1 index:(NSUInteger)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsLineTypeNone;
- (BOOL)supportsSymbolFillForSymbolType:(int)arg1;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (BOOL)supportsShadowOffset;
- (id)supportedSymbols;
- (BOOL)supportsSymbolTypeEditing;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSeries3DFill;
- (BOOL)supportsSeriesGradientFill;
- (BOOL)supportsSeriesFill;
- (id)cdeFillForSeries:(id)arg1;
- (id)propertiesForReferenceColors;
- (id)legendStrokeForSeries:(id)arg1;
- (id)legendFillForSeries:(id)arg1;
- (int)legendBadgeType;
- (id)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1 forSeries:(id)arg2;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (BOOL)isVertical;
- (BOOL)supportsRoundedCorners;
- (BOOL)supportsBarGap;
- (BOOL)supportsSetGap;
- (BOOL)useInBarGapCalculations;
- (id)elementBuilder;
- (id)seriesRendererClasses;
- (NSUInteger)valueDimensions;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (BOOL)canUseEstimatedValueLabelsDrawingRect;
- (BOOL)floatValueForLabelExplosion:(float )arg1 series:(id)arg2;

@end

