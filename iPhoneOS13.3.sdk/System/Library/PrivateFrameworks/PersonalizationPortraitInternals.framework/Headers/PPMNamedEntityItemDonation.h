//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMNamedEntityItemDonation : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
- (void)trackEventWithScalar:(NSUInteger)arg1 source:(struct PPMNamedEntityDonationSource_)arg2 is_new:(struct PPMBoolOption_)arg3;
- (id)init;

@end

