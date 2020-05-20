//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class WGWidgetPlatterView;

@interface WGWidgetWrapperView : UIView
{
    UIView *_contentView;
    WGWidgetPlatterView *_platterView;
    double _overrideIntrinsicContentHeight;
    double _topMarginForLayout;
}

@property(nonatomic) double topMarginForLayout; // @synthesize topMarginForLayout=_topMarginForLayout;
@property(nonatomic) double overrideIntrinsicContentHeight; // @synthesize overrideIntrinsicContentHeight=_overrideIntrinsicContentHeight;
@property(retain, nonatomic) WGWidgetPlatterView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithPlatterView:(id)arg1;

@end

