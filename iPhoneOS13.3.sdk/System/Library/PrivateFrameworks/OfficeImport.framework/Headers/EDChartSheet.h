//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDSheet.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet
{
    CHDChart *mMainChart;
    BOOL mIsBoundsSet;
    CGRect mBounds;
}

// - (void).cxx_destruct;
- (void)addDrawable:(id)arg1;
- (void)setBounds:(CGRect)arg1;
- (CGRect)bounds;
- (BOOL)areBoundsSet;
- (void)setMainChart:(id)arg1;
- (id)mainChart;
- (void)teardown;

@end

