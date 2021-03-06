//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPAsset, NSString;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying>
{
    long long _tokenExpiration;
    CKDPAsset *_asset;
    NSString *_token;
    struct {
        unsigned int tokenExpiration:1;
    } _has;
}

@property(nonatomic) long long tokenExpiration; // @synthesize tokenExpiration=_tokenExpiration;
@property(retain, nonatomic) CKDPAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
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
@property(nonatomic) BOOL hasTokenExpiration;
@property(readonly, nonatomic) BOOL hasAsset;
@property(readonly, nonatomic) BOOL hasToken;

@end

