//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView
{
    long long _context;
    UIButton *_noNumberButton;
}

@property(retain, nonatomic) UIButton *noNumberButton; // @synthesize noNumberButton=_noNumberButton;
@property(nonatomic) long long context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)setButtonsEnabled:(BOOL)arg1;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 context:(long long)arg2;

@end

