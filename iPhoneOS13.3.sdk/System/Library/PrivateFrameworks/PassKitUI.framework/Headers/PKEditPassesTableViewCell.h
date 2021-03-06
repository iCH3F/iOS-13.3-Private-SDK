//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell
{
    BOOL _showImage;
    PKPass *_pass;
}

+ (UIEdgeInsets)separatorInset;
+ (BOOL)needsFullPassImage;
+ (double)height;
+ (CGSize)imageSizeNeeded;
@property(nonatomic) BOOL showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setImage:(id)arg1 forPass:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 showImage:(BOOL)arg2;

@end

