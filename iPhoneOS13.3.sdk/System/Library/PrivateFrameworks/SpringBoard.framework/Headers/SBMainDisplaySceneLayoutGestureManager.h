//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/SBPanSystemGestureRecognizerDelegate-Protocol.h>

@class SBAppResizeGestureWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, SBPanSystemGestureRecognizer;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBPanSystemGestureRecognizerDelegate>
{
    SBPanSystemGestureRecognizer *_resizePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizePanSystemGestureRecognizerWorkspaceTransaction;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
}

@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
// - (void).cxx_destruct;
- (BOOL)_hasActiveModalFloatingApplication;
- (BOOL)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(NSUInteger)arg2 toReceiveTouch:(id)arg3;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_handleResizePanSystemGestureRecognizer:(id)arg1;
- (BOOL)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)arg1;

@end

