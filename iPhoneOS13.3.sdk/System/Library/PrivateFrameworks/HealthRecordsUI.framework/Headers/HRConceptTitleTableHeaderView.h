//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface HRConceptTitleTableHeaderView : UIView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *fontChoices;
    MISSING_TYPE *widthCache;
    MISSING_TYPE *titleCache;
    MISSING_TYPE *bottomExtraSpace;
}

// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
@property(nonatomic, copy) NSString *title;
@property(nonatomic) double bottomExtraSpace; // @synthesize bottomExtraSpace;

@end

