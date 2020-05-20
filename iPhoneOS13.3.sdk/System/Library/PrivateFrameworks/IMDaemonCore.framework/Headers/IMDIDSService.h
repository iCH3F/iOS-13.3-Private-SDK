//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDService.h>

#import <IMDaemonCore/IDSAccountControllerDelegate-Protocol.h>
#import <IMDaemonCore/IDSAccountRegistrationDelegate-Protocol.h>

@class IDSAccountController, NSArray, NSString;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate>
{
    IDSAccountController *_accountController;
    BOOL _activatingAccount;
    BOOL _deactivatingAccount;
    IMDIDSService *_subService;
    NSString *_subServiceName;
    IMDIDSService *_mainService;
}

@property(nonatomic) IMDIDSService *mainService; // @synthesize mainService=_mainService;
@property(retain, nonatomic) NSString *subServiceName; // @synthesize subServiceName=_subServiceName;
@property(retain, nonatomic) IMDIDSService *subService; // @synthesize subService=_subService;
- (id)mockAccountController;
- (void)setMockAccountController:(id)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountUpdated:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property(readonly, retain, nonatomic) NSArray *accountsLoadedFromIdentityServices;
- (id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2;
@property(readonly, nonatomic) BOOL isSubService;
- (id)_serviceDomain;
- (id)accountFromIDSAccountWithUniqueID:(id)arg1;
- (Class)accountClass;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 isMainService:(BOOL)arg2;
- (id)initWithBundle:(id)arg1 subServiceName:(id)arg2;
- (id)initWithBundle:(id)arg1;
- (void)_loadIDSAccountController;

@end
