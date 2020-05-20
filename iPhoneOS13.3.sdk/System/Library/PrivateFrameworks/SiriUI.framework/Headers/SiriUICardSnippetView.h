//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUISashView;
@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;

@interface SiriUICardSnippetView : UIView
{
    UIView *_cardView;
    SiriUISashView *_sashView;
    id <SiriUICardSnippetViewDataSource> _dataSource;
    id <SiriUICardSnippetViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUICardSnippetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUICardSnippetViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1;
- (void)reloadData;
- (void)setCardView:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)accessibilityIdentifier;
- (id)initWithFrame:(CGRect)arg1;

@end

