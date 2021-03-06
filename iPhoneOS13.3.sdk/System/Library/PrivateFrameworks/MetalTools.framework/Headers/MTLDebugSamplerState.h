//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState
{
    MTLSamplerDescriptor *_descriptor;
}

@property(readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)description;
- (id)formattedDescription:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end

