//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSArray, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKDailySleepSeriesDataSourceChartPoint : NSObject <HKChartPoint>
{
    NSArray *_timeIntervalOffsets;
    NSDate *_xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property(retain, nonatomic) NSArray *timeIntervalOffsets; // @synthesize timeIntervalOffsets=_timeIntervalOffsets;
// - (void).cxx_destruct;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;

@end

