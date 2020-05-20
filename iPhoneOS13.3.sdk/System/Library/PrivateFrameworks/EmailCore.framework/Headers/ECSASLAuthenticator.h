//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ECAuthenticationScheme, NSString;
@protocol ECAuthenticatableAccount, ECAuthenticatableConnection, ECSASLSecurityLayer;

@interface ECSASLAuthenticator : NSObject
{
    id <ECAuthenticatableConnection> _connection;
    ECAuthenticationScheme *_authenticationScheme;
    id <ECAuthenticatableAccount> _account;
    long long _authenticationState;
}

@property(readonly, nonatomic) ECAuthenticationScheme *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
// - (void).cxx_destruct;
- (void)setMissingPasswordError;
@property(readonly, nonatomic) BOOL couldRetry;
@property(readonly, nonatomic) BOOL usesBase64EncodeResponseData;
@property(readonly, nonatomic, getter=isUsingSSL) BOOL usingSSL;
@property(readonly, nonatomic) id <ECSASLSecurityLayer> securityLayer;
@property(readonly, nonatomic) BOOL justSentPlainTextPassword;
@property(nonatomic) long long authenticationState;
- (id)responseForServerData:(id)arg1;
@property(readonly, nonatomic) BOOL supportsInitialClientResponse;
@property(readonly, nonatomic) NSString *saslName;
@property(readonly, nonatomic) id <ECAuthenticatableAccount> account;
- (id)authScheme;
- (id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;

@end
