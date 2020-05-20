//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSBounceSettings : PTSettings
{
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _multiplier;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
}

@property double maxVelocityAssistance; // @synthesize maxVelocityAssistance=_maxVelocityAssistance;
@property double maxVelocityToAssist; // @synthesize maxVelocityToAssist=_maxVelocityToAssist;
@property double minVelocityToAssist; // @synthesize minVelocityToAssist=_minVelocityToAssist;
@property double multiplier; // @synthesize multiplier=_multiplier;
@property double resistance; // @synthesize resistance=_resistance;
@property double friction; // @synthesize friction=_friction;
@property double elasticity; // @synthesize elasticity=_elasticity;
@property double velocity; // @synthesize velocity=_velocity;
@property double gravity; // @synthesize gravity=_gravity;
- (void)setDefaultValues;

@end

