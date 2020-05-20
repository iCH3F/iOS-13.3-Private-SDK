//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeckSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier
{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

- (void)setScrollDelegate:(id)arg1;
- (id)scrollDelegate;
// - (void).cxx_destruct;
- (double)_cardWidth;
- (double)leadingOffsetForIndex:(NSUInteger)arg1 displayItemsCount:(NSUInteger)arg2 scrollProgress:(double)arg3;
- (double)scrollProgressForIndex:(NSUInteger)arg1 displayItemsCount:(NSUInteger)arg2 frameOrigin:(double)arg3;
- (double)scrollProgressForIndex:(NSUInteger)arg1;
- (double)depthForIndex:(NSUInteger)arg1 displayItemsCount:(NSUInteger)arg2 scrollProgress:(double)arg3;
- (double)opacityForIndex:(NSUInteger)arg1 scrollProgress:(double)arg2;
- (double)titleOpacityForIndex:(NSUInteger)arg1 scrollProgress:(double)arg2;
- (void)resetAdjustedScrollingState;
- (CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double )arg5 verticalVelocity:(inout double )arg6;
- (CGPoint)pagingOrigin;
- (CGSize)interpageSpacingForPaging;
- (BOOL)scrollViewPagingEnabled;
- (double)titleAndIconOpacityForIndex:(NSUInteger)arg1;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;

@end
