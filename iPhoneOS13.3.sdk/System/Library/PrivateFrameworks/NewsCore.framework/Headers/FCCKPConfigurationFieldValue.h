//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    BOOL _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) NSMutableArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long longValue; // @synthesize longValue=_longValue;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)listValuesAtIndex:(NSUInteger)arg1;
- (NSUInteger)listValuesCount;
- (void)addListValues:(id)arg1;
- (void)clearListValues;
- (id)fieldValuesAtIndex:(NSUInteger)arg1;
- (NSUInteger)fieldValuesCount;
- (void)addFieldValues:(id)arg1;
- (void)clearFieldValues;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasLongValue;
@property(nonatomic) BOOL hasBoolValue;
@property(readonly, nonatomic) BOOL hasBytesValue;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

