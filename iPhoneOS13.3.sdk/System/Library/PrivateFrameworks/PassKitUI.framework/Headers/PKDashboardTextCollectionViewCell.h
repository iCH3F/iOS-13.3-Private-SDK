//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIImageView, UILabel;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_disclosureView;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

