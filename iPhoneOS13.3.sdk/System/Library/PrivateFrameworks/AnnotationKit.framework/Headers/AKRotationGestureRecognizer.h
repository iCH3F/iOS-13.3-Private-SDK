//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer
{
    NSUInteger tries;
    AKController *_annotationController;
}

@property(nonatomic) __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
// - (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1;

@end

