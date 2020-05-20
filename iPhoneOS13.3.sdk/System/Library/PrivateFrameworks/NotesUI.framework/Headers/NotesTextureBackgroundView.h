//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NotesTextureView;

@interface NotesTextureBackgroundView : UIView
{
    double _textureHeight;
    double _scrollOffset;
    BOOL _scrollsTexture;
    NotesTextureView *_textureView;
}

@property BOOL scrollsTexture; // @synthesize scrollsTexture=_scrollsTexture;
@property(readonly, nonatomic) NotesTextureView *textureView; // @synthesize textureView=_textureView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setContentOffset:(CGPoint)arg1;
- (void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;

@end

