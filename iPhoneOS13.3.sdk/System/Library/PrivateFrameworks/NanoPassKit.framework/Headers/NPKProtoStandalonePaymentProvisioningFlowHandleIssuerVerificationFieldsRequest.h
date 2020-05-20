//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    NSMutableArray *_verificationFields;
}

+ (Class)verificationFieldsType;
@property(retain, nonatomic) NSMutableArray *verificationFields; // @synthesize verificationFields=_verificationFields;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
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
- (id)verificationFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)verificationFieldsCount;
- (void)addVerificationFields:(id)arg1;
- (void)clearVerificationFields;

@end

