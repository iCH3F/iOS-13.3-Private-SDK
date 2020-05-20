//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICellLayout.h>

#import <StoreKitUI/SKUIEditorialLinkViewDelegate-Protocol.h>

@class SKUIEditorialLinkView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>
{
    UIEdgeInsets _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (id)_textBoxView;
- (id)_linkView;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(BOOL)arg3;
- (void)resetContentInset;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initContentInset;

@end
