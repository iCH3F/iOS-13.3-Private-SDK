//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STNoUsageDataView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STOverallUsageSummaryCell : STTableCell
{
    STUsageSummaryTitleView *_titleView;
    STUsageGraphViewController *_weekGraphViewController;
    STNoUsageDataView *_noUsageDataView;
}

@property(readonly) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly) STUsageGraphViewController *weekGraphViewController; // @synthesize weekGraphViewController=_weekGraphViewController;
@property(readonly) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
// - (void).cxx_destruct;
- (void)_setNoUsageDataViewVisibility;
- (void)setValue:(id)arg1;
- (id)value;
- (void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

