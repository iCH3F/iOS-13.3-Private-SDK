//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFillData-Protocol.h>

@class NSNumber, TSCH3DFillSetIdentifier, TSCH3DTexture;

@protocol TSCH3DSageFillData <TSCH3DFillData>
- (TSCH3DFillSetIdentifier *)fillSetIdentifier;
- (TSCH3DTexture *)textureForIndex:(NSUInteger)arg1;
- (NSNumber *)layerLightenPercentageForIndex:(NSUInteger)arg1;
- (int)layerTilingModeForIndex:(NSUInteger)arg1;
- (long long)layerBlendModeForIndex:(NSUInteger)arg1;
- (BOOL)layerIsEnvironmentMapForIndex:(NSUInteger)arg1;
- (float)layerRotationForIndex:(NSUInteger)arg1;
- (float)layerScaleForIndex:(NSUInteger)arg1;
- (BOOL)isLayerEnabledForIndex:(NSUInteger)arg1;
- (NSUInteger)layerCount;
@end

