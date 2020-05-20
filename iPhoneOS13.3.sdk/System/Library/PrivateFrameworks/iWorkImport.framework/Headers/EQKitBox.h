//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface EQKitBox : NSObject <NSCopying>
{
    CGColor mFontSmoothingBackgroundColor;
}

- (id)description;
- (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
- (BOOL)p_getTransform:(CGAffineTransform )arg1 fromDescendant:(id)arg2;
- (CGAffineTransform)transformFromDescendant:(id)arg1;
- (void)renderIntoContext:(CGContext )arg1 offset:(CGPoint)arg2;
@property(nonatomic) CGColor fontSmoothingBackgroundColor; // @synthesize fontSmoothingBackgroundColor=mFontSmoothingBackgroundColor;
- (CGRect)erasableBounds;
@property(readonly, nonatomic) double layoutVSize;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
@property(readonly, nonatomic) double vsize;
@property(readonly, nonatomic) double opticalAlignWidth;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) CGColor color;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

