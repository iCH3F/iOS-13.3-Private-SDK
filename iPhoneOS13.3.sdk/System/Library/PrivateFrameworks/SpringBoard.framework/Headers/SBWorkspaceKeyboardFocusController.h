//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBProcessManagerKeyboardFocusDelegate-Protocol.h>

@class BKSHIDEventDeferringToken, NSHashTable, NSMutableArray, SBMainWorkspace;
@protocol BSInvalidatable;

@interface SBWorkspaceKeyboardFocusController : NSObject <FBProcessManagerKeyboardFocusDelegate>
{
    int _keyboardFocusPID;
    SBMainWorkspace *_workspace;
    NSHashTable *_observers;
    NSMutableArray *_redirections;
    NSMutableArray *_holdAssertions;
    id <BSInvalidatable> _keyboardFocusRule;
    id <BSInvalidatable> _compatibilityKeyboardFocusRule;
    BKSHIDEventDeferringToken *_keyboardFocusToken;
}

+ (id)new;
@property(nonatomic) int keyboardFocusPID; // @synthesize keyboardFocusPID=_keyboardFocusPID;
@property(retain, nonatomic) BKSHIDEventDeferringToken *keyboardFocusToken; // @synthesize keyboardFocusToken=_keyboardFocusToken;
@property(retain, nonatomic) id <BSInvalidatable> compatibilityKeyboardFocusRule; // @synthesize compatibilityKeyboardFocusRule=_compatibilityKeyboardFocusRule;
@property(retain, nonatomic) id <BSInvalidatable> keyboardFocusRule; // @synthesize keyboardFocusRule=_keyboardFocusRule;
@property(retain, nonatomic) NSMutableArray *holdAssertions; // @synthesize holdAssertions=_holdAssertions;
@property(retain, nonatomic) NSMutableArray *redirections; // @synthesize redirections=_redirections;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SBMainWorkspace *workspace; // @synthesize workspace=_workspace;
// - (void).cxx_destruct;
- (void)_notifyObserversDidUpdateKeyboardFocusPID:(int)arg1 token:(id)arg2;
- (BOOL)_getSceneKeyboardFocusOverridePID:(int )arg1 token:(id )arg2;
- (void)processManager:(id)arg1 didSelectKeyboardFocusProcess:(id)arg2 deferringToken:(id)arg3;
- (id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5;
- (id)lockFocusToSpringBoardForReason:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateKeyboardFocusDeferringRules;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end

