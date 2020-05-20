//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DPipelineLinkable-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebuffer : NSObject <TSCH3DPipelineLinkable>
{
    struct FramebufferAttributes mFramebufferAttributes;
    NSUInteger _uniqueIdentifier;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes )arg1;
@property(readonly, nonatomic) NSUInteger uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id).cxx_construct;
- (id)pixelBufferFromViewport:(const box_0260e9b3 )arg1 components:(NSUInteger)arg2 flipped:(BOOL)arg3 forProcessor:(id)arg4 session:(id)arg5;
- (id)output;
- (id)resolvingFramebuffer;
- (const struct FramebufferAttributes )framebufferAttributes;
- (void)dealloc;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes )arg1;

@end
