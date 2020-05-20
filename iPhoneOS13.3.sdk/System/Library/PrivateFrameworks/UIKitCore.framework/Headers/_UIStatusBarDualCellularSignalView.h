//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSLayoutConstraint, _UIStatusBarCellularSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable>
{
    _UIStatusBarCellularSignalView *_topSignalView;
    _UIStatusBarCellularSignalView *_bottomSignalView;
    long long _iconSize;
    NSLayoutConstraint *_verticalInterspaceConstraint;
    UIEdgeInsets _alignmentRectInsets;
}

+ (double)_interspaceForIconSize:(long long)arg1;
@property(nonatomic) UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint; // @synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(readonly) _UIStatusBarCellularSignalView *bottomSignalView; // @synthesize bottomSignalView=_bottomSignalView;
@property(readonly) _UIStatusBarCellularSignalView *topSignalView; // @synthesize topSignalView=_topSignalView;
// - (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (id)viewForLastBaselineLayout;
- (void)_iconSizeDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonInit;

@end

