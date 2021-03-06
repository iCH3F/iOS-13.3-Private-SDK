//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>


@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithUserInteractionLevel:(long long)arg1;

@end

