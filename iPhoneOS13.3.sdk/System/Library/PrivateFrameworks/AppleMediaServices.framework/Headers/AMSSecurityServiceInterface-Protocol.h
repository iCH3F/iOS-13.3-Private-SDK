//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACAccount, AMSProcessInfo, NSDictionary;

@protocol AMSSecurityServiceInterface <NSObject>
- (void)performBiometricTokenUpdateWithAccount:(ACAccount *)arg1 clientInfo:(AMSProcessInfo *)arg2 additionalDialogMetrics:(NSDictionary *)arg3 shouldRequestConfirmation:(BOOL)arg4 completion:(void (^)(BOOL, NSError *))arg5;
@end

