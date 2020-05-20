//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISettingsKeyObserver-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver>
{
    double _initialLinearGain;
    double _parabolicGain;
    double _cubicGain;
    double _quarticGain;
    double _tangentLineSpeed;
    double _tangentSqrtSpeed;
    double _tangentCbrtSpeed;
    double _tangentHyperCbrtSpeed;
}

+ (id)keyboardTrackpadCurve;
@property(nonatomic) double tangentHyperCbrtSpeed; // @synthesize tangentHyperCbrtSpeed=_tangentHyperCbrtSpeed;
@property(nonatomic) double tangentCbrtSpeed; // @synthesize tangentCbrtSpeed=_tangentCbrtSpeed;
@property(nonatomic) double tangentSqrtSpeed; // @synthesize tangentSqrtSpeed=_tangentSqrtSpeed;
@property(nonatomic) double tangentLineSpeed; // @synthesize tangentLineSpeed=_tangentLineSpeed;
@property(nonatomic) double quarticGain; // @synthesize quarticGain=_quarticGain;
@property(nonatomic) double cubicGain; // @synthesize cubicGain=_cubicGain;
@property(nonatomic) double parabolicGain; // @synthesize parabolicGain=_parabolicGain;
@property(nonatomic) double initialLinearGain; // @synthesize initialLinearGain=_initialLinearGain;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)piecewiseCubicAcceleratedSpeed:(double)arg1;
- (double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2;
- (double)quarticFunction:(double)arg1;
- (double)quarticDerivative:(double)arg1;
- (int)RootPowerOfEarliestTangent:(int)arg1;
- (double)gainForPower:(int)arg1;
- (double)tangentSpeedForPower:(int)arg1;
- (void)clipGainsForIOFixedMathWithTangency;
- (double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)init;

@end

