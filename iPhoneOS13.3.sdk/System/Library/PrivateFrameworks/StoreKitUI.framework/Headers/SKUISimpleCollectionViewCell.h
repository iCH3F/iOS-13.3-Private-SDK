//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell
{
    UIView *_contentChildView;
    UIEdgeInsets _contentInsets;
}

@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *contentChildView; // @synthesize contentChildView=_contentChildView;
// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end

