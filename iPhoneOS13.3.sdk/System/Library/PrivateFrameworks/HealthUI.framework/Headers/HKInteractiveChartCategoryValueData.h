//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSDate;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData>
{
    long long _value;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long value; // @synthesize value=_value;
// - (void).cxx_destruct;

@end

