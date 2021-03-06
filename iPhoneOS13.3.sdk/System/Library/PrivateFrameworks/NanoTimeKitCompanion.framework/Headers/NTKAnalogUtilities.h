//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKAnalogUtilities : NSObject
{
}

+ (void)colorizeLabels:(id)arg1 color:(id)arg2;
+ (void)updateNodes:(id)arg1 forDevice:(id)arg2 offset:(NSUInteger)arg3 center:(CGPoint)arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(BOOL)arg8 round:(BOOL)arg9;
+ (void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3;
+ (void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3;
+ (id)labelsForDevice:(id)arg1 faceStyle:(long long)arg2 count:(unsigned int)arg3 start:(unsigned int)arg4 multiple:(unsigned int)arg5 repeat:(unsigned int)arg6 fontSize:(double)arg7 radius:(double)arg8 paddedWithZeroes:(BOOL)arg9;
+ (id)labelsForDevice:(id)arg1 withCount:(unsigned int)arg2 start:(unsigned int)arg3 multiple:(unsigned int)arg4 repeat:(unsigned int)arg5 font:(long long)arg6 modifier:(id)arg7 center:(CGPoint)arg8 radius:(double)arg9 paddedWithZeros:(BOOL)arg10 filter:(BOOL)arg11;
+ (CGSize)dialSizeForDevice:(id)arg1;
+ (CGSize)sceneSizeForDevice:(id)arg1;
+ (void)preloadTexturesForDevice:(id)arg1;
+ (BOOL)shouldPreloadTextures;
+ (id)circularMaskShader;

@end

