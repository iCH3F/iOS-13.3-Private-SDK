//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, NSString, UIActivityIndicatorView;

@interface PXCapsuleButton : UIButton
{
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
    NSString *_maxContentSizeCategory;
}

@property(nonatomic) NSString *maxContentSizeCategory; // @synthesize maxContentSizeCategory=_maxContentSizeCategory;
// - (void).cxx_destruct;
- (id)_backgroundImageWithColor:(id)arg1;
- (id)_titleFont;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)colorForState:(NSUInteger)arg1;
- (void)setColor:(id)arg1 forState:(NSUInteger)arg2;
- (id)initWithColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

