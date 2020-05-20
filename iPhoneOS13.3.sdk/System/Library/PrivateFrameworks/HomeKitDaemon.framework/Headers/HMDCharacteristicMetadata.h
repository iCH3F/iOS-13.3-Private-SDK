//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, HMFDumpState>
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSNumber *_maxLength;
    NSString *_format;
    NSString *_units;
    NSString *_manufacturerDescription;
    NSArray *_validValues;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidMetadata:(id)arg1;
@property(copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(readonly, copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(readonly, copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getMetadataDictionary;
- (id)_descriptionDetails;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (BOOL)configureWithCharacteristicMetadata:(id)arg1;

@end

