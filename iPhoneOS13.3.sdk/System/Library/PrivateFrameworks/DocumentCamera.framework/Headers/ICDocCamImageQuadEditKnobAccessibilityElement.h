//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement
{
    CALayer *_knobLayer;
    ICDocCamImageQuadEditOverlay *_overlayView;
}

@property(nonatomic) __weak ICDocCamImageQuadEditOverlay *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
// - (void).cxx_destruct;
- (CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)accessibilityViewIsModal;
- (BOOL)isAccessibilityElement;
- (id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2;

@end
