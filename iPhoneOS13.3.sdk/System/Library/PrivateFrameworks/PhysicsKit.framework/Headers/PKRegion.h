//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKRegion : NSObject <NSCopying, NSSecureCoding>
{
    int _shape;
    BOOL _isExclusive;
    struct vec4 _halfExtent;
    struct shared_ptr<PKCPathHolder> _path;
    int _regionOp;
    int _shape2;
    struct vec4 _halfExtent2;
    struct shared_ptr<PKCPathHolder> _path2;
}

+ (id)infiniteRegion;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)containsPoints:(const float )arg1 locationStride:(long long)arg2 results:(char )arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (BOOL)containsPoint:(CGPoint)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithPath:(CGPath )arg1;
- (id)initWithSize:(CGSize)arg1;
- (id)initWithRadius:(float)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isInfinite;
@property(readonly, nonatomic) CGPath path;
- (BOOL)isEqualToRegion:(id)arg1;

@end

