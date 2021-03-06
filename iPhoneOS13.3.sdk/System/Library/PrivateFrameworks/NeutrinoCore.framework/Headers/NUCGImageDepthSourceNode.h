//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class NUCGAuxiliaryImageProperties, NUCGImageSourceNode;

@interface NUCGImageDepthSourceNode : NUSourceNode
{
    NUCGAuxiliaryImageProperties *_auxiliaryImageProperties;
    NUCGImageSourceNode *_sourceNode;
    BOOL _needsAspectRatioCorrection;
    CGAffineTransform _aspectTransform;
    CDStruct_d58201db _aspectMatchedPixelSize;
}

@property(retain) NUCGImageSourceNode *sourceNode; // @synthesize sourceNode=_sourceNode;
// - (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id )arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long )arg2 error:(out id )arg3;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (long long)sourceOrientation;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id )arg2;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id )arg2;
- (id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2;
- (id)initWithSettings:(id)arg1;

@end

