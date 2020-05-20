//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>
{
}

+ (id)options;
+ (BOOL)supportsSecureCoding;
- (id)formattedText;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

