//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface DESEncryptedData : PBCodable <NSCopying>
{
    NSString *_algorithm;
    NSData *_data;
    NSData *_encryptedKey;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int version; // @synthesize version=_version;
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
@property(readonly, nonatomic) BOOL hasAlgorithm;
@property(readonly, nonatomic) BOOL hasEncryptedKey;
@property(nonatomic) BOOL hasVersion;

@end

