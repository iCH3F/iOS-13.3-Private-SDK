//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationParameters-Protocol.h>

@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICASpringAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _mass;
    double _stiffness;
    double _damping;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property(readonly, copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(readonly, nonatomic) double mass; // @synthesize mass=_mass;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)init;

@end
