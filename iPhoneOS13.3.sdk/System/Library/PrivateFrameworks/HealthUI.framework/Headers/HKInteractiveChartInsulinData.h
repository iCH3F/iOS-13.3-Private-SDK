//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData>
{
    double _basalValue;
    double _totalValue;
}

@property(nonatomic) double totalValue; // @synthesize totalValue=_totalValue;
@property(nonatomic) double basalValue; // @synthesize basalValue=_basalValue;
@property(readonly, nonatomic) double bolusValue;

@end

