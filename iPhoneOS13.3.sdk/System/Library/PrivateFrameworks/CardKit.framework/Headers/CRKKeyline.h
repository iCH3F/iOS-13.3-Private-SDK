//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CRKKeyline : UIView
{
    UIView *_keylineView;
    long long _type;
    long long _direction;
    NSUInteger _visualEffectStyle;
}

@property(readonly) NSUInteger visualEffectStyle; // @synthesize visualEffectStyle=_visualEffectStyle;
@property(readonly) long long direction; // @synthesize direction=_direction;
@property(readonly) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (double)defaultKeylineInsetForCurrentDevice;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)_roundedKeylineThickness;
- (id)_keylineColorForVisualEffectStyle:(NSUInteger)arg1;
- (id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(NSUInteger)arg3;

@end

