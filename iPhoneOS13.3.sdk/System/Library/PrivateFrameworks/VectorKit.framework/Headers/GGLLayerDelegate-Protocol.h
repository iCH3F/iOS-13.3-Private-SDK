//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol GGLLayerDelegate
- (void)didUpdateFrameTexture;
- (void)willUpdateFrameTexture;
- (void)didPresent;
- (void)willPresent;
- (void)drawToTexture:(struct Texture )arg1 withRenderQueue:(struct RenderQueue )arg2;
- (struct RenderQueue )renderQueueForTimestamp:(double)arg1;
- (void)prepareTexture:(struct Texture )arg1;
- (BOOL)isDelayedRenderQueueConsumptionSupported;
@end

