//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKPickerTableViewCell.h>


@class NSString, UIColor, UIFont, UITextField;
@protocol TKVibrationPickerTableViewCellDelegate;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate>
{
    UITextField *_removableTextField;
    BOOL _editable;
    id <TKVibrationPickerTableViewCellDelegate> _delegate;
    UIColor *_regularTextColor;
}

@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(nonatomic) __weak id <TKVibrationPickerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)_makeRemovableTextFieldEditable:(BOOL)arg1;
- (void)willTransitionToState:(NSUInteger)arg1;
- (void)didTransitionToState:(NSUInteger)arg1;
- (void)layoutSubviews;
- (void)_layoutRemovableTextField;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (BOOL)_isDisplayingRemovableTextField;
@property(nonatomic, getter=isChecked) BOOL checked;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(retain, nonatomic) UIFont *regularTextFont;
@property(retain, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) NSString *labelText;
- (id)initWithReuseIdentifier:(id)arg1;

@end

