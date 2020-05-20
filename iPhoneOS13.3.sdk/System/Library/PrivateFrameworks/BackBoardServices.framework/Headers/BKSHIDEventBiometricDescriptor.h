//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor
{
    unsigned int _biometricEventType;
}

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int biometricEventType; // @synthesize biometricEventType=_biometricEventType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBiometricEventType:(unsigned int)arg1;

@end

