//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSFormAutoFillCorrectionSet : NSObject
{
    NSString *_domain;
    NSDictionary *_fingerprintsToClassifications;
    NSDictionary *_fingerprintsToCorrections;
}

@property(readonly, nonatomic) NSDictionary *fingerprintsToCorrections; // @synthesize fingerprintsToCorrections=_fingerprintsToCorrections;
@property(readonly, nonatomic) NSDictionary *fingerprintsToClassifications; // @synthesize fingerprintsToClassifications=_fingerprintsToClassifications;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2;
- (id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2;

@end

