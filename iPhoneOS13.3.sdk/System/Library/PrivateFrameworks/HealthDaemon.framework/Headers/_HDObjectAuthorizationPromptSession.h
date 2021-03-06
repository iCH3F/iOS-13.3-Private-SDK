//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject
{
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
    id /* CDUnknownBlockType */ _sessionCompletion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sessionCompletion; // @synthesize sessionCompletion=_sessionCompletion;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (id)sessionDescriptor;
- (void)endPromptTransactionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)beginPromptTransactionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)timeoutExpired;
- (void)beginPromptSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addRequest:(id)arg1;
@property(readonly, nonatomic) NSUInteger requestCount;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2;

@end

