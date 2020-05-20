//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _certified;
    int _credentialType;
    unsigned int _duration;
    int _errorCode;
    unsigned int _retryCount;
    int _transportType;
    AWDHomeKitVendorInformation *_vendorDetails;
    BOOL _isAdd;
    BOOL _isAddWithOwnershipProof;
    BOOL _isAddedViaWAC;
    BOOL _isNetworkRouterAdd;
    BOOL _isNetworkRouterReplace;
    BOOL _isSecureWAC;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int credentialType:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int retryCount:1;
        unsigned int transportType:1;
        unsigned int isAdd:1;
        unsigned int isAddWithOwnershipProof:1;
        unsigned int isAddedViaWAC:1;
        unsigned int isNetworkRouterAdd:1;
        unsigned int isNetworkRouterReplace:1;
        unsigned int isSecureWAC:1;
    } _has;
}

@property(nonatomic) BOOL isNetworkRouterReplace; // @synthesize isNetworkRouterReplace=_isNetworkRouterReplace;
@property(nonatomic) BOOL isNetworkRouterAdd; // @synthesize isNetworkRouterAdd=_isNetworkRouterAdd;
@property(nonatomic) BOOL isAddWithOwnershipProof; // @synthesize isAddWithOwnershipProof=_isAddWithOwnershipProof;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) BOOL isSecureWAC; // @synthesize isSecureWAC=_isSecureWAC;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) BOOL isAddedViaWAC; // @synthesize isAddedViaWAC=_isAddedViaWAC;
@property(nonatomic) BOOL isAdd; // @synthesize isAdd=_isAdd;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsNetworkRouterReplace;
@property(nonatomic) BOOL hasIsNetworkRouterAdd;
@property(nonatomic) BOOL hasIsAddWithOwnershipProof;
- (int)StringAsCredentialType:(id)arg1;
- (id)credentialTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasCredentialType;
@property(nonatomic) int credentialType; // @synthesize credentialType=_credentialType;
@property(nonatomic) BOOL hasRetryCount;
@property(nonatomic) BOOL hasIsSecureWAC;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) BOOL hasVendorDetails;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) BOOL hasIsAddedViaWAC;
@property(nonatomic) BOOL hasIsAdd;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasTimestamp;

@end

