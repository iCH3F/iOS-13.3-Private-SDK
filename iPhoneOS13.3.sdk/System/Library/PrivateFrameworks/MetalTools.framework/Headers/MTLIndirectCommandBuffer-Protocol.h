//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLResource-Protocol.h>

@protocol MTLIndirectComputeCommand, MTLIndirectRenderCommand;

@protocol MTLIndirectCommandBuffer <MTLResource>
@property(readonly) NSUInteger size;
- (id <MTLIndirectComputeCommand>)indirectComputeCommandAtIndex:(NSUInteger)arg1;
- (id <MTLIndirectRenderCommand>)indirectRenderCommandAtIndex:(NSUInteger)arg1;
- (void)resetWithRange:(_NSRange)arg1;
@end

