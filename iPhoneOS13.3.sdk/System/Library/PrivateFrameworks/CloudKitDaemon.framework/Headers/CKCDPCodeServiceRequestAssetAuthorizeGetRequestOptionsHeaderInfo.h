//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptionsHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;
    NSString *_headerValue;
}

@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
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
@property(readonly, nonatomic) BOOL hasHeaderValue;
@property(readonly, nonatomic) BOOL hasHeaderKey;

@end

