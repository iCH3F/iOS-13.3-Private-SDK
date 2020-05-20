//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemTransitioning-Protocol.h>

@class UIViewPropertyAnimator;

@interface SVVideoAccessoryItemCrossfadeTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning>
{
    UIViewPropertyAnimator *_fadeInAnimator;
    UIViewPropertyAnimator *_fadeOutAnimator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator; // @synthesize fadeOutAnimator=_fadeOutAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *fadeInAnimator; // @synthesize fadeInAnimator=_fadeInAnimator;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL animated;
- (void)cancelTransition;
- (void)animateWithContext:(id)arg1;

@end

