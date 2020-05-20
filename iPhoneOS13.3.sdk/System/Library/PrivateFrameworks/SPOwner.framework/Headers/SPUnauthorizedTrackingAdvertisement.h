//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate;

@interface SPUnauthorizedTrackingAdvertisement : NSObject <NSSecureCoding>
{
    unsigned char _status;
    NSData *_advertisementData;
    NSData *_reserved;
    long long _rssi;
    NSDate *_scanDate;
    NSData *_data;
    NSData *__address;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *_address; // @synthesize _address=__address;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDate *scanDate; // @synthesize scanDate=_scanDate;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *address;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;

@end

