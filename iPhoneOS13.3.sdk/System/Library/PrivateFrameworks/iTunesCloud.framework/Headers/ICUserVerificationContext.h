//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ACAccount, ACAccountStore, ICUserIdentityProperties, ICUserIdentityStore;

@interface ICUserVerificationContext : NSObject <NSCopying>
{
    long long _interactionLevel;
    ICUserIdentityProperties *_identityProperties;
    ACAccount *_ACAccount;
    ACAccountStore *_ACAccountStore;
    ICUserIdentityStore *_identityStore;
    long long _verificationStyle;
}

+ (id)contextWithACAccount:(id)arg1 accountStore:(id)arg2;
@property(nonatomic) long long verificationStyle; // @synthesize verificationStyle=_verificationStyle;
@property(retain, nonatomic) ICUserIdentityStore *identityStore; // @synthesize identityStore=_identityStore;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
@property(retain, nonatomic) ACAccountStore *ACAccountStore; // @synthesize ACAccountStore=_ACAccountStore;
@property(retain, nonatomic) ACAccount *ACAccount; // @synthesize ACAccount=_ACAccount;
@property(nonatomic) long long interactionLevel; // @synthesize interactionLevel=_interactionLevel;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

