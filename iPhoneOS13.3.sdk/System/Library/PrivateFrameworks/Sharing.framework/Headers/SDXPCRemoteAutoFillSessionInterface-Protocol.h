//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, NSUUID, SFRemoteAutoFillSessionHelper;

@protocol SDXPCRemoteAutoFillSessionInterface
- (void)autoFillHelperUserNotificationDidDismiss:(NSUUID *)arg1;
- (void)autoFillHelperUserNotificationDidActivate:(NSUUID *)arg1;
- (void)autoFillHelperTryPIN:(NSString *)arg1;
- (void)autoFillHelperDidPickUsername:(NSString *)arg1 password:(NSString *)arg2 error:(NSError *)arg3;
- (void)autoFillHelperActivate:(SFRemoteAutoFillSessionHelper *)arg1 completion:(void (^)(NSError *))arg2;
@end

