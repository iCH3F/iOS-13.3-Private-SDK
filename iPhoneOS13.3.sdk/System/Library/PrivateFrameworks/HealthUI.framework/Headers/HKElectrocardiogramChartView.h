//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKElectrocardiogram, HKElectrocardiogramGridView, HKElectrocardiogramWaveformView, NSArray, UIColor;

@interface HKElectrocardiogramChartView : UIView
{
    BOOL _edgeMaskEnabled;
    BOOL _allowsScrolling;
    HKElectrocardiogramGridView *_gridView;
    HKElectrocardiogramWaveformView *_waveformView;
    UIView *_waveformContainerView;
    HKElectrocardiogram *_sample;
    CGSize _lastSize;
}

+ (id)printedGridOptions;
+ (id)defaultGridOptions;
@property(nonatomic) CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(nonatomic) BOOL allowsScrolling; // @synthesize allowsScrolling=_allowsScrolling;
@property(retain, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
@property(retain, nonatomic) UIView *waveformContainerView; // @synthesize waveformContainerView=_waveformContainerView;
@property(retain, nonatomic) HKElectrocardiogramWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(retain, nonatomic) HKElectrocardiogramGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic, getter=isEdgeMaskEnabled) BOOL edgeMaskEnabled; // @synthesize edgeMaskEnabled=_edgeMaskEnabled;
// - (void).cxx_destruct;
@property(retain, nonatomic) UIColor *lineColor;
@property(nonatomic) double lineWidth;
@property(readonly, nonatomic) double pointsPerMillivolt;
@property(readonly, nonatomic) double pointsPerSecond;
- (void)_updateChartForSizeChange;
- (void)displayElectrocardiogram:(id)arg1 allowsScrolling:(BOOL)arg2;
- (void)setWaveformPaths:(id)arg1;
- (void)setWaveformPath:(id)arg1;
@property(readonly, nonatomic) double controlSignalDuration;
- (void)layoutSubviews;
@property(nonatomic, getter=isDisplayingControlSignal) BOOL displayControlSignal;
@property(readonly, copy, nonatomic) NSArray *gridOptions;
@property(readonly, nonatomic) CGSize gridSize;
- (void)_setUpUI;
- (CGSize)intrinsicContentSize;
- (id)initWithGridSize:(CGSize)arg1 gridOptions:(id)arg2;
- (id)initWithGridSize:(CGSize)arg1;

@end

