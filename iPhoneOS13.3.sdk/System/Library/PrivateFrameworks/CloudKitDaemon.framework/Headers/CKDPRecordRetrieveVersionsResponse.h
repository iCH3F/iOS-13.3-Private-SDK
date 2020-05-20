//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_recordVersions;
    BOOL _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

+ (Class)recordVersionsType;
@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
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
- (id)recordVersionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordVersionsCount;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
@property(nonatomic) BOOL hasIsDeleted;

@end

