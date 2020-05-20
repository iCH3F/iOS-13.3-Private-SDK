//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying>
{
    int innerShadowBlendMode;
    int outerShadowBlendMode;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    double embossSize;
    UIColor *innerShadowColor;
    double innerShadowBlur;
    UIColor *outerShadowColor;
    double outerShadowBlur;
    UIColor *topGradientColor;
    UIColor *bottomGradientColor;
    double innerOpacity;
    CGPoint innerShadowOffset;
    CGPoint outerShadowOffset;
}

+ (id)old2xLetterpressStyle;
+ (id)defaultLetterpressStyle;
@property(nonatomic) double innerOpacity; // @synthesize innerOpacity;
@property(retain, nonatomic) UIColor *bottomGradientColor; // @synthesize bottomGradientColor;
@property(retain, nonatomic) UIColor *topGradientColor; // @synthesize topGradientColor;
@property(nonatomic) int outerShadowBlendMode; // @synthesize outerShadowBlendMode;
@property(nonatomic) double outerShadowBlur; // @synthesize outerShadowBlur;
@property(nonatomic) CGPoint outerShadowOffset; // @synthesize outerShadowOffset;
@property(retain, nonatomic) UIColor *outerShadowColor; // @synthesize outerShadowColor;
@property(nonatomic) int innerShadowBlendMode; // @synthesize innerShadowBlendMode;
@property(nonatomic) double innerShadowBlur; // @synthesize innerShadowBlur;
@property(nonatomic) CGPoint innerShadowOffset; // @synthesize innerShadowOffset;
@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor;
@property(nonatomic) double embossSize; // @synthesize embossSize;
@property(retain, nonatomic) UIColor *embossShadowColor; // @synthesize embossShadowColor;
@property(retain, nonatomic) UIColor *embossHighlightColor; // @synthesize embossHighlightColor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIEdgeInsets edgeInsets;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

