//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface _IDSDevice : NSObject
{
    NSDictionary *_info;
    CUTWeakReference *_account;
    CUTWeakReference *_serviceReference;
    int _nearbyToken;
    BOOL _nearby;
    BOOL _connected;
    BOOL _immutableCloudConnected;
    BOOL _cloudConnected;
}

// - (void).cxx_destruct;
- (void)_setService:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_cloudConnectedStateChanged;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (void)_addIdentity:(id)arg1;
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) BOOL isHSATrusted;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) BOOL supportsPhoneCalls;
@property(readonly, nonatomic) BOOL supportsMMSRelay;
@property(readonly, nonatomic) BOOL supportsSMSRelay;
@property(readonly, nonatomic) BOOL supportsApplePay;
@property(readonly, nonatomic) BOOL supportsHandoff;
@property(readonly, nonatomic) BOOL supportsTethering;
@property(readonly, nonatomic) BOOL supportsiCloudPairing;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) NSUInteger serviceMinCompatibilityVersion;
@property(readonly, nonatomic) NSUInteger maxCompatibilityVersion;
@property(readonly, nonatomic) NSUInteger minCompatibilityVersion;
@property(readonly, nonatomic) NSUInteger pairingProtocolVersion;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL isLocallyPaired;
@property(readonly, nonatomic) BOOL isDefaultPairedDevice;
@property(readonly, nonatomic) BOOL locallyPresent;
@property(readonly, nonatomic, getter=isCloudConnected) BOOL cloudConnected;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, nonatomic, getter=isNearby) BOOL nearby;
- (id)description;
- (id)fullDescription;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

