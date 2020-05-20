//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, NTPBAppConfigurationResource, NTPBAsset, NTPBCacheCoordinatorHints, NTPBDate, NTPBIssueReadingHistoryItem, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBPrivateDataControllerSyncState, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying>
{
    NTPBAppConfigurationResource *_appConfigurationResource;
    NTPBAsset *_asset;
    NTPBCacheCoordinatorHints *_cacheCoordinatorHintsValue;
    NSData *_dataValue;
    NTPBDate *_dateValue;
    NTPBIssueReadingHistoryItem *_issueReadingHistoryItem;
    NSString *_key;
    NTPBNetworkSessionList *_networkSessionList;
    NTPBPersonalizationLocalData *_personalizationLocalData;
    NTPBPrivateDataControllerSyncState *_privateDataControllerSyncState;
    NTPBReadingHistoryItem *_readingHistoryItem;
    NSData *_recordData;
    NSString *_stringValue;
    int _valueType;
    struct {
        unsigned int valueType:1;
    } _has;
}

@property(retain, nonatomic) NTPBAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem; // @synthesize issueReadingHistoryItem=_issueReadingHistoryItem;
@property(retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState; // @synthesize privateDataControllerSyncState=_privateDataControllerSyncState;
@property(retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource; // @synthesize appConfigurationResource=_appConfigurationResource;
@property(retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData; // @synthesize personalizationLocalData=_personalizationLocalData;
@property(retain, nonatomic) NTPBNetworkSessionList *networkSessionList; // @synthesize networkSessionList=_networkSessionList;
@property(retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem; // @synthesize readingHistoryItem=_readingHistoryItem;
@property(retain, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property(retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue; // @synthesize cacheCoordinatorHintsValue=_cacheCoordinatorHintsValue;
@property(retain, nonatomic) NTPBDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAsset;
@property(readonly, nonatomic) BOOL hasIssueReadingHistoryItem;
@property(readonly, nonatomic) BOOL hasPrivateDataControllerSyncState;
@property(readonly, nonatomic) BOOL hasAppConfigurationResource;
@property(readonly, nonatomic) BOOL hasPersonalizationLocalData;
@property(readonly, nonatomic) BOOL hasNetworkSessionList;
@property(readonly, nonatomic) BOOL hasReadingHistoryItem;
@property(readonly, nonatomic) BOOL hasRecordData;
@property(readonly, nonatomic) BOOL hasCacheCoordinatorHintsValue;
@property(readonly, nonatomic) BOOL hasDateValue;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(readonly, nonatomic) BOOL hasDataValue;
@property(nonatomic) BOOL hasValueType;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) BOOL hasKey;
- (void)dealloc;

@end

