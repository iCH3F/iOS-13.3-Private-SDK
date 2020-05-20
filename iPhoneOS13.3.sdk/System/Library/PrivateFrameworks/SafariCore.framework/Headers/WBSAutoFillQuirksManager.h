//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSRemotePlistControllerDelegate-Protocol.h>

@class WBSAutoFillAssociatedDomainsManager, WBSPasswordAuditingEligibleDomainsManager, WBSPasswordGenerationManager, WBSRemotePlistController;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate>
{
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotePlistController *_remotePlistController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    BOOL _shouldAttemptToDownloadConfiguration;
}

@property(nonatomic) BOOL shouldAttemptToDownloadConfiguration; // @synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration;
// - (void).cxx_destruct;
- (BOOL)isStreamlinedLoginDisallowedOnURL:(id)arg1;
- (BOOL)isAutomaticLoginDisallowedOnURL:(id)arg1;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (void)didDownloadPlistForRemotePlistController:(id)arg1;
@property(readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property(readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property(readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
- (void)prepareForTermination;
- (void)beginLoadingQuirksFromDisk;
- (id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (id)init;

@end

