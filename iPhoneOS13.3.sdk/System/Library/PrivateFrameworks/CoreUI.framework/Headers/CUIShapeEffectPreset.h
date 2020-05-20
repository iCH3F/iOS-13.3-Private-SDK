//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIShapeEffectPreset : NSObject
{
    CDStruct_c57d91d4 _parameterList[125];
    unsigned int _effectIndex[26];
    double _scaleFactor;
    float _minimumShadowSpread;
}

+ (int)cgBlendModeFromCUIEffectBlendMode:(unsigned int)arg1;
+ (unsigned int)cuiEffectBlendModeFromCGBlendMode:(int)arg1;
+ (id)requiredEffectParametersForEffectType:(unsigned int)arg1;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property float minimumShadowSpread; // @synthesize minimumShadowSpread=_minimumShadowSpread;
- (id)debugDescription;
- (void)addEffectsFromPreset:(id)arg1;
- (void)addHueSaturationWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 angle:(int)arg4 width:(int)arg5 tintable:(BOOL)arg6;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 shadowColorRed:(unsigned int)arg5 green:(unsigned int)arg6 blue:(unsigned int)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 bevelStyle:(unsigned int)arg11;
- (void)addExtraShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (void)addDropShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8;
- (void)addOuterGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6;
- (void)addInnerShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned int)arg8;
- (void)addInnerGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned int)arg6;
- (void)addGradientFillWithTopColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 bottomColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(double)arg7 blendMode:(unsigned int)arg8;
- (void)addColorFillWithRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(double)arg4 blendMode:(unsigned int)arg5 tintable:(BOOL)arg6;
- (void)addOutputOpacityWithOpacity:(double)arg1;
- (void)addShapeOpacityWithOpacity:(double)arg1;
- (void)appendColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withEffectType:(unsigned int)arg5;
- (void)appendEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendIntValue:(NSUInteger)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendAngleValue:(long long)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)addColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withNewEffectType:(unsigned int)arg5;
- (void)addEnumValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addIntValue:(NSUInteger)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addFloatValue:(double)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)appendValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)addValue:(CDUnion_577fdfa6)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3 atEffectIndex:(NSUInteger)arg4;
- (void)getEffectTuples:(struct )arg1 count:(NSUInteger )arg2 atEffectIndex:(NSUInteger)arg3;
- (void)_insertEffectTuple:(CDStruct_c57d91d4)arg1 atEffectIndex:(NSUInteger)arg2;
- (CDUnion_577fdfa6)valueForParameter:(unsigned int)arg1 inEffectAtIndex:(NSUInteger)arg2;
- (unsigned int)effectTypeAtIndex:(NSUInteger)arg1;
- (NSUInteger)effectCount;
- (double)effectScale;
- (id)initWithEffectScale:(double)arg1;
- (id)init;
- (id)layerEffectsRepresentation;
- (id)CUIEffectDataRepresentation;
- (NSUInteger)_parameterCount;
- (id)initWithConstantPreset:(const CDStruct_35a2250d )arg1;

@end

