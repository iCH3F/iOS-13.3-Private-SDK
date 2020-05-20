//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/SBStartupTransition-Protocol.h>

@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>
{
    NSUInteger _destination;
    SBStartupTransitionContext *_context;
    SBMainWorkspace *_mainWorkspace;
}

@property(readonly, nonatomic) NSUInteger destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) SBStartupTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
// - (void).cxx_destruct;
- (void)_begin;
- (void)performTransitionWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithDestination:(NSUInteger)arg1 context:(id)arg2;

@end
