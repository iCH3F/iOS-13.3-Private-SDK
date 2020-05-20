//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FIMutableTimeSliceGroup : NSObject
{
    NSArray *_slices;
}

+ (id)timeSliceGroupForQuantityTypes:(id)arg1 startDate:(id)arg2;
@property(readonly, nonatomic) NSArray *slices; // @synthesize slices=_slices;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allSlicesFinalized; // @dynamic allSlicesFinalized;
- (void)updateSlicesWithSample:(id)arg1;
- (void)updateSlicesWithEndDate:(id)arg1;
- (void)commitAllSlicesToDate:(id)arg1;
- (id)initWithTimeSlices:(id)arg1;

@end

