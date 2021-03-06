//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXFillView.h>

@class SXClippingView, SXRepeatableImageView;

@interface SXRepeatableImageFillView : SXFillView
{
    SXRepeatableImageView *_imageView;
    SXClippingView *_clippingView;
    CGSize _patternSize;
}

@property(readonly, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) SXRepeatableImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) CGSize patternSize; // @synthesize patternSize=_patternSize;
// - (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)setContentFrame:(CGRect)arg1;
- (CGRect)contentFrame;
- (CGRect)fillFrameWithBoundingSize:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)load;
- (id)initWithRepeatableImageFill:(id)arg1 imageView:(id)arg2;

@end

