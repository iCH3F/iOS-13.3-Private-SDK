//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation
{
    BOOL _loginDisabled;
    BOOL _passwordChangeRequired;
    BOOL _shouldShowLinkAccountsUI;
    GKPlayerCredential *_credential;
    NSURL *_passwordChangeURL;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSString *_lastPersonalizationVersionDisplayed;
    NSUInteger _lastPrivacyNoticeVersionDisplayed;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) NSUInteger lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) BOOL shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;
@property(retain, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;
@property(nonatomic) BOOL passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;
@property(nonatomic) BOOL loginDisabled; // @synthesize loginDisabled=_loginDisabled;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
// - (void).cxx_destruct;

@end
