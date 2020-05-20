//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataAggregationState.h>

@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState
{
    HDQuantityDatum *_lastDatum;
    long long _length;
}

@property(nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) HDQuantityDatum *lastDatum; // @synthesize lastDatum=_lastDatum;
// - (void).cxx_destruct;
- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 lastDatum:(id)arg3 length:(long long)arg4;

@end

