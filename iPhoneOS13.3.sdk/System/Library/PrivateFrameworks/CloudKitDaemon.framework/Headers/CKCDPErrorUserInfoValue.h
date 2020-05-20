//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _int64Value;
    NSData *_bytesValue;
    NSString *_stringValue;
    BOOL _boolValue;
    CDStruct_f7459c01 _has;
}

@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
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
@property(readonly, nonatomic) BOOL hasBytesValue;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasBoolValue;
@property(nonatomic) BOOL hasInt64Value;
@property(nonatomic) BOOL hasDoubleValue;

@end

