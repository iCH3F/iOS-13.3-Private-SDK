//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>
{
    CLLocation *_location;
    NSDate *_locationUpdateTimestamp;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2;

@end

