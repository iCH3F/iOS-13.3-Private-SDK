//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>


__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>
{
    CGSize _size;
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    int _payload;
}

@property(nonatomic) int payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) CGSize size; // @synthesize size=_size;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

