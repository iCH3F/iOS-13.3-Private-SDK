//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sequenceCounter;
    NSString *_platformIdentifier;
    PKSecureElementCertificateSet *_certificates;
    NSUInteger _certificateVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger certificateVersion; // @synthesize certificateVersion=_certificateVersion;
@property(readonly, copy, nonatomic) PKSecureElementCertificateSet *certificates; // @synthesize certificates=_certificates;
@property(readonly, copy, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly, copy, nonatomic) NSString *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(NSUInteger)arg4;

@end

