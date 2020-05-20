//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_overrideValue;
    NSNumber *_currentValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)sourceWithUserIdentity:(id)arg1;
+ (id)staticSourceWithValue:(id)arg1;
+ (id)localDeviceSource;
@property(readonly, copy, nonatomic) NSNumber *currentValue; // @synthesize currentValue=_currentValue;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *overrideValue; // @synthesize overrideValue=_overrideValue;
- (id)_init;

@end
