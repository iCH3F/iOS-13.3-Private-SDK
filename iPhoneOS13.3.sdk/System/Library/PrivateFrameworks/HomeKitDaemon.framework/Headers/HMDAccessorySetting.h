//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccessorySettingProtocol-Protocol.h>
#import <HomeKitDaemon/HMDAccessorySettingUpdateDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccessorySettingUpdateProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessorySettingContainer, HMDAccessorySettingGroup, HMDAccessorySettingModel, HMDAccessorySettingUpdateBase, HMFMessageDestination, HMFMessageDispatcher, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetting : HMFObject <HMDBackingStoreObjectProtocol, HMDAccessorySettingUpdateDelegate, HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    id _value;
    NSString *_name;
    long long _type;
    NSMutableArray *_constraints;
    NSMutableSet *_constraintItemsMarkedForRemoval;
    NSUInteger _configurationVersion;
    HMDAccessorySetting *_mediaSystemSetting;
    NSUUID *_identifier;
    HMDAccessorySettingGroup *_group;
    NSUInteger _properties;
    HMDAccessorySettingUpdateBase *_updateSetting;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessorySettingContainer *_container;
    HMFMessageDestination *_messageDestination;
}

+ (BOOL)supportsSecureCoding;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
@property(retain, nonatomic) HMFMessageDestination *messageDestination; // @synthesize messageDestination=_messageDestination;
@property(retain, nonatomic) HMDAccessorySettingContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMDAccessorySettingUpdateBase *updateSetting; // @synthesize updateSetting=_updateSetting;
@property(readonly) NSUInteger properties; // @synthesize properties=_properties;
@property __weak HMDAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldEncodeForCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_fixupMergeStrategyConstraints;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)remoteMessageDestination:(id)arg1;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(NSUInteger)arg1;
@property(readonly) HMDAccessorySettingModel *model;
@property(readonly, copy) NSArray *models;
- (void)_relayRequestMessageNoRemoteCheck:(id)arg1 targetAccessory:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) NSUInteger configurationVersion; // @synthesize configurationVersion=_configurationVersion;
- (id)valueUpdateNotificationWithMessage:(id)arg1;
- (void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)_shouldTurnOffPersonalRequestsOnLanguageChangeFrom:(id)arg1 toValue:(id)arg2;
- (BOOL)_shouldBlockSettingUpdateMessage:(id)arg1;
- (void)_handleUpdateValue:(id)arg1;
- (void)handleUpdateValue:(id)arg1;
@property(readonly, copy) id value;
- (id)modelsForConstraintsUpdate:(id)arg1;
- (BOOL)isConstraintMergeStrategyReflection;
- (void)_handleUpdatedConstraints:(id)arg1;
- (void)_handleReplaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)handleReplaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_relayConstraintsMessage:(id)arg1 toTargetAccessory:(id)arg2 additions:(id)arg3 removals:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_handleReplaceConstraints:(id)arg1;
- (void)_mergeConstraintsLocallyWithAdditions:(id)arg1 removals:(id)arg2;
- (void)_saveHomeConfiguration:(id)arg1;
- (void)_replaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)replaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_handleRemoveConstraint:(id)arg1;
- (void)handleRemoveConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)_handleAddConstraint:(id)arg1;
- (void)handleAddConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)mergeConstraintsFromOther:(id)arg1;
- (id)constraintWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *constraints;
- (BOOL)isValid:(id )arg1;
- (id)accessoryFromTarget;
@property(readonly) NSString *keyPath;
@property(readonly) long long type;
@property(readonly, copy) NSString *name;
- (void)registerForMessages;
- (void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2;
- (void)sendReflectedNotification:(BOOL)arg1;
@property __weak HMDAccessorySetting *mediaSystemSetting; // @synthesize mediaSystemSetting=_mediaSystemSetting;
- (void)updateMediaSystemSettings:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)description:(id)arg1 indent:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)_fixupAccessorySetting;
- (void)fixupAccessorySetting;
- (BOOL)compareConstraints:(id)arg1;

@end

