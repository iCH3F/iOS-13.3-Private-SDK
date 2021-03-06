//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformAffine : NUImageTransform
{
    CGAffineTransform _transformInv;
    CGAffineTransform _transform;
}

@property(readonly) CGAffineTransform transform; // @synthesize transform=_transform;
- (void)nu_updateDigest:(id)arg1;
- (BOOL)isEqualToGeometryTransformAffine:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (CGPoint)transformPoint:(CGPoint)arg1;
- (id)inverseTransform;
- (id)init;
- (id)initWithAffineTransform:(CGAffineTransform)arg1;

@end

