//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder
{
    CALayer *_hostLayer;
    struct LegacyTileCache _tileCache;
    CGRect _frozenVisibleRect;
    CALayer *_rootLayer;
    CGSize _screenSize;
    CGSize _availableScreenSize;
    double _screenScale;
    CGRect _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    BOOL _visible;
    BOOL _isInSnapshottingPaint;
    BOOL _useOrientationDependentFontAntialiasing;
    BOOL _entireWindowVisibleForTesting;
    struct Lock _exposedScrollViewRectLock;
    CGRect _exposedScrollViewRect;
}

+ (id)currentEvent;
+ (BOOL)hasLandscapeOrientation;
+ (void)setOrientationProvider:(id)arg1;
@property(nonatomic) BOOL useOrientationDependentFontAntialiasing; // @synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing;
- (id).cxx_construct;
- (id)recursiveDescription;
- (id)description;
- (void)setTileControllerShouldUseLowScaleTiles:(BOOL)arg1;
- (void)dumpTiles;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)setTilePaintCountsVisible:(BOOL)arg1;
- (void)setTileBordersVisible:(BOOL)arg1;
- (id)hostLayer;
- (void)unfreezeVisibleRect;
- (void)freezeVisibleRect;
- (void)didRotate;
- (void)willRotate;
- (void)displayRect:(CGRect)arg1;
@property(nonatomic) CGImage contentReplacementImage;
- (BOOL)hasPendingDraw;
- (struct LegacyTileCache )tileCache;
- (BOOL)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (float)currentTileScale;
- (void)setCurrentTileScale:(float)arg1;
- (float)zoomedOutTileScale;
- (void)setZoomedOutTileScale:(float)arg1;
- (int)tilingDirection;
- (void)setTilingDirection:(int)arg1;
- (int)tilingMode;
- (void)setTilingMode:(int)arg1;
- (void)removeForegroundTiles;
- (void)removeAllTiles;
- (void)removeAllNonVisibleTiles;
- (CGRect)extendedVisibleRect;
- (CGRect)visibleRect;
- (CGRect)_visibleRectRespectingMasksToBounds:(BOOL)arg1;
- (void)setEntireWindowVisibleForTesting:(BOOL)arg1;
- (BOOL)isInSnapshottingPaint;
- (void)setIsInSnapshottingPaint:(BOOL)arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (BOOL)tilesOpaque;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (void)layoutTilesNowForRect:(CGRect)arg1;
- (void)layoutTilesNow;
- (void)layoutTiles;
- (CGRect)exposedScrollViewRect;
- (void)setExposedScrollViewRect:(CGRect)arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int )arg2;
- (void)sendEventSynchronously:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)rootLayer;
- (void)setRootLayer:(id)arg1;
- (double)screenScale;
- (void)setScreenScale:(double)arg1;
- (CGSize)availableScreenSize;
- (void)setAvailableScreenSize:(CGSize)arg1;
- (CGSize)screenSize;
- (void)setScreenSize:(CGSize)arg1;
- (void)setContentRect:(CGRect)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1 display:(BOOL)arg2;
- (BOOL)makeFirstResponder:(id)arg1;
- (int)keyViewSelectionDirection;
- (void)setVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (void)makeKeyWindow;
- (BOOL)isKeyWindow;
- (CGRect)convertRectFromScreen:(CGRect)arg1;
- (CGRect)convertRectToScreen:(CGRect)arg1;
- (CGPoint)convertScreenToBase:(CGPoint)arg1;
- (CGPoint)convertBaseToScreen:(CGPoint)arg1;
- (id)_newFirstResponderAfterResigning;
- (id)firstResponder;
- (void)close;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithLayer:(id)arg1;

@end

