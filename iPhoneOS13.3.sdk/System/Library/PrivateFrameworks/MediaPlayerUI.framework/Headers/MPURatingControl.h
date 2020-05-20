//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol MPURatingControlDelegate;

@interface MPURatingControl : UIControl
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableArray *_imageViews;
    id <MPURatingControlDelegate> _delegate;
    double _rating;
    UIEdgeInsets _hitTestEdgeInsets;
}

+ (id)ratingDotImage;
+ (id)ratingStarImage;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) __weak id <MPURatingControlDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateImageViewsForRatingAnimated:(BOOL)arg1;
- (void)_updateImageView:(id)arg1 proposedImage:(id)arg2 filled:(BOOL)arg3;
- (void)viewDidMoveToSuperview;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setRating:(double)arg1 animated:(BOOL)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (double)ratingValueForLocationInView:(CGPoint)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

