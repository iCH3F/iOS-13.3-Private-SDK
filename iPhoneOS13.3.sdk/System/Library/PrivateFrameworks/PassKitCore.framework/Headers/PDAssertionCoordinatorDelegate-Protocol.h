//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PDAssertion, PDAssertionCoordinator;

@protocol PDAssertionCoordinatorDelegate <NSObject>
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didInvalidateAssertion:(PDAssertion *)arg2;
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didAcquireAssertion:(PDAssertion *)arg2;
- (BOOL)assertionCoordinator:(PDAssertionCoordinator *)arg1 canAcquireAssertion:(PDAssertion *)arg2;
@end

