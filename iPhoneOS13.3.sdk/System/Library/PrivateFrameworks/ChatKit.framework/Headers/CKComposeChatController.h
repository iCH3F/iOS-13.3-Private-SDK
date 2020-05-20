//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatController.h>

#import <ChatKit/CKBusinessInfoViewDelegate-Protocol.h>
#import <ChatKit/CKComposeRecipientSelectionControllerDelegate-Protocol.h>

@class CKBusinessInfoView, CKComposeNavbarManager, CKComposeRecipientSelectionController, CKComposition, CKTranscriptMultilineLabelCell, NSArray, NSDictionary, NSString, OBWelcomeController, UIBarButtonItem;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate>
{
    BOOL _ignoreKeyboardNotifications;
    BOOL _newComposeCancelled;
    BOOL _sendingViaCardUI;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    NSArray *_prepopulatedRecipients;
    CKComposition *_prepopulatedComposition;
    UIBarButtonItem *_composeCancelItem;
    CKComposeNavbarManager *_navbarManager;
    NSDictionary *_bizIntent;
    CKBusinessInfoView *_businessInfoView;
    OBWelcomeController *_businessChatController;
    CKTranscriptMultilineLabelCell *_blackholeAlertView;
    id /* CDUnknownBlockType */ _deferredSendAnimationBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ deferredSendAnimationBlock; // @synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock;
@property(nonatomic) BOOL sendingViaCardUI; // @synthesize sendingViaCardUI=_sendingViaCardUI;
@property(retain, nonatomic) CKTranscriptMultilineLabelCell *blackholeAlertView; // @synthesize blackholeAlertView=_blackholeAlertView;
@property(retain, nonatomic) OBWelcomeController *businessChatController; // @synthesize businessChatController=_businessChatController;
@property(retain, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
@property(retain, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(retain, nonatomic) CKComposeNavbarManager *navbarManager; // @synthesize navbarManager=_navbarManager;
@property(retain, nonatomic) UIBarButtonItem *composeCancelItem; // @synthesize composeCancelItem=_composeCancelItem;
@property(nonatomic) BOOL newComposeCancelled; // @synthesize newComposeCancelled=_newComposeCancelled;
@property(retain, nonatomic) CKComposition *prepopulatedComposition; // @synthesize prepopulatedComposition=_prepopulatedComposition;
@property(retain, nonatomic) NSArray *prepopulatedRecipients; // @synthesize prepopulatedRecipients=_prepopulatedRecipients;
@property(nonatomic) BOOL ignoreKeyboardNotifications; // @synthesize ignoreKeyboardNotifications=_ignoreKeyboardNotifications;
@property(retain, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController; // @synthesize composeRecipientSelectionController=_composeRecipientSelectionController;
// - (void).cxx_destruct;
- (BOOL)shouldPresentBlockingDowntimeViewController;
- (void)handleAddressBookChange:(id)arg1;
- (id)_businessChatController;
- (void)aboutLinkTapped;
- (void)handleCancelAction:(id)arg1;
- (void)presentBusinessChatOnboarding;
- (void)displayBusinessChatPrivacyAndSkipDefaultsCheck:(BOOL)arg1;
- (void)completedOnboardingWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)completedOnboarding;
- (void)setPrivacyPageHasBeenDisplayed:(BOOL)arg1;
- (BOOL)privacyPageHasBeenDisplayed;
- (void)displayBusinessChatPrivacyIfNecessary;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (void)layoutBusinessInfoViewIfNecessary;
- (void)setBusinessInfoViewInfoIfNecessary;
- (BOOL)_isNewBusinessConversation;
- (void)_updateBlackholeAlertView;
- (void)_triggerRecipientFinalization;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (void)_showNicknameBannerIfNeeded;
- (BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_saveDraftState;
- (BOOL)hasFailedRecipients;
- (BOOL)hasUnreachableEmergencyRecipient;
- (BOOL)isComposingRecipient;
- (UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (id)chatForIMHandle:(id)arg1;
- (id)handleForRecipientNormalizedAddress:(id)arg1;
- (BOOL)shouldForceToSMSForConversation:(id)arg1 forRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 isiMessagable:(BOOL)arg3;
- (void)recipientSelectionControllerDidLoadPillView;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (BOOL)becomeFirstResponder;
- (id)textViewOnscreenWithEntryView;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)_passKitUIDismissed:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (double)_entryViewTopInsetPadding;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (BOOL)shouldShowEntryView;
- (void)cancelCompose;
- (void)cancelButtonTapped:(id)arg1;
- (void)keyCommandCancel:(id)arg1;
- (void)_updateNavigationButtons;
- (BOOL)shouldUseNavigationBarCanvasView;
- (BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1;
- (void)_updateTitleAnimated:(BOOL)arg1;
- (void)keyboardWillShowOrHide:(id)arg1;
- (double)topInsetPadding;
- (BOOL)isSafeToMarkAsRead;
- (id)outgoingComposeViewForSendAnimation;
- (id)_anisetteData;
- (BOOL)_isWhitelistedBusinessRecipient;
- (void)_processBizIntentIfNeeded;
- (void)addBizIntentToConversation:(id)arg1;
- (void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1;
- (void)_prepareForSendFromCardIfNecessaryAndSend:(id /* CDUnknownBlockType */)arg1;
- (void)sendComposition:(id)arg1;
- (BOOL)_shouldSetToFieldAsFirstResponder;
- (void)_setConversationDeferredSetup;
- (void)conversationLeft;
@property(readonly, nonatomic) NSString *unatomizedRecipientText;
@property(readonly, nonatomic) NSArray *proposedRecipients;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForSuspend;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3;
- (void)dealloc;

@end

