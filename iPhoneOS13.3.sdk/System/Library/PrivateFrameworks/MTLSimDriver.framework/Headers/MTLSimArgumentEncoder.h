//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLIndirectArgumentEncoder.h>

#import <MTLSimDriver/MTLArgumentEncoder-Protocol.h>

@class MTLSimBuffer, MTLSimDevice, MTLSimIndirectArgumentBufferLayout;

__attribute__((visibility("hidden")))
@interface MTLSimArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoder>
{
    unsigned int _reference;
    MTLSimDevice *_device;
    MTLSimIndirectArgumentBufferLayout *_layout;
    NSUInteger _encodedLength;
    NSUInteger _alignment;
    MTLSimBuffer *_argumentBuffer;
    NSUInteger _offset;
}

- (void)setIndirectCommandBuffers:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setComputePipelineStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setComputePipelineState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setRenderPipelineStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void )constantDataAtIndex:(NSUInteger)arg1;
- (void)setSamplerStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setTextures:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(NSUInteger)arg2;
@property(readonly) NSUInteger alignment;
@property(readonly) NSUInteger encodedLength;
@property(readonly) unsigned int argumentEncoderRef; // @dynamic argumentEncoderRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2 layout:(id)arg3 data:(CDStruct_4b0cc5c4 )arg4;

@end

