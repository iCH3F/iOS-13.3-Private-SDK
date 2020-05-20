//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFAutomationSummaryViewControllerDelegate-Protocol.h>

@class NSString, UINavigationController, WFAutomationSummaryViewController, WFConfiguredTriggerRecord, WFDatabase, WFTrigger, WFTriggerManager, WFWorkflow, WFWorkflowReference;
@protocol WFEditAutomationCoordinatorDelegate;

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate>
{
    UINavigationController *_navigationController;
    id <WFEditAutomationCoordinatorDelegate> _delegate;
    WFDatabase *_database;
    WFTriggerManager *_triggerManager;
    WFConfiguredTriggerRecord *_triggerRecord;
    NSString *_triggerIdentifier;
    WFTrigger *_trigger;
    WFWorkflowReference *_workflowReference;
    WFWorkflow *_workflow;
    WFAutomationSummaryViewController *_automationSummaryViewController;
}

@property(retain, nonatomic) WFAutomationSummaryViewController *automationSummaryViewController; // @synthesize automationSummaryViewController=_automationSummaryViewController;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;
@property(retain, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) NSString *triggerIdentifier; // @synthesize triggerIdentifier=_triggerIdentifier;
@property(readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // @synthesize triggerRecord=_triggerRecord;
@property(retain, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(retain, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WFEditAutomationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
// - (void).cxx_destruct;
- (void)updateUIForShowingViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2;
- (void)cancel;
- (void)finish;
- (id)start;
- (id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4;

@end

