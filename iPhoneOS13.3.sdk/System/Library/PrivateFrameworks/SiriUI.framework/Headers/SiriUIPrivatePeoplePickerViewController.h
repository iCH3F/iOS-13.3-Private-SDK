//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import <SiriUI/SiriUIObjectPickerViewControllerDelegate-Protocol.h>

@class SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate>
{
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

// - (void).cxx_destruct;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (id)viewControllerForPickerPresentation:(id)arg1;
- (double)desiredHeightForFooterView;
- (void)_showPicker:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (id)_pickerController;
- (Class)footerViewClass;
- (BOOL)usePlatterStyle;
- (double)desiredHeightForWidth:(double)arg1;
- (void)loadView;
- (id)initWithSnippet:(id)arg1;

@end

