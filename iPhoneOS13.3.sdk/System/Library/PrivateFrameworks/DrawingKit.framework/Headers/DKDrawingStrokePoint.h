//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface DKDrawingStrokePoint : NSObject <NSCopying>
{
    double _force;
    double _velocity;
    CGPoint _location;
}

@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) CGPoint location; // @synthesize location=_location;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

