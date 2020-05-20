//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying>
{
    long long _reservedSize;
    long long _uploadURLExpirationTimeSeconds;
    NSString *_uploadURL;
    struct {
        unsigned int reservedSize:1;
        unsigned int uploadURLExpirationTimeSeconds:1;
    } _has;
}

@property(nonatomic) long long uploadURLExpirationTimeSeconds; // @synthesize uploadURLExpirationTimeSeconds=_uploadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(nonatomic) long long reservedSize; // @synthesize reservedSize=_reservedSize;
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
@property(nonatomic) BOOL hasUploadURLExpirationTimeSeconds;
@property(readonly, nonatomic) BOOL hasUploadURL;
@property(nonatomic) BOOL hasReservedSize;

@end

