//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WFAudioInputViewController : UIViewController
{
    UILabel *_statusLabel;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
// - (void).cxx_destruct;
- (BOOL)accessibilityPerformMagicTap;
- (void)handleTap;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
