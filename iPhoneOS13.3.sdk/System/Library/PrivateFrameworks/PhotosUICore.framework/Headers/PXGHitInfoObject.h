//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PXGHitInfoObject : NSObject
{
    struct {
        unsigned int spriteIndex;
        double paddedDistance;
        double unpaddedDistance;
        struct {
            CDStruct_719d24f9 center;
            MISSING_TYPE *size;
        } geometry;
    } _hitInfo;
}

- (long long)compare:(id)arg1;
@property(readonly, nonatomic) CDStruct_87acf924 hitInfo;
- (id)initWithHitInfo:(CDStruct_87acf924)arg1;
- (id)init;

@end

