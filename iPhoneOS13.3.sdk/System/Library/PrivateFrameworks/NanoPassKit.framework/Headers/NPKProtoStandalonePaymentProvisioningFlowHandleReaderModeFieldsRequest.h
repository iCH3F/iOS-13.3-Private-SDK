//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_readerModeFields;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

+ (Class)readerModeFieldsType;
@property(retain, nonatomic) NSMutableArray *readerModeFields; // @synthesize readerModeFields=_readerModeFields;
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
- (id)readerModeFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)readerModeFieldsCount;
- (void)addReaderModeFields:(id)arg1;
- (void)clearReaderModeFields;

@end

