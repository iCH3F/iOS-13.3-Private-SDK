//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountCredential, SUScriptAppleAccountType;

@interface SUScriptAppleAccount : SUScriptObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *username;
@property(readonly) NSString *identifier;
@property(readonly) NSString *dsID;
@property(readonly) SUScriptAppleAccountCredential *credential;
- (id)_className;
@property(readonly) SUScriptAppleAccountType *accountType;
@property(readonly) NSString *accountDescription;
- (void)setAgeVerificationExpirationDate:(id)arg1 completionHandler:(id)arg2;
- (void)reload;
@property(readonly) ACAccountStore *nativeAccountStore;
@property(readonly) ACAccount *nativeAccount;
- (void)dealloc;
- (id)initWithACAccount:(id)arg1 accountStore:(id)arg2;

@end

