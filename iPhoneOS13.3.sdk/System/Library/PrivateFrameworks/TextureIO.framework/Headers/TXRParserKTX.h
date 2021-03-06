//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRParser-Protocol.h>

@class NSDictionary, TXRDeferredTextureInfo, TXRTextureInfo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TXRParserKTX : NSObject <TXRParser>
{
    TXRTextureInfo *_textureInfo;
    unsigned int _bytesOfKeyValueData;
    BOOL _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    BOOL _shouldFlipVertically;
}

+ (BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id )arg3;
+ (BOOL)handlesData:(id)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
// - (void).cxx_destruct;
- (id)parsedImageAtLevel:(NSUInteger)arg1 element:(NSUInteger)arg2 face:(NSUInteger)arg3;
- (NSUInteger)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3;
- (BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id )arg4;

@end

