//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator
{
    struct NtlmGenerator _ntlmGeneratorRef;
    int _ntlmError;
}

- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(long long)arg1;
- (void)dealloc;

@end

