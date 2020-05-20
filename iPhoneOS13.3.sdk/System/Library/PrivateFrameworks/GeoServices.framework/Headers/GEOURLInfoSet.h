//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOURLInfo, NSURL, PBDataReader, PBUnknownFields;

@interface GEOURLInfoSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLInfo *_abExperimentURL;
    GEOURLInfo *_addressCorrectionInitURL;
    GEOURLInfo *_addressCorrectionUpdateURL;
    GEOURLInfo *_analyticsCohortSessionURL;
    GEOURLInfo *_analyticsLongSessionURL;
    GEOURLInfo *_analyticsSessionlessURL;
    GEOURLInfo *_analyticsShortSessionURL;
    GEOURLInfo *_announcementsURL;
    GEOURLInfo *_authProxyURL;
    GEOURLInfo *_backgroundDispatcherURL;
    GEOURLInfo *_backgroundRevGeoURL;
    GEOURLInfo *_batchReverseGeocoderURL;
    GEOURLInfo *_batchTrafficProbeURL;
    GEOURLInfo *_bluePOIDispatcherURL;
    GEOURLInfo *_businessPortalBaseURL;
    GEOURLInfo *_directionsURL;
    GEOURLInfo *_dispatcherURL;
    GEOURLInfo *_etaURL;
    GEOURLInfo *_feedbackLookupURL;
    GEOURLInfo *_feedbackSubmissionURL;
    GEOURLInfo *_junctionImageServiceURL;
    GEOURLInfo *_logMessageUsageURL;
    GEOURLInfo *_logMessageUsageV3URL;
    GEOURLInfo *_muninBaseURL;
    GEOURLInfo *_polyLocationShiftURL;
    GEOURLInfo *_proactiveRoutingURL;
    GEOURLInfo *_problemCategoriesURL;
    GEOURLInfo *_problemOptInURL;
    GEOURLInfo *_problemStatusURL;
    GEOURLInfo *_problemSubmissionURL;
    GEOURLInfo *_realtimeTrafficProbeURL;
    GEOURLInfo *_resourcesURL;
    GEOURLInfo *_reverseGeocoderVersionsURL;
    GEOURLInfo *_searchAttributionManifestURL;
    GEOURLInfo *_simpleETAURL;
    GEOURLInfo *_spatialLookupURL;
    GEOURLInfo *_webModuleBaseURL;
    GEOURLInfo *_wifiConnectionQualityProbeURL;
    GEOURLInfo *_wifiQualityTileURL;
    GEOURLInfo *_wifiQualityURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    struct {
        unsigned int has_dataSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abExperimentURL:1;
        unsigned int read_addressCorrectionInitURL:1;
        unsigned int read_addressCorrectionUpdateURL:1;
        unsigned int read_analyticsCohortSessionURL:1;
        unsigned int read_analyticsLongSessionURL:1;
        unsigned int read_analyticsSessionlessURL:1;
        unsigned int read_analyticsShortSessionURL:1;
        unsigned int read_announcementsURL:1;
        unsigned int read_authProxyURL:1;
        unsigned int read_backgroundDispatcherURL:1;
        unsigned int read_backgroundRevGeoURL:1;
        unsigned int read_batchReverseGeocoderURL:1;
        unsigned int read_batchTrafficProbeURL:1;
        unsigned int read_bluePOIDispatcherURL:1;
        unsigned int read_businessPortalBaseURL:1;
        unsigned int read_directionsURL:1;
        unsigned int read_dispatcherURL:1;
        unsigned int read_etaURL:1;
        unsigned int read_feedbackLookupURL:1;
        unsigned int read_feedbackSubmissionURL:1;
        unsigned int read_junctionImageServiceURL:1;
        unsigned int read_logMessageUsageURL:1;
        unsigned int read_logMessageUsageV3URL:1;
        unsigned int read_muninBaseURL:1;
        unsigned int read_polyLocationShiftURL:1;
        unsigned int read_proactiveRoutingURL:1;
        unsigned int read_problemCategoriesURL:1;
        unsigned int read_problemOptInURL:1;
        unsigned int read_problemStatusURL:1;
        unsigned int read_problemSubmissionURL:1;
        unsigned int read_realtimeTrafficProbeURL:1;
        unsigned int read_resourcesURL:1;
        unsigned int read_reverseGeocoderVersionsURL:1;
        unsigned int read_searchAttributionManifestURL:1;
        unsigned int read_simpleETAURL:1;
        unsigned int read_spatialLookupURL:1;
        unsigned int read_webModuleBaseURL:1;
        unsigned int read_wifiConnectionQualityProbeURL:1;
        unsigned int read_wifiQualityTileURL:1;
        unsigned int read_wifiQualityURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abExperimentURL:1;
        unsigned int wrote_addressCorrectionInitURL:1;
        unsigned int wrote_addressCorrectionUpdateURL:1;
        unsigned int wrote_analyticsCohortSessionURL:1;
        unsigned int wrote_analyticsLongSessionURL:1;
        unsigned int wrote_analyticsSessionlessURL:1;
        unsigned int wrote_analyticsShortSessionURL:1;
        unsigned int wrote_announcementsURL:1;
        unsigned int wrote_authProxyURL:1;
        unsigned int wrote_backgroundDispatcherURL:1;
        unsigned int wrote_backgroundRevGeoURL:1;
        unsigned int wrote_batchReverseGeocoderURL:1;
        unsigned int wrote_batchTrafficProbeURL:1;
        unsigned int wrote_bluePOIDispatcherURL:1;
        unsigned int wrote_businessPortalBaseURL:1;
        unsigned int wrote_directionsURL:1;
        unsigned int wrote_dispatcherURL:1;
        unsigned int wrote_etaURL:1;
        unsigned int wrote_feedbackLookupURL:1;
        unsigned int wrote_feedbackSubmissionURL:1;
        unsigned int wrote_junctionImageServiceURL:1;
        unsigned int wrote_logMessageUsageURL:1;
        unsigned int wrote_logMessageUsageV3URL:1;
        unsigned int wrote_muninBaseURL:1;
        unsigned int wrote_polyLocationShiftURL:1;
        unsigned int wrote_proactiveRoutingURL:1;
        unsigned int wrote_problemCategoriesURL:1;
        unsigned int wrote_problemOptInURL:1;
        unsigned int wrote_problemStatusURL:1;
        unsigned int wrote_problemSubmissionURL:1;
        unsigned int wrote_realtimeTrafficProbeURL:1;
        unsigned int wrote_resourcesURL:1;
        unsigned int wrote_reverseGeocoderVersionsURL:1;
        unsigned int wrote_searchAttributionManifestURL:1;
        unsigned int wrote_simpleETAURL:1;
        unsigned int wrote_spatialLookupURL:1;
        unsigned int wrote_webModuleBaseURL:1;
        unsigned int wrote_wifiConnectionQualityProbeURL:1;
        unsigned int wrote_wifiQualityTileURL:1;
        unsigned int wrote_wifiQualityURL:1;
        unsigned int wrote_dataSet:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOURLInfo *wifiQualityTileURL;
@property(readonly, nonatomic) BOOL hasWifiQualityTileURL;
- (void)_readWifiQualityTileURL;
@property(retain, nonatomic) GEOURLInfo *webModuleBaseURL;
@property(readonly, nonatomic) BOOL hasWebModuleBaseURL;
- (void)_readWebModuleBaseURL;
@property(retain, nonatomic) GEOURLInfo *analyticsSessionlessURL;
@property(readonly, nonatomic) BOOL hasAnalyticsSessionlessURL;
- (void)_readAnalyticsSessionlessURL;
@property(retain, nonatomic) GEOURLInfo *analyticsShortSessionURL;
@property(readonly, nonatomic) BOOL hasAnalyticsShortSessionURL;
- (void)_readAnalyticsShortSessionURL;
@property(retain, nonatomic) GEOURLInfo *analyticsLongSessionURL;
@property(readonly, nonatomic) BOOL hasAnalyticsLongSessionURL;
- (void)_readAnalyticsLongSessionURL;
@property(retain, nonatomic) GEOURLInfo *analyticsCohortSessionURL;
@property(readonly, nonatomic) BOOL hasAnalyticsCohortSessionURL;
- (void)_readAnalyticsCohortSessionURL;
@property(retain, nonatomic) GEOURLInfo *junctionImageServiceURL;
@property(readonly, nonatomic) BOOL hasJunctionImageServiceURL;
- (void)_readJunctionImageServiceURL;
@property(retain, nonatomic) GEOURLInfo *feedbackLookupURL;
@property(readonly, nonatomic) BOOL hasFeedbackLookupURL;
- (void)_readFeedbackLookupURL;
@property(retain, nonatomic) GEOURLInfo *feedbackSubmissionURL;
@property(readonly, nonatomic) BOOL hasFeedbackSubmissionURL;
- (void)_readFeedbackSubmissionURL;
@property(retain, nonatomic) GEOURLInfo *wifiQualityURL;
@property(readonly, nonatomic) BOOL hasWifiQualityURL;
- (void)_readWifiQualityURL;
@property(retain, nonatomic) GEOURLInfo *authProxyURL;
@property(readonly, nonatomic) BOOL hasAuthProxyURL;
- (void)_readAuthProxyURL;
@property(retain, nonatomic) GEOURLInfo *muninBaseURL;
@property(readonly, nonatomic) BOOL hasMuninBaseURL;
- (void)_readMuninBaseURL;
@property(retain, nonatomic) GEOURLInfo *wifiConnectionQualityProbeURL;
@property(readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
- (void)_readWifiConnectionQualityProbeURL;
@property(retain, nonatomic) GEOURLInfo *backgroundRevGeoURL;
@property(readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
- (void)_readBackgroundRevGeoURL;
@property(retain, nonatomic) GEOURLInfo *bluePOIDispatcherURL;
@property(readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
- (void)_readBluePOIDispatcherURL;
@property(retain, nonatomic) GEOURLInfo *backgroundDispatcherURL;
@property(readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
- (void)_readBackgroundDispatcherURL;
@property(retain, nonatomic) GEOURLInfo *logMessageUsageV3URL;
@property(readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
- (void)_readLogMessageUsageV3URL;
@property(retain, nonatomic) GEOURLInfo *proactiveRoutingURL;
@property(readonly, nonatomic) BOOL hasProactiveRoutingURL;
- (void)_readProactiveRoutingURL;
@property(retain, nonatomic) GEOURLInfo *batchTrafficProbeURL;
@property(readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
- (void)_readBatchTrafficProbeURL;
@property(retain, nonatomic) GEOURLInfo *realtimeTrafficProbeURL;
@property(readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
- (void)_readRealtimeTrafficProbeURL;
@property(retain, nonatomic) GEOURLInfo *spatialLookupURL;
@property(readonly, nonatomic) BOOL hasSpatialLookupURL;
- (void)_readSpatialLookupURL;
@property(retain, nonatomic) GEOURLInfo *logMessageUsageURL;
@property(readonly, nonatomic) BOOL hasLogMessageUsageURL;
- (void)_readLogMessageUsageURL;
@property(retain, nonatomic) GEOURLInfo *businessPortalBaseURL;
@property(readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
- (void)_readBusinessPortalBaseURL;
@property(retain, nonatomic) GEOURLInfo *abExperimentURL;
@property(readonly, nonatomic) BOOL hasAbExperimentURL;
- (void)_readAbExperimentURL;
@property(retain, nonatomic) GEOURLInfo *problemOptInURL;
@property(readonly, nonatomic) BOOL hasProblemOptInURL;
- (void)_readProblemOptInURL;
@property(retain, nonatomic) GEOURLInfo *dispatcherURL;
@property(readonly, nonatomic) BOOL hasDispatcherURL;
- (void)_readDispatcherURL;
@property(retain, nonatomic) GEOURLInfo *announcementsURL;
@property(readonly, nonatomic) BOOL hasAnnouncementsURL;
- (void)_readAnnouncementsURL;
@property(retain, nonatomic) GEOURLInfo *problemCategoriesURL;
@property(readonly, nonatomic) BOOL hasProblemCategoriesURL;
- (void)_readProblemCategoriesURL;
@property(retain, nonatomic) GEOURLInfo *reverseGeocoderVersionsURL;
@property(readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
- (void)_readReverseGeocoderVersionsURL;
@property(retain, nonatomic) GEOURLInfo *problemStatusURL;
@property(readonly, nonatomic) BOOL hasProblemStatusURL;
- (void)_readProblemStatusURL;
@property(retain, nonatomic) GEOURLInfo *problemSubmissionURL;
@property(readonly, nonatomic) BOOL hasProblemSubmissionURL;
- (void)_readProblemSubmissionURL;
@property(retain, nonatomic) GEOURLInfo *polyLocationShiftURL;
@property(readonly, nonatomic) BOOL hasPolyLocationShiftURL;
- (void)_readPolyLocationShiftURL;
@property(retain, nonatomic) GEOURLInfo *addressCorrectionUpdateURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
- (void)_readAddressCorrectionUpdateURL;
@property(retain, nonatomic) GEOURLInfo *addressCorrectionInitURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
- (void)_readAddressCorrectionInitURL;
@property(retain, nonatomic) GEOURLInfo *simpleETAURL;
@property(readonly, nonatomic) BOOL hasSimpleETAURL;
- (void)_readSimpleETAURL;
@property(retain, nonatomic) GEOURLInfo *batchReverseGeocoderURL;
@property(readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
- (void)_readBatchReverseGeocoderURL;
@property(retain, nonatomic) GEOURLInfo *etaURL;
@property(readonly, nonatomic) BOOL hasEtaURL;
- (void)_readEtaURL;
@property(retain, nonatomic) GEOURLInfo *directionsURL;
@property(readonly, nonatomic) BOOL hasDirectionsURL;
- (void)_readDirectionsURL;
@property(retain, nonatomic) GEOURLInfo *searchAttributionManifestURL;
@property(readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
- (void)_readSearchAttributionManifestURL;
@property(retain, nonatomic) GEOURLInfo *resourcesURL;
@property(readonly, nonatomic) BOOL hasResourcesURL;
- (void)_readResourcesURL;
@property(nonatomic) BOOL hasDataSet;
@property(nonatomic) unsigned int dataSet;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSURL *resourcesProxyURL;

@end

