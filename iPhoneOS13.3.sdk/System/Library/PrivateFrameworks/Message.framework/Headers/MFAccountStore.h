//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface MFAccountStore : NSObject
{
//     struct os_unfair_lock_s _accountStoreLock;
    ACAccountStore *_accountStore;
}

+ (BOOL)_shouldUpdateAccountsInPlace;
+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(BOOL)arg3;
+ (id)sharedAccountStore;
// - (void).cxx_destruct;
- (void)_accountsStoreChanged:(id)arg1;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(BOOL)arg2;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id )arg2;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
@property(readonly) ACAccountStore *persistentStore;
- (void)dealloc;
- (id)init;

@end

