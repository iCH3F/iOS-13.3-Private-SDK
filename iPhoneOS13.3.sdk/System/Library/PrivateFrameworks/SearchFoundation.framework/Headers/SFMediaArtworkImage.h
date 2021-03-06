//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

#import <SearchFoundation/SFMediaArtworkImage-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMediaArtworkImage : SFImage <SFMediaArtworkImage, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int mediaEntityType:1;
    } _has;
    int _mediaEntityType;
    NSString *_persistentID;
    NSString *_spotlightIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasMediaEntityType;
- (id)initWithProtobuf:(id)arg1;

@end

