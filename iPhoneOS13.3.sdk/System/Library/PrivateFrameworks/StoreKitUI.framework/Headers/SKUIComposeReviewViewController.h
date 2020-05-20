//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationController.h>

#import <StoreKitUI/SKUIComposeReviewFormDelegate-Protocol.h>

@class NSString, SKUIComposeReviewFormViewController, SKUIReviewMetadata, SKUIWriteAReviewTemplateViewElement, SUPlaceholderViewController, UIAlertAction;

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UITextFieldDelegate>
{
    SKUIComposeReviewFormViewController *_formViewController;
    SUPlaceholderViewController *_placeholderViewController;
    NSString *_nickname;
    BOOL _nicknameShouldResetOnError;
    UIAlertAction *_nicknameOKAction;
    BOOL _edit;
    SKUIWriteAReviewTemplateViewElement *_templateViewElement;
}

+ (BOOL)_preventsAppearanceProxyCustomization;
@property(nonatomic, getter=isEdit) BOOL edit; // @synthesize edit=_edit;
@property(retain, nonatomic) SKUIWriteAReviewTemplateViewElement *templateViewElement; // @synthesize templateViewElement=_templateViewElement;
// - (void).cxx_destruct;
- (void)_sendDidCancel;
- (void)_sendDidSubmit;
- (void)_loadReviewWithURL:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_finishLoadWithOutput:(id)arg1 error:(id)arg2;
- (void)_setNicknameShouldResetOnError:(BOOL)arg1;
- (void)_setNickname:(id)arg1;
- (void)_promptForNickname;
- (void)_attemptReviewSubmission;
- (void)_cancelAction:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)composeReviewFormDidSubmit:(id)arg1;
- (void)composeReviewFormDidCancel:(id)arg1;
- (void)submitReview;
- (void)setRating:(float)arg1;
- (void)loadReviewWithURL:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)init;

@end

