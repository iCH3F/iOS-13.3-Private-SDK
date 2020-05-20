//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying>
{
    CGPoint _point1;
    CGPoint _point2;
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_mediaTimingFunction;
@property(readonly, nonatomic) CGPoint controlPoint2;
@property(readonly, nonatomic) CGPoint controlPoint1;
- (id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2;
- (id)init;

@end

