//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import <HomeUI/HUQuickControlRingSliderInteractionCoordinatorDelegate-Protocol.h>

@class HUQuickControlRingSliderView;

@interface HUQuickControlRingSliderIncrementalStateViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate>
{
    HUQuickControlRingSliderView *_ringSliderView;
}

+ (Class)controlItemClass;
@property(retain, nonatomic) HUQuickControlRingSliderView *ringSliderView; // @synthesize ringSliderView=_ringSliderView;
// - (void).cxx_destruct;
- (id)createInteractionCoordinator;

@end

