//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TSDGLFrameBuffer : NSObject
{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    unsigned int _textures[16];
    NSUInteger _textureCount[16];
    NSUInteger _currentTextureIndex[16];
    NSUInteger _desiredTextureIndex[16];
    unsigned int _framebuffer;
    BOOL _isUsingNonDefaultAttachments;
    BOOL _isBound;
    BOOL _shouldDeleteTexturesOnTeardown;
    NSString *_name;
    CGSize _size;
}

+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (int)currentGLFramebuffer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldDeleteTexturesOnTeardown; // @synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown;
@property(readonly, nonatomic) BOOL isBound; // @synthesize isBound=_isBound;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)teardown;
- (unsigned int)GLTextureNamed:(id)arg1;
- (unsigned int)GLTextureAtIndex:(NSUInteger)arg1;
- (unsigned int)GLTextureAtIndex:(NSUInteger)arg1 attachment:(unsigned int)arg2;
- (void)setCurrentTextureToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureIndex:(NSUInteger)arg1;
- (void)setCurrentTextureIndex:(NSUInteger)arg1 atAttachment:(unsigned int)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebuffer;
- (void)setupFramebufferIfNecessary;
- (id)description;
- (void)dealloc;
- (id)initWithSize:(CGSize)arg1;
- (id)initWithSize:(CGSize)arg1 textureCount:(NSUInteger)arg2;
- (id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2;

@end

