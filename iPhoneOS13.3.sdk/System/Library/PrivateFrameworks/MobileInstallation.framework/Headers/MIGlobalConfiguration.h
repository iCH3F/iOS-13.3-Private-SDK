//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface MIGlobalConfiguration : NSObject
{
    BOOL _allowDeletableSystemApps;
    unsigned int _uid;
    unsigned int _gid;
    NSSet *_allFrameworksDirectories;
    NSDictionary *_coreServicesAppBundleIDToInfoMap;
    NSDictionary *_systemAppBundleIDToInfoMap;
    NSDictionary *_stagedSystemAppBundleIDToInfoMap;
    NSDictionary *_systemAppPlaceholderBundleIDToInfoMap;
    NSDictionary *_internalAppBundleIDToInfoMap;
    NSSet *_builtInFrameworkBundleIDs;
    NSSet *_systemAppPlaceholderBundleIDs;
    NSSet *_systemAppPlaceholderPluginBundleIDs;
    NSSet *_systemAppPlaceholderXPCServiceBundleIDs;
    NSURL *_installdPath;
    NSURL *_mobilePath;
    NSURL *_rootPath;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSURL *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) NSURL *mobilePath; // @synthesize mobilePath=_mobilePath;
@property(readonly, nonatomic) NSURL *installdPath; // @synthesize installdPath=_installdPath;
@property(readonly, nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *lastBuildInfoFileURL;
@property(readonly, copy, nonatomic) NSURL *migrationPlistURL;
@property(readonly, copy, nonatomic) NSString *alternateThinningModelIdentifier;
@property(readonly, copy, nonatomic) NSArray *diskImageApplicationsDirectories;
@property(readonly, copy, nonatomic) NSDictionary *diskImageAppBundleIDToInfoMap;
- (void)reScanInternalApps;
- (void)reScanCoreServicesApps;
- (void)reScanSystemApps;
@property(readonly, copy, nonatomic) NSSet *systemAppPlaceholderXPCServiceBundleIDs; // @synthesize systemAppPlaceholderXPCServiceBundleIDs=_systemAppPlaceholderXPCServiceBundleIDs;
@property(readonly, copy, nonatomic) NSSet *systemAppPlaceholderPluginBundleIDs; // @synthesize systemAppPlaceholderPluginBundleIDs=_systemAppPlaceholderPluginBundleIDs;
@property(readonly, copy, nonatomic) NSSet *systemAppPlaceholderBundleIDs; // @synthesize systemAppPlaceholderBundleIDs=_systemAppPlaceholderBundleIDs;
@property(readonly, copy, nonatomic) NSSet *builtInFrameworkBundleIDs; // @synthesize builtInFrameworkBundleIDs=_builtInFrameworkBundleIDs;
@property(readonly, copy, nonatomic) NSDictionary *internalAppBundleIDToInfoMap; // @synthesize internalAppBundleIDToInfoMap=_internalAppBundleIDToInfoMap;
@property(readonly, copy, nonatomic) NSDictionary *systemAppPlaceholderBundleIDToInfoMap; // @synthesize systemAppPlaceholderBundleIDToInfoMap=_systemAppPlaceholderBundleIDToInfoMap;
@property(readonly, copy, nonatomic) NSDictionary *stagedSystemAppBundleIDToInfoMap; // @synthesize stagedSystemAppBundleIDToInfoMap=_stagedSystemAppBundleIDToInfoMap;
@property(readonly, copy, nonatomic) NSDictionary *systemAppBundleIDToInfoMap; // @synthesize systemAppBundleIDToInfoMap=_systemAppBundleIDToInfoMap;
@property(readonly, copy, nonatomic) NSDictionary *coreServicesAppBundleIDToInfoMap; // @synthesize coreServicesAppBundleIDToInfoMap=_coreServicesAppBundleIDToInfoMap;
@property(readonly, copy, nonatomic) NSSet *builtInApplicationBundleIDs;
- (id)_bundleIDMapForAppsInDirectory:(id)arg1;
- (id)_bundleIDMapForAppsInDirectory:(id)arg1 loadingAdditionalKeys:(id)arg2;
- (id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 loadingAdditionalKeys:(id)arg3;
@property(readonly, copy, nonatomic) NSSet *installationBlacklist;
@property(readonly, copy, nonatomic) NSArray *appUserDataItemNames;
@property(readonly, copy, nonatomic) NSArray *appBundleMetadataItemNames;
@property(readonly, nonatomic) NSURL *backedUpStateDirectory;
@property(readonly, nonatomic) NSURL *cachesDirectory;
@property(readonly, nonatomic) NSURL *dataDirectory;
@property(readonly, copy, nonatomic) NSSet *allFrameworksDirectories; // @synthesize allFrameworksDirectories=_allFrameworksDirectories;
@property(readonly, nonatomic) NSURL *developerFrameworksRootDirectory;
@property(readonly, nonatomic) NSURL *internalFrameworksRootDirectory;
@property(readonly, nonatomic) NSURL *systemFrameworksRootDirectory;
@property(readonly, nonatomic) NSURL *factoryMountDirectory;
@property(readonly, nonatomic) NSURL *stagedSystemAppsDirectory;
@property(readonly, nonatomic) NSURL *developerAppsDirectory;
@property(readonly, nonatomic) NSURL *internalAppsDirectory;
- (id)disableSystemAppDeletionCanaryFile;
@property(readonly, nonatomic) NSURL *systemAppDetachedSignaturesDirectory;
@property(readonly, nonatomic) NSURL *systemAppPlaceholdersDirectory;
@property(readonly, nonatomic) NSURL *systemAppsDirectory;
@property(readonly, nonatomic) NSURL *coreServicesDirectory;
@property(readonly, nonatomic) NSURL *logDirectory;
@property(readonly, nonatomic) NSURL *stagingRoot;
@property(readonly, nonatomic) NSURL *backupSystemAppInstallStateFilePath;
@property(readonly, nonatomic) NSURL *systemAppInstallStateFilePath;
@property(readonly, nonatomic) NSURL *roleUserMigrationMarkerFilePath;
@property(readonly, nonatomic) NSURL *oldArchiveDirectory;
@property(readonly, nonatomic) NSURL *oldLoggingPath;
@property(readonly, nonatomic) NSURL *oldDataDirectoryPath;
@property(readonly, nonatomic) BOOL allowDeletableSystemApps; // @synthesize allowDeletableSystemApps=_allowDeletableSystemApps;
- (id)init;

@end

