//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoEffect : NSObject
{
    BOOL _isPortrait;
    BOOL _isLegacy;
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
    long long _lightingVersion;
}

+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (NSUInteger)_indexOfEffectWithIdentifier:(id)arg1;
+ (BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (BOOL)isEffectNoneForIdentifier:(id)arg1;
+ (id)allSupportedEffects;
+ (id)standardSupportedEffects;
+ (id)allEffects;
+ (id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
@property(readonly, nonatomic) BOOL isLegacy; // @synthesize isLegacy=_isLegacy;
@property(readonly, nonatomic) BOOL isPortrait; // @synthesize isPortrait=_isPortrait;
@property(readonly, nonatomic) long long lightingVersion; // @synthesize lightingVersion=_lightingVersion;
@property(readonly, copy, nonatomic) NSString *CIFilterName; // @synthesize CIFilterName=_CIFilterName;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
// - (void).cxx_destruct;
- (id)newEffectFilter;
@property(readonly, nonatomic) long long latestVersion;
- (id)description;

@end

