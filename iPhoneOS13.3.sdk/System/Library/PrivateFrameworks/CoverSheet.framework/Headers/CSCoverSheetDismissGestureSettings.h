//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetDismissGestureSettings : PTSettings
{
    BOOL _usesGrapeFlags;
    BOOL _extendSwipeUpRegion;
    double _edgeRegionSize;
    double _recognizeAlongEdge;
    double _extendedEdgeRegionSize;
    double _extendedRegionInsetX;
}

+ (id)settingsControllerModule;
@property(nonatomic) double extendedRegionInsetX; // @synthesize extendedRegionInsetX=_extendedRegionInsetX;
@property(nonatomic) double extendedEdgeRegionSize; // @synthesize extendedEdgeRegionSize=_extendedEdgeRegionSize;
@property(nonatomic) BOOL extendSwipeUpRegion; // @synthesize extendSwipeUpRegion=_extendSwipeUpRegion;
@property(nonatomic) double recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) BOOL usesGrapeFlags; // @synthesize usesGrapeFlags=_usesGrapeFlags;
- (void)setDefaultValues;

@end

