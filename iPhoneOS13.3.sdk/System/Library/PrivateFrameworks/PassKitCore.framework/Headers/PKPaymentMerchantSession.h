//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSString;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying>
{
    NSUInteger _epochTimestamp;
    NSUInteger _expiresAt;
    NSString *_merchantSessionIdentifier;
    NSString *_nonce;
    NSString *_merchantIdentifier;
    NSString *_domain;
    NSString *_displayName;
    NSString *_initiativeContext;
    NSString *_initiative;
    NSData *_ampEnrollmentPinning;
    NSArray *_signedFields;
    NSData *_signature;
    NSString *_retryNonce;
}

+ (BOOL)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;
@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSArray *signedFields; // @synthesize signedFields=_signedFields;
@property(readonly, nonatomic) NSData *ampEnrollmentPinning; // @synthesize ampEnrollmentPinning=_ampEnrollmentPinning;
@property(readonly, nonatomic) NSString *initiative; // @synthesize initiative=_initiative;
@property(readonly, nonatomic) NSString *initiativeContext; // @synthesize initiativeContext=_initiativeContext;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(readonly, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) NSString *merchantSessionIdentifier; // @synthesize merchantSessionIdentifier=_merchantSessionIdentifier;
@property(readonly, nonatomic) NSUInteger expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, nonatomic) NSUInteger epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
// - (void).cxx_destruct;
- (id)signedData;
- (BOOL)_isModern;
- (BOOL)supportsURL:(id)arg1;
- (BOOL)isEqualToPaymentMerchantSession:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(NSUInteger)arg4 expiresAt:(NSUInteger)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 signedFields:(id)arg10 signature:(id)arg11;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(NSUInteger)arg4 expiresAt:(NSUInteger)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(NSUInteger)arg4 expiresAt:(NSUInteger)arg5 domain:(id)arg6 displayName:(id)arg7 signature:(id)arg8;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(NSUInteger)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;
- (id)init;
- (id)protobuf;

@end
