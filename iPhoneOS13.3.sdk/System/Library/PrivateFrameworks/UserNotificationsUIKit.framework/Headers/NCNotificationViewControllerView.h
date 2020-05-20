//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/PLContentSizeManaging-Protocol.h>

@class PLPlatterView;

@interface NCNotificationViewControllerView : UIView <PLContentSizeManaging>
{
    UIView *_stackDimmingView;
    PLPlatterView *_contentView;
}

@property(nonatomic) __weak PLPlatterView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)_updateStackDimmingVisualStyling;
- (CGSize)contentSizeForSize:(CGSize)arg1;
- (CGSize)sizeThatFitsContentWithSize:(CGSize)arg1;
- (void)invalidateStackedPlattersRecipe;
- (void)configureStackDimmingForTransform:(CGAffineTransform)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

