//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryCell.h>


@class HKCaretOptionalTextField, NSArray, NSNumber, NSString, UILabel, UIView;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate>
{
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    BOOL _editDisabled;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UILabel *_titleLabel;
    HKCaretOptionalTextField *_inputTextField;
    NSString *_lastChangedText;
}

@property(retain, nonatomic) NSString *lastChangedText; // @synthesize lastChangedText=_lastChangedText;
@property(retain, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKSimpleDataEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_informDelegateForContentChange;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEditDisabled:(BOOL)arg1;
- (BOOL)editDisabled;
- (void)beginEditing;
- (void)_updateForCurrentSizeCategory;
- (void)_setupLayoutConstraints;
- (void)_setupLabels;
- (void)_setupInputTextFieldWithIntention:(long long)arg1;
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;

@end

