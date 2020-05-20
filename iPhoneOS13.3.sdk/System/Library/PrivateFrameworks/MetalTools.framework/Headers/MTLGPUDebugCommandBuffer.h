//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsCommandBuffer.h>

#import <MetalTools/MTLGPUDebugBufferEncoder-Protocol.h>

@protocol MTLArgumentEncoder, MTLBuffer;

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder>
{
    id <MTLArgumentEncoder> _stageArgumentEncoder;
    id <MTLBuffer> _vertexComputeReportBuffer;
    NSUInteger _vertexComputeReportOffset;
    id <MTLBuffer> _fragmentReportBuffer;
    NSUInteger _fragmentReportOffset;
    struct vector<MetalBuffer, std::__1::allocator<MetalBuffer>> _usedBuffers;
    struct MetalBuffer _currentPooledBuffer;
    NSUInteger _currentPooledBufferOffset;
    unsigned int _currentEncoderID;
    unsigned int _currentReportID;
    struct vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer>>> _reportBufferList;
    struct vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry>> _reportEntryList;
    struct vector<NSString *, std::__1::allocator<NSString *>> _encoderLabels;
    struct mutex _allocationLock;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)preCompletionHandlers;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 )arg1 capacity:(NSUInteger)arg2;
- (id)computeCommandEncoder;
- (id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id)computeCommandEncoderWithDispatchType:(NSUInteger)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)_encodeReportBuffer:(id)arg1 type:(NSUInteger)arg2;
- (struct ReportBufferEntry)_allocReportEntryStorageForType:(NSUInteger)arg1;
- (id)_newReportBuffer;
- (id)encodeBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3 resultOffset:(NSUInteger )arg4;
- (void)onEncoderEnd:(id)arg1 type:(NSUInteger)arg2;
- (void)onEncoderBegin:(id)arg1 type:(NSUInteger)arg2;
- (void)_checkReportBuffers;
- (pair_eb21f6dd)setBytes:(const void )arg1 length:(NSUInteger)arg2;
- (pair_eb21f6dd)_temporaryBufferWithLength:(NSUInteger)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;

@end

