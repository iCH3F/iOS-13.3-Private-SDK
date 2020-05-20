//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _cellularDataState;
    int _deviceNetworkConnectivity;
    struct {
        unsigned int has_cellularDataState:1;
        unsigned int has_deviceNetworkConnectivity:1;
        unsigned int read_deviceCarrierName:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int wrote_deviceCarrierName:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_cellularDataState:1;
        unsigned int wrote_deviceNetworkConnectivity:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
- (int)StringAsCellularDataState:(id)arg1;
- (id)cellularDataStateAsString:(int)arg1;
@property(nonatomic) BOOL hasCellularDataState;
@property(nonatomic) int cellularDataState;
@property(retain, nonatomic) NSString *deviceCarrierName;
@property(readonly, nonatomic) BOOL hasDeviceCarrierName;
- (void)_readDeviceCarrierName;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceNetworkConnectivity;
@property(nonatomic) int deviceNetworkConnectivity;
- (id)initWithData:(id)arg1;
- (id)init;

@end

