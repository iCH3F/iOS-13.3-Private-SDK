//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding>
{
    NSData *_identifier;
    long long _timesPresented;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long timesPresented; // @synthesize timesPresented=_timesPresented;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

