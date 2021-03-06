//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDDeviceUISupport-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class NSSet, NSString, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>
{
    NSString *_address;
    NSString *_build;
    NSString *_color;
    NSString *_deviceClass;
    NSString *_enclosureColor;
    NSString *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_productType;
    NSString *_platform;
    NSSet *_capabilities;
    long long _status;
    long long _transport;
    long long _remoteTransport;
    SFDevice *_sfDevice;
    NSString *__hashingKey;
}

+ (id)modelForProductType:(id)arg1;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)nilSafeDevice;
+ (id)_currentDeviceId;
+ (id)idsDeviceWithDevice:(id)arg1 address:(id)arg2;
+ (id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3;
+ (id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2;
+ (id)deviceWithDictionary:(id)arg1;
+ (id)currentDevice;
+ (BOOL)supportsSecureCoding;
+ (id)archivedClasses;
@property(retain, nonatomic) NSString *_hashingKey; // @synthesize _hashingKey=__hashingKey;
@property(retain) SFDevice *sfDevice; // @synthesize sfDevice=_sfDevice;
@property long long remoteTransport; // @synthesize remoteTransport=_remoteTransport;
@property long long transport; // @synthesize transport=_transport;
@property long long status; // @synthesize status=_status;
@property(retain) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSString *productType; // @synthesize productType=_productType;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *model; // @synthesize model=_model;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *enclosureColor; // @synthesize enclosureColor=_enclosureColor;
@property(retain) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain) NSString *color; // @synthesize color=_color;
@property(retain) NSString *build; // @synthesize build=_build;
@property(retain) NSString *address; // @synthesize address=_address;
// - (void).cxx_destruct;
- (id)hashingKeyForTempDevice;
- (BOOL)isTemporaryDevice;
- (BOOL)hasCapabilities:(id)arg1;
- (BOOL)isMoreCompleteThan:(id)arg1;
- (BOOL)isLikeDevice:(id)arg1;
- (id)hashingKey;
- (BOOL)isEqualToDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;
- (id)publicLogDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isCurrentDevice;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6;
- (id)imageURLForScale:(float)arg1;
- (id)imageData;
- (void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(id /* CDUnknownBlockType */)arg2;

@end

