//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton
{
    NSLayoutConstraint *_fm_workaround_height_constraint;
}

@property(retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint; // @synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)updateConstraints;

@end

