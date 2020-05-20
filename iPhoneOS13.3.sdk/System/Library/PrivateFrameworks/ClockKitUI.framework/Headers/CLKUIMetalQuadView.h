//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuadView.h>

@class CAMetalLayer, MTLRenderPassDescriptor, NSArray;
@protocol MTLCommandQueue, MTLComputePipelineState;

@interface CLKUIMetalQuadView : CLKUIQuadView
{
    id <MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _drawableSizeNeedsUpdate;
    struct CLKUIQuadSize _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id <MTLComputePipelineState> _aplPipelineState;
    NSUInteger _colorPixelFormat;
}

@property(readonly, nonatomic) NSUInteger colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
// - (void).cxx_destruct;
- (void)_updateDrawableSizeIfNecessary;
- (id)_newRenderPassDescriptor;
- (id)metalLayer;
- (void)discardContents;
- (float)computeAPLAndSnapshot:(id )arg1;
- (float)computeAPL;
- (BOOL)_displayAndCheckForDrawable:(BOOL)arg1 WithCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)_textureToImage:(id)arg1 scale:(double)arg2;
- (id)_snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(id /* CDUnknownBlockType */)arg4;
- (id)snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3;
- (id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3;
- (void)setSingleBufferMode:(BOOL)arg1;
- (void)_handleQuadArrayChange:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 options:(NSUInteger)arg2 colorSpace:(long long)arg3;

@end

