//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationStateParam;

@protocol PKPaymentAuthorizationStateMachineDelegate <NSObject>

@optional
- (BOOL)paymentAuthorizationStateMachine:(PKPaymentAuthorizationStateMachine *)arg1 didTransitionFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3 withParam:(PKPaymentAuthorizationStateParam *)arg4;
@end

