//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSceneDelegate.h>

#import <ChatKit/CKChatControllerDelegate-Protocol.h>

@class CKCoreChatController, CKNavigationController;

@interface CKChatSceneDelegate : CKSceneDelegate <CKChatControllerDelegate>
{
    CKNavigationController *_navigationController;
    CKCoreChatController *_chatController;
}

@property(retain, nonatomic) CKCoreChatController *chatController; // @synthesize chatController=_chatController;
@property(retain, nonatomic) CKNavigationController *navigationController; // @synthesize navigationController=_navigationController;
// - (void).cxx_destruct;
- (id)canActivatePredicate;
- (id)prefersToActivatePredicate;
- (void)doneButtonPressedForChatController:(id)arg1;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)__updateAppSnapshot;
- (void)_updateAppSnapshot;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)showConversation:(id)arg1;
- (id)conversation;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (long long)type;
- (id)init;

@end

