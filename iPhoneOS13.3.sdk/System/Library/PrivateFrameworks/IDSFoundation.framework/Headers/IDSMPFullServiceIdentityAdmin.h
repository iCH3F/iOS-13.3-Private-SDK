//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentityAdmin : IDSMPIdentity
{
}

+ (id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id )arg3;
+ (id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id )arg3;
- (id)dataRepresentationWithError:(id )arg1;
- (id)publicServiceIdentityAdminWithError:(id )arg1;
@property(readonly, nonatomic) NSString *identityServiceTypeName;
@property(readonly, nonatomic) long long identityServiceType;

@end

