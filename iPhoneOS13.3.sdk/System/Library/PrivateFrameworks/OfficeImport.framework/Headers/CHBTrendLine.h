//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBTrendLine : NSObject
{
}

+ (void)readFrom:(struct XlChartTrendLine )arg1 toSeries:(id)arg2 state:(id)arg3;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat )arg1 forStyleIndex:(NSUInteger)arg2 state:(id)arg3;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;

@end

