//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCAccountUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_signInQueue;
}

+ (BOOL)hasManagedAccountOfDataclasses:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
+ (id)accountDataclassesForBundleID:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // @synthesize signInQueue=_signInQueue;
// - (void).cxx_destruct;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id )arg4;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id )arg4;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)init;

@end

