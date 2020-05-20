//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _createsCertificateAuthority;
    BOOL _addsClientAuthAndServerAuthEKUs;
    unsigned int _hashingAlgorithm;
    NSString *_commonName;
    long long _keySizeInBits;
}

+ (BOOL)defaultCreatesCertificateAuthority;
+ (unsigned int)defaultHashingAlgorithm;
+ (long long)defaultKeySizeInBits;
+ (BOOL)supportsSecureCoding;
+ (id)configurationWithData:(id)arg1;
@property(nonatomic) BOOL addsClientAuthAndServerAuthEKUs; // @synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs;
@property(nonatomic) unsigned int hashingAlgorithm; // @synthesize hashingAlgorithm=_hashingAlgorithm;
@property(nonatomic) BOOL createsCertificateAuthority; // @synthesize createsCertificateAuthority=_createsCertificateAuthority;
@property(nonatomic) long long keySizeInBits; // @synthesize keySizeInBits=_keySizeInBits;
@property(readonly, copy, nonatomic) NSString *commonName; // @synthesize commonName=_commonName;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithCommonName:(id)arg1;
- (id)init;

@end

