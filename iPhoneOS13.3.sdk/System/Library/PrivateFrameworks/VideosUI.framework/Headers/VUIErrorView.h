//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUIErrorLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIErrorView : UIView
{
    VUIErrorLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    VUILabel *_debugTextLabel;
    VUILabel *_debugTextLabel2;
}

@property(retain, nonatomic) VUILabel *debugTextLabel2; // @synthesize debugTextLabel2=_debugTextLabel2;
@property(retain, nonatomic) VUILabel *debugTextLabel; // @synthesize debugTextLabel=_debugTextLabel;
@property(retain, nonatomic) VUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUIErrorLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2;

@end

