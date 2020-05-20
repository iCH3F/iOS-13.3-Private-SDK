//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    BOOL _groupToPrevious;
    double _xValue;
    long long _yValue;
    long long _markStyle;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long markStyle; // @synthesize markStyle=_markStyle;
@property(readonly, nonatomic) BOOL groupToPrevious; // @synthesize groupToPrevious=_groupToPrevious;
@property(readonly, nonatomic) long long yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(BOOL)arg3 markStyle:(long long)arg4 userInfo:(id)arg5;

@end

