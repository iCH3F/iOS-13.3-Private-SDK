//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUITableViewCell.h>

#import <StoreKitUI/SKUICellLayoutParentView-Protocol.h>

@class SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView>
{
    BOOL _layoutNeedsLayout;
}

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)setCellLayoutNeedsLayout;
@property(readonly, nonatomic) SKUIItemCellLayout *layout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (void)configureForItem:(id)arg1 rowIndex:(long long)arg2;

@end

