//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/FBApplicationUpdateScenesTransactionObserver-Protocol.h>
#import <AssistantUI/FBSceneObserver-Protocol.h>

@class AFUISceneConfiguration, BKSProcessAssertion, FBApplicationUpdateScenesTransaction, FBScene, NSString;
@protocol AFUISceneControllerDelegate;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver>
{
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    BOOL _sceneForeground;
    NSUInteger _deactivationReason;
    id <AFUISceneControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AFUISceneControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)_recordSceneCreateEnd;
- (void)_recordSceneCreateBegin;
- (id)_currentConfiguration;
- (void)deactivateSceneForReason:(NSUInteger)arg1 explanation:(id)arg2;
- (void)cancelSceneLoadingTimeOut;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1;
- (void)sceneLoadingTimeOutDidOccur;
- (void)updateSceneViewWithConfiguration:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;

@end
