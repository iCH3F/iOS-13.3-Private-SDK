//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AALoginOrCreateDelegatesRequest : AARequest
{
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}

+ (Class)responseClass;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3;

@end

