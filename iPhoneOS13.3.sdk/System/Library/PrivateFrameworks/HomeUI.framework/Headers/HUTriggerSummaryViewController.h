//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUMediaSelectionViewControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerDurationPickerDelegate-Protocol.h>
#import <HomeUI/HUTriggerEditorDelegate-Protocol.h>
#import <HomeUI/HUTriggerSummaryActionGridViewControllerDelegate-Protocol.h>
#import <HomeUI/WFHomeComposeViewControllerDelegate-Protocol.h>

@class HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, HUTriggerActionFlow, HUTriggerSummaryActionGridViewController;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerSummaryViewController : HUItemTableViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerSummaryActionGridViewControllerDelegate, HUTriggerDurationPickerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUMediaSelectionViewControllerDelegate>
{
    BOOL _viewHasAppeared;
    BOOL _isEditingExistingTrigger;
    HUTriggerSummaryActionGridViewController *_actionSetsGridViewController;
    HUTriggerSummaryActionGridViewController *_serviceActionsGridViewController;
    HFTriggerBuilder *_triggerBuilder;
    id <HUTriggerEditorDelegate> _delegate;
    HUForwardingTriggerActionBuilderDelegate *_forwardingTriggerActionBuilderDelegate;
    HUTriggerActionFlow *_flow;
}

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (id)createTriggerSummaryViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3;
@property(retain, nonatomic) HUTriggerActionFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) BOOL isEditingExistingTrigger; // @synthesize isEditingExistingTrigger=_isEditingExistingTrigger;
@property(retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate; // @synthesize forwardingTriggerActionBuilderDelegate=_forwardingTriggerActionBuilderDelegate;
@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
// - (void).cxx_destruct;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1;
- (id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2;
- (void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2;
- (void)_commitTriggerBuilder;
- (BOOL)_canCommitTriggerBuilder;
- (id)_durationEventBuilder;
- (void)_updateTableHeaderConfiguration;
- (void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2;
- (void)triggerSummaryActionGridViewController:(id)arg1 didUpdateTriggerBuilder:(id)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (void)durationPicker:(id)arg1 didSelectDuration:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)childViewControllersToPreload;
- (BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)shouldHideFooterBelowSection:(long long)arg1;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (NSUInteger)automaticDisablingReasonsForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemTableHeaderMessage;
- (void)_presentMediaSelection;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (void)_setTriggerEnabled:(BOOL)arg1;
- (void)_deleteTrigger:(id)arg1 indexPath:(id)arg2;
- (void)_addAction:(id)arg1;
- (void)_preloadShortcutHomeManager;
- (void)_testTrigger;
- (void)_cancelShortcutEditor:(id)arg1;
- (void)_showShortcutEditorForTriggerBuilderItem:(id)arg1;
- (void)_showEditorForTriggerBuilderItem:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController; // @synthesize serviceActionsGridViewController=_serviceActionsGridViewController;
@property(readonly, nonatomic) HUTriggerSummaryActionGridViewController *actionSetsGridViewController; // @synthesize actionSetsGridViewController=_actionSetsGridViewController;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (id)initWithTriggerBuilder:(id)arg1 mode:(NSUInteger)arg2 isPresentedModally:(BOOL)arg3 delegate:(id)arg4;

@end

