//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol _UIDebugIssueReporting;

@protocol _UIFocusItemDebuggable <NSObject>

@optional
- (void)_diagnoseFocusInteractionEligibilityForReport:(id <_UIDebugIssueReporting>)arg1;
- (BOOL)_shouldAlwaysDiagnoseFocusInteractionEligibility;
- (void)_diagnoseFocusabilityForReport:(id <_UIDebugIssueReporting>)arg1;
@end

