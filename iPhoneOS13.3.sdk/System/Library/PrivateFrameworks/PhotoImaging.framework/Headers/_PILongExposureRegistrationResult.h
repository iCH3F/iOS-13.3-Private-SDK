//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PILongExposureRegistrationResult-Protocol.h>

@class VNImageHomographicAlignmentObservation;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult>
{
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _extent;
}

@property(nonatomic) CDStruct_996ac03c extent; // @synthesize extent=_extent;
@property(copy, nonatomic) VNImageHomographicAlignmentObservation *observation; // @synthesize observation=_observation;
// - (void).cxx_destruct;

@end

