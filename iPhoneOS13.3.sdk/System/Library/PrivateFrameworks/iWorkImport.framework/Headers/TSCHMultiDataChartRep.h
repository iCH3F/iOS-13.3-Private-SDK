//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class CALayer, NSMutableDictionary, NSSet, TSCHMultiDataChartRepElementIndex;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRep : TSCHChartRep
{
    CALayer *mRootLayer;
    CALayer *mElementsContainerLayer;
    BOOL mRenderingBackgroundLayer;
    BOOL mRenderingElementShapeLayer;
    BOOL mRenderingElementLabelsLayer;
    BOOL mRenderingDataSetNameLayer;
    BOOL mRenderingReferenceLineLayer;
    BOOL mAnimatedLayersNeedUpdate;
    BOOL mShouldAnimateLabelsQuickly;
    BOOL mIsAnimatingForBuilds;
    NSUInteger mElementLayersMultiDataSetIndex;
    int mGridDirection;
    NSMutableDictionary *mIndexedElements;
    TSCHMultiDataChartRepElementIndex *mCurrentRepElementIndex;
    CALayer *mDataSetNameLayer;
    CALayer *mReferenceLinesContainerLayer;
    NSSet *mReferenceLinesToRender;
    NSSet *mReferenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *mLayerIdToLayerMap;
    NSMutableDictionary *mPreviousOutsideBodyBounds;
    BOOL _shouldDisableMultiDataControls;
}

@property(readonly, nonatomic) BOOL shouldDisableMultiDataControls; // @synthesize shouldDisableMultiDataControls=_shouldDisableMultiDataControls;
// - (void).cxx_destruct;
- (void)didEndZooming;
- (void)willBeginZooming;
- (BOOL)shouldUseLegendLayerForLayerBasedRep;
- (id)imageFromFill:(id)arg1 forResolutionWithBounds:(CGRect)arg2 toRepElementTransform:(CGAffineTransform)arg3 skipIntegral:(BOOL)arg4 returningFillFrame:(CGRect )arg5;
- (id)previousOutsideBodyBounds;
- (id)layerIdToLayerMap;
- (BOOL)needsAnimationForAnimationInfo:(id)arg1;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)p_elementLayers;
- (BOOL)isHorizontalChart;
- (id)p_chartModel;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

