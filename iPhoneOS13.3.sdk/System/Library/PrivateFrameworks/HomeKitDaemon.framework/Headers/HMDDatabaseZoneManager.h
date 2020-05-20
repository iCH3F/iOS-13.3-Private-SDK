//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBCloudZoneConfiguration, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDHome, NSObject, NSSet, NSString, NSUUID;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDCloudShareParticipantsManagerDataSource, HMDDatabase, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>
{
    id <HMDDatabaseZoneManagerDelegate> _delegate;
    id <HMDCloudShareParticipantsManagerDataSource> _participantsManagerDataSource;
    NSString *_zoneName;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    NSSet *_externalRecordTypesForSubscriptions;
    HMBCloudZoneConfiguration *_cloudZoneConfiguration;
    long long _state;
    id <HMDDatabase> _database;
    HMDHome *_home;
    HMDCloudShareMessenger *_shareMessenger;
    HMDCloudShareParticipantsManager *_participantsManager;
    id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    id /* CDUnknownBlockType */ _participantsManagerFactory;
}

+ (id)logCategory;
@property(copy) id /* CDUnknownBlockType */ participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate; // @synthesize zoneDelegate=_zoneDelegate;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) HMDHome *home; // @synthesize home=_home;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property long long state; // @synthesize state=_state;
@property(copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @synthesize cloudZoneConfiguration=_cloudZoneConfiguration;
@property(copy) NSSet *externalRecordTypesForSubscriptions; // @synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property __weak id <HMDCloudShareParticipantsManagerDataSource> participantsManagerDataSource; // @synthesize participantsManagerDataSource=_participantsManagerDataSource;
@property __weak id <HMDDatabaseZoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_tearDownState;
- (void)updateShareParticipants;
- (id)remove;
- (void)start;
- (void)configure;
@property(readonly, getter=isOwnerUser) BOOL ownerUser;
@property(readonly, copy) NSString *containerIdentifier;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;

@end
