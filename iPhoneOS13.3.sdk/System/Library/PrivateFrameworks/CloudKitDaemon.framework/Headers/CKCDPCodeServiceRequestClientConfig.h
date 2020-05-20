//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKCDPCodeServiceRequestServiceClientConfig;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying>
{
    CKCDPCodeServiceRequestServiceClientConfig *_config;
    int _serviceType;
    struct {
        unsigned int serviceType:1;
    } _has;
}

@property(retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config; // @synthesize config=_config;
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
@property(readonly, nonatomic) BOOL hasConfig;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;

@end

