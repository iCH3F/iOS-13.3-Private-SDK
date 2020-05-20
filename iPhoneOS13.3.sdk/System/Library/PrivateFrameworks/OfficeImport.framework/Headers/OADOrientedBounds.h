//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject
{
    CGRect mBounds;
    float mRotation;
    unsigned int mFlipX:1;
    unsigned int mFlipY:1;
    int mModeX;
    int mModeY;
}

+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(CGRect)arg1;
+ (id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToOrientedBounds:(id)arg1;
- (CGRect)boundingBox;
- (CGSize)boundingBoxSize;
- (void)setYMode:(int)arg1;
- (int)yMode;
- (void)setXMode:(int)arg1;
- (int)xMode;
- (void)setFlipY:(BOOL)arg1;
- (BOOL)flipY;
- (void)setFlipX:(BOOL)arg1;
- (BOOL)flipX;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (void)setBounds:(CGRect)arg1;
- (CGRect)bounds;
- (void)setOrientedBounds:(id)arg1;
- (id)init;
- (id)initWithBounds:(CGRect)arg1;
- (id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;

@end

