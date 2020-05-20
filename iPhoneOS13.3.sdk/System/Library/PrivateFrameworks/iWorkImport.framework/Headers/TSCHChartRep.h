//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextHostRep.h>

#import <iWorkImport/CALayerDelegate-Protocol.h>
#import <iWorkImport/TSCHChartRepPlatformProtocols-Protocol.h>
#import <iWorkImport/TSCHSupportsRendering-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, NSString, TSCHChartDrawableInfo, TSCHChartLayout, TSCHLegendMoveKnob, TSCHSearchSelection, TSCHSelectionPath;

__attribute__((visibility("hidden")))
@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering, CALayerDelegate>
{
    NSArray *mRenderers;
    BOOL mBuildingChunks;
    int mChunkPhase;
    long long mCurrentChunk;
    BOOL mBuildingFinalBackground;
    BOOL mBuildingFinalElements;
    BOOL mInZoom;
    NSUInteger mInDynamicStandinOperation;
    NSUInteger mInDynamicStandinLayoutOperation;
    BOOL mIsKPFExportForMultiData;
    NSUInteger mTextureStage;
    NSUInteger mTextureDeliveryStyle;
    int mTextureByGlyphStyle;
    TSCHSelectionPath *mActiveTextEditingPath;
    BOOL mForceSeparateLegendLayer;
    BOOL mIsLayerBasedRep;
    BOOL mInvalidateLegendLayerForLayerBasedRep;
    TSCHChartLayout *mChartLayout;
    BOOL mWantsPreviewLayout;
    BOOL mEditorIsEditingInfo;
    CAShapeLayer *mMediatorEditingHaloLayer;
    CAShapeLayer *mLegendBorderHaloLayer;
    BOOL mChartRepGoingAway;
    BOOL mCDEIsEditingInfo;
    BOOL mCDECausedSetNeedsDisplay;
    BOOL mDrawingSearchReference;
    CALayer *mSubselectionKnobLayer;
    TSCHLegendMoveKnob *mDynamicLegendKnob;
    BOOL mIs2DRepFor3DChartRep;
    int mRenderPassChunkPhase;
    CGPoint mLastSubselectionLayerRelativeReferencePosition;
    CALayer *mDownloadIndicatorLayer;
    NSMutableArray *mRenderersWaitingForDownload;
    TSCHSearchSelection *_selection;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(readonly, nonatomic) TSCHSearchSelection *selection; // @synthesize selection=_selection;
@property(nonatomic) int textureByGlyphStyle; // @synthesize textureByGlyphStyle=mTextureByGlyphStyle;
@property(nonatomic) NSUInteger textureDeliveryStyle; // @synthesize textureDeliveryStyle=mTextureDeliveryStyle;
@property(nonatomic) NSUInteger textureStage; // @synthesize textureStage=mTextureStage;
@property(readonly, nonatomic) BOOL is2DRepFor3DChartRep; // @synthesize is2DRepFor3DChartRep=mIs2DRepFor3DChartRep;
@property(readonly, nonatomic) long long currentChunk; // @synthesize currentChunk=mCurrentChunk;
@property(readonly, nonatomic) BOOL chartRepGoingAway; // @synthesize chartRepGoingAway=mChartRepGoingAway;
@property(readonly, retain, nonatomic) TSCHSelectionPath *activeTextEditingPath; // @synthesize activeTextEditingPath=mActiveTextEditingPath;
@property(readonly, nonatomic) BOOL drawingSearchReference; // @synthesize drawingSearchReference=mDrawingSearchReference;
@property(retain, nonatomic) TSCHLegendMoveKnob *dynamicLegendKnob; // @synthesize dynamicLegendKnob=mDynamicLegendKnob;
@property(nonatomic) BOOL forceSeparateLegendLayer; // @synthesize forceSeparateLegendLayer=mForceSeparateLegendLayer;
// - (void).cxx_destruct;
- (CGRect)convertUnscaledToBoundsRect:(CGRect)arg1;
- (CGRect)outerShadowFrame;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (void)p_invalidateMessageOverlay;
- (id)p_textImageForPath:(CGPath )arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4;
- (BOOL)p_legendHitByLayoutPoint:(CGPoint)arg1;
- (BOOL)shadowsEnabled;
- (BOOL)buildShouldUseRenderer:(id)arg1;
- (BOOL)planeIsVisible:(int)arg1;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(long long)arg3;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1;
- (id)renderValueIndexSetForSeries:(NSUInteger)arg1 finalElements:(BOOL)arg2 currentChunk:(long long)arg3;
- (id)renderValueIndexSetForSeries:(NSUInteger)arg1 finalElements:(BOOL)arg2;
- (id)renderValueIndexSetForSeries:(NSUInteger)arg1;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(long long)arg2;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1;
- (id)renderSeriesIndexSet;
- (BOOL)renderTrendLinesForSeriesIndex:(NSUInteger)arg1;
- (BOOL)renderLabels;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderReferenceLines;
- (BOOL)renderGrid;
- (BOOL)renderElements;
- (id)p_textureForDescription:(id)arg1;
- (id)textureForDescription:(id)arg1;
- (void)protected_renderChunkInBounds:(CGRect)arg1 textureSet:(id)arg2;
@property(readonly, nonatomic) NSUInteger chartDeliveryStyle;
@property(readonly, nonatomic) NSString *animationFilter;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (BOOL)isEditing;
- (void)didEndZooming;
- (void)willBeginZooming;
- (void)updateMessageOverlayNow;
- (BOOL)messageIsVisible;
- (void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1;
- (void)p_topBarsShowedUp:(id)arg1;
- (void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3;
- (void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void )arg3;
- (void)p_forceDismissTransientMessage;
- (BOOL)p_chartShouldDisplayMessage;
- (void)p_positionMessageView;
- (CGRect)targetRectForEditMenu;
- (BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (void)p_deleteMessageView;
- (void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2;
- (void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1;
- (void)renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (void)drawInContext:(CGContext )arg1;
- (CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (CGRect)frameInUnscaledCanvas;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (BOOL)p_hasBackgroundLayerForPieChart;
- (BOOL)p_hasBackgroundFill;
- (BOOL)isDrawingIntoPDF;
@property(readonly, nonatomic) double contentsScale;
@property(readonly, nonatomic) double viewScale;
- (CGRect)geometryFrame;
- (id)geometry;
- (void)updateFromLayout;
- (BOOL)shouldUseRenderer:(id)arg1;
- (void)clearRenderers;
- (id)renderers;
@property(readonly, nonatomic) CGColor subSelectionKnobStrokeColor;
@property(readonly, nonatomic) CGColor subSelectionKnobFillColor;
@property(readonly, nonatomic) double subSelectionKnobRadius;
@property(readonly, nonatomic) BOOL isCorrectRepClassForInfo;
- (BOOL)canDrawInParallel;
@property(readonly, nonatomic) BOOL forceRenderBlankBackground;
- (id)p_legendRenderer;
- (BOOL)isLayerBasedRep;
@property(readonly, nonatomic) TSCHChartLayout *chartLayout;
- (id)drawableLayout;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(BOOL)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)requireSeparateLabelLayer;
- (id)referenceLineLabelsSearchSelectionsToRender;
- (id)referenceLinesToRender;

@end

