//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSArray;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    NSArray *_yValues;
    double _xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
@property(readonly, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
// - (void).cxx_destruct;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3;

@end

