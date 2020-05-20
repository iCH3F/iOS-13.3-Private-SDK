//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;
@protocol WDCheckmarkTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDCheckmarkTableViewCell : UITableViewCell
{
    UILabel *_displayLabel;
    UIButton *_button;
    id <WDCheckmarkTableViewCellDelegate> _delegate;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak id <WDCheckmarkTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)clickToggle:(id)arg1;
@property(nonatomic, getter=isOn) BOOL on;
- (void)setDisplayText:(id)arg1;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
