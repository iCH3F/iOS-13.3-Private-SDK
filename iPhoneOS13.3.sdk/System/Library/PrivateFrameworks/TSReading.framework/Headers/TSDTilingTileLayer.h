//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer
{
    NSUInteger mIndex;
    BOOL mNeedsTileDisplay;
    CDStruct_73b5d383 mLocation;
}

@property(nonatomic) CDStruct_73b5d383 location; // @synthesize location=mLocation;
@property(nonatomic) BOOL needsTileDisplay; // @synthesize needsTileDisplay=mNeedsTileDisplay;
@property(nonatomic) NSUInteger index; // @synthesize index=mIndex;
- (id)tileContentsLayer;
- (void)setNeedsDisplayInRectIgnoringBackground:(CGRect)arg1;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)updateFrameWithTileSize:(CGSize)arg1 tilesWide:(NSUInteger)arg2 tilesHigh:(NSUInteger)arg3 geometryProvider:(id)arg4;
- (id)hitTest:(CGPoint)arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)drawInContext:(CGContext )arg1;
- (void)display;

@end

