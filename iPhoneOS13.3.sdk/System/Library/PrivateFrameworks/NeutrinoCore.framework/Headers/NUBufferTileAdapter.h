//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUBufferTile-Protocol.h>

@protocol NUBuffer;

@interface NUBufferTileAdapter : NSObject <NUBufferTile>
{
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
    id <NUBuffer> _buffer;
}

@property(readonly, nonatomic) id <NUBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 buffer:(id)arg3;

@end

