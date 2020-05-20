//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>
{
    double _colorR;
    double _colorG;
    double _colorB;
    double _colorA;
}

+ (BOOL)supportsSecureCoding;
+ (id)lightGrayColor;
+ (id)blackColor;
+ (id)whiteColor;
@property(nonatomic) double colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double colorB; // @synthesize colorB=_colorB;
@property(nonatomic) double colorG; // @synthesize colorG=_colorG;
@property(nonatomic) double colorR; // @synthesize colorR=_colorR;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
// - (id)copyWithZone:(_NSZone )arg1;

@end

