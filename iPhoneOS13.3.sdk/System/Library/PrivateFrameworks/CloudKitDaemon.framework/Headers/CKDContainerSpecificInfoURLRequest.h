//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDContainerInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    BOOL _requireUserIDs;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
}

@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) BOOL requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
// - (void).cxx_destruct;
- (void)requestDidParseJSONObject:(id)arg1;
- (BOOL)hasRequestBody;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)usesiCloudAuthToken;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)allowsAuthedAccount;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;
- (id)initWithContainerIdentifier:(id)arg1;

@end

