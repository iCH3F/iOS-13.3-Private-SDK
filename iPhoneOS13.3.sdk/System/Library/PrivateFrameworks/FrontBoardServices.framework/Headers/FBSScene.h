//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneUpdaterDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneIdentityToken, FBSSceneSettings, FBSSceneSpecification, NSString;
@protocol FBSSceneDelegate;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, BSDescriptionProviding>
{
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* CDUnknownBlockType */)arg3;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_hasAgent;
- (id)contexts;
- (id)fbsDisplay;
- (id)display;
@property(readonly, nonatomic) FBSSceneIdentityToken *identityToken;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateClientSettingsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)layers;
@property(readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property(readonly, nonatomic) FBSSceneSettings *settings;
@property(nonatomic) __weak id <FBSSceneDelegate> delegate;
@property(readonly, nonatomic) FBSSceneSpecification *specification;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_init;
- (id)init;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;

@end

