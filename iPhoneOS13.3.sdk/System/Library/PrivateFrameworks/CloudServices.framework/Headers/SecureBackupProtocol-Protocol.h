//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString, SecureBackup;

@protocol SecureBackupProtocol <NSObject>
- (void)getCertificatesWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSData *, NSError *))arg2;
- (void)recoverRecordContentsWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)beginHSA2PasscodeRequest:(SecureBackup *)arg1 desirePasscodeImmediately:(BOOL)arg2 uuid:(NSString *)arg3 reply:(void (^)(SecureBackupBeginPasscodeRequestResults *, NSError *))arg4;
- (void)prepareHSA2EscrowRecordContents:(SecureBackup *)arg1 usesComplexPassphrase:(BOOL)arg2 reply:(void (^)(NSError *))arg3;
- (void)stateCaptureWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)backupWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)notificationInfoWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)uncachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)cachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)setBackOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)backOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getCountrySMSCodesWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startSMSChallengeWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)changeSMSTargetWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateMetadataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)disableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)stashRecoveryDataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)recoverWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)enableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getAccountInfoWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

