//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKGlyphView;

@protocol PKGlyphViewDelegate <NSObject>

@optional
- (void)glyphViewUserIntentEdgeDidChange:(PKGlyphView *)arg1;
- (void)glyphView:(PKGlyphView *)arg1 revealingCheckmark:(BOOL)arg2;
- (void)glyphView:(PKGlyphView *)arg1 transitioningToState:(long long)arg2;
@end
