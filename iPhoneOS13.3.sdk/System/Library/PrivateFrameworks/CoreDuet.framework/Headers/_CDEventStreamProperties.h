//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, _DKObjectType;

@interface _CDEventStreamProperties : NSObject
{
    BOOL isAvailable;
    BOOL dataCollectionEnabled;
    BOOL setupOnDemand;
    BOOL isInstant;
    BOOL isHistorical;
    BOOL shouldSaveCurrentEventOnShutdown;
    NSString *name;
    NSString *formattedName;
    NSString *knowledgeBaseName;
    NSString *knowledgeBaseMetadataClass;
    NSString *descriptionString;
    NSUInteger domainAvailability;
    NSString *monitorClass;
    NSURL *contentProviderBundleURL;
    _DKObjectType *valueType;
    double timeToLive;
    double temporalPrecision;
    long long eventCountLimit;
    double period;
    long long eventsPerPeriod;
    long long pollingPeriod;
}

+ (id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2;
+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
@property(readonly, nonatomic) long long pollingPeriod; // @synthesize pollingPeriod;
@property(readonly, nonatomic) BOOL shouldSaveCurrentEventOnShutdown; // @synthesize shouldSaveCurrentEventOnShutdown;
@property(readonly, nonatomic) BOOL isHistorical; // @synthesize isHistorical;
@property(readonly, nonatomic) BOOL isInstant; // @synthesize isInstant;
@property(readonly, nonatomic) long long eventsPerPeriod; // @synthesize eventsPerPeriod;
@property(readonly, nonatomic) double period; // @synthesize period;
@property(readonly, nonatomic) long long eventCountLimit; // @synthesize eventCountLimit;
@property(readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;
@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive;
@property(readonly, nonatomic) BOOL setupOnDemand; // @synthesize setupOnDemand;
@property(readonly, nonatomic) _DKObjectType *valueType; // @synthesize valueType;
@property(readonly, nonatomic) NSURL *contentProviderBundleURL; // @synthesize contentProviderBundleURL;
@property(readonly, nonatomic) NSString *monitorClass; // @synthesize monitorClass;
@property(readonly, nonatomic) BOOL dataCollectionEnabled; // @synthesize dataCollectionEnabled;
@property(readonly, nonatomic) NSUInteger domainAvailability; // @synthesize domainAvailability;
@property(readonly, nonatomic) BOOL isAvailable; // @synthesize isAvailable;
@property(readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString;
@property(readonly, nonatomic) NSString *knowledgeBaseMetadataClass; // @synthesize knowledgeBaseMetadataClass;
@property(readonly, nonatomic) NSString *knowledgeBaseName; // @synthesize knowledgeBaseName;
@property(readonly, nonatomic) NSString *formattedName; // @synthesize formattedName;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
// - (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2;
- (id)description;

@end

