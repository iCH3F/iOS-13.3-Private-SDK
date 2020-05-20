//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@interface MTLGPUDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder
{
    struct MTLGPUDebugBufferArgumentData _vertexBuffers;
    struct MTLGPUDebugBufferArgumentData _fragmentBuffers;
    struct MTLGPUDebugBufferArgumentData _tileBuffers;
    NSUInteger _pipelineStateID;
    unsigned int _encoderID;
    unsigned int _currentDrawID;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)endEncoding;
- (void)setRenderPipelineState:(id)arg1;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(_NSRange)arg2;
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(NSUInteger)arg7 instanceCount:(NSUInteger)arg8 baseInstance:(NSUInteger)arg9;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(NSUInteger)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(NSUInteger)arg7;
- (void)drawPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseInstance:(NSUInteger)arg7;
- (void)drawPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseVertex:(long long)arg7 baseInstance:(NSUInteger)arg8;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4 baseInstance:(NSUInteger)arg5;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4;
- (void)drawPrimitives:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3;
- (void)setTileBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setTileBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setTileBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setTileBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setFragmentBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setVertexBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)onDraw;
- (id)initWithRenderCommandEncoder:(id)arg1 parallelEncoder:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;
- (id)initWithRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;

@end

