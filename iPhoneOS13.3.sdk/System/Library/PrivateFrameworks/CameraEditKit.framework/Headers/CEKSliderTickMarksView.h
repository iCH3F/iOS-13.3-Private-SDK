//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraEditKit/CEKTickMarksConfiguration-Protocol.h>

@class UIColor;
@protocol CEKSliderTickMarksDelegate;

@interface CEKSliderTickMarksView : UIView <CEKTickMarksConfiguration>
{
    BOOL _useTickMarkLegibilityShadows;
    double _tickMarkSpacing;
    long long _mainTickMarkInterval;
    long long _mainTickMarkOffset;
    UIColor *_mainTickMarkColor;
    UIColor *_secondaryTickMarkColor;
    id <CEKSliderTickMarksDelegate> _delegate;
    double _tickMarkWidth;
}

@property(nonatomic) double tickMarkWidth; // @synthesize tickMarkWidth=_tickMarkWidth;
@property(nonatomic) __weak id <CEKSliderTickMarksDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *secondaryTickMarkColor; // @synthesize secondaryTickMarkColor=_secondaryTickMarkColor;
@property(retain, nonatomic) UIColor *mainTickMarkColor; // @synthesize mainTickMarkColor=_mainTickMarkColor;
@property(nonatomic) BOOL useTickMarkLegibilityShadows; // @synthesize useTickMarkLegibilityShadows=_useTickMarkLegibilityShadows;
@property(nonatomic) long long mainTickMarkOffset; // @synthesize mainTickMarkOffset=_mainTickMarkOffset;
@property(nonatomic) long long mainTickMarkInterval; // @synthesize mainTickMarkInterval=_mainTickMarkInterval;
@property(nonatomic) double tickMarkSpacing; // @synthesize tickMarkSpacing=_tickMarkSpacing;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (id)_colorForSecondaryTickMarks;
- (id)_colorForMainTickMarks;
- (BOOL)isMainTickMarkIndex:(long long)arg1;
- (long long)floorTickMarkIndexForXOffset:(double)arg1;
@property(readonly, nonatomic) long long tickMarksCount;
- (double)xOffsetForTickMarkIndex:(long long)arg1;
- (double)widthForTickMarkCount:(NSUInteger)arg1;
- (UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(CGRect)arg1;

@end

