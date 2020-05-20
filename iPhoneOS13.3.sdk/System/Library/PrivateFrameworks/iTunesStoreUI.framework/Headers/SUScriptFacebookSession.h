//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject
{
    SUScriptAppleAccount *_account;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSUInteger likeStatusFlagMe;
@property(readonly) NSUInteger likeStatusFlagGlobalCount;
@property(readonly) NSUInteger likeStatusFlagFriends;
@property(readonly) NSUInteger likeStatusFlagFriendCount;
@property(readonly) id hasAccounts;
- (id)_className;
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1;

@end

