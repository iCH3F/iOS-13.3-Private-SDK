//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UIInputViewControllerState;
@protocol _UIIVCResponseDelegate;

@protocol _UIIVCInterface <NSObject>
@property(retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate;
- (void)_handleInputViewControllerState:(_UIInputViewControllerState *)arg1;
- (void)_tearDownRemoteService;
@end

