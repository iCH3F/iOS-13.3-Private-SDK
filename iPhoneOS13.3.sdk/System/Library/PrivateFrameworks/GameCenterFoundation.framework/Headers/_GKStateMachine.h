//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
//     struct os_unfair_lock_s _lock;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id <_GKStateMachineDelegate> _delegate;
    BOOL _shouldLogStateTransitions;
}

@property id <_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) BOOL shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (BOOL)applyState:(id)arg1;
- (void)dealloc;
- (id)init;

@end

