//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView
{
    HACCBatteryView *_topBatteryView;
    HACCBatteryView *_bottomBatteryView;
}

@property(retain, nonatomic) HACCBatteryView *bottomBatteryView; // @synthesize bottomBatteryView=_bottomBatteryView;
@property(retain, nonatomic) HACCBatteryView *topBatteryView; // @synthesize topBatteryView=_topBatteryView;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateValueForLeft:(double)arg1 right:(double)arg2 andAvailableEars:(int)arg3;
- (void)updateValueForDevice:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

