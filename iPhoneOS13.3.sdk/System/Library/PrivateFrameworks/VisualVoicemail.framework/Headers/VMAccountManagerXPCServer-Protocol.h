//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSUUID;

@protocol VMAccountManagerXPCServer <NSObject>
- (void)setPasscode:(NSString *)arg1 forAccountUUID:(NSUUID *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)maximumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(long long))arg2;
- (void)minimumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(long long))arg2;
- (void)isPasscodeChangeSupportedForAccountUUID:(NSUUID *)arg1 reply:(void (^)(BOOL))arg2;
- (void)accounts:(void (^)(NSArray *))arg1;
@end

