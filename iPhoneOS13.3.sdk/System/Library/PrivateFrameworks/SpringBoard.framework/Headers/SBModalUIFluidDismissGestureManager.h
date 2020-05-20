//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBModalUIFluidDismissPanGestureRecognizerDelegate-Protocol.h>

@class SBAssistantController, SBHomeGestureSettings, SBModalUIFluidDismissGestureWorkspaceTransaction, SBModalUIFluidDismissPanGestureRecognizer, SBTransientOverlayPresentationManager;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBModalUIFluidDismissPanGestureRecognizerDelegate, BSTransactionObserver, PTSettingsKeyObserver>
{
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBAssistantController *_assistantController;
    SBHomeGestureSettings *_homeGestureSettings;
    SBModalUIFluidDismissPanGestureRecognizer *_bottomEdgeRecognizer;
    SBModalUIFluidDismissGestureWorkspaceTransaction *_currentTransaction;
}

@property(retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) SBModalUIFluidDismissPanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(readonly, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager; // @synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (long long)_dismissalTypeForCurrentContext;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (long long)touchInterfaceOrientationForRecognizer:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2;

@end

