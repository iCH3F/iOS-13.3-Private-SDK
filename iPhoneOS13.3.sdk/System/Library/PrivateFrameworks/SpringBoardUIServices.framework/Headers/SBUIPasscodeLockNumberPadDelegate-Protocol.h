//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBUIPasscodeLockNumberPad, UIControl;
@protocol SBUIPasscodeNumberPadButton;

@protocol SBUIPasscodeLockNumberPadDelegate <NSObject>

@optional
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(SBUIPasscodeLockNumberPad *)arg1;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyCancelled:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyUp:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg1 keyDown:(UIControl<SBUIPasscodeNumberPadButton> *)arg2;
@end

