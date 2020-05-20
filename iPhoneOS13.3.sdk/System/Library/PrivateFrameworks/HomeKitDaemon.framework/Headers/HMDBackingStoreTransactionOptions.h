//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDate, NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>
{
    BOOL _mustReplay;
    BOOL _mustPush;
    NSUInteger _source;
    NSUInteger _destination;
    NSDate *_committed;
    NSString *_label;
}

+ (id)stringForHMDBackingStoreDestination:(NSUInteger)arg1;
+ (id)stringForHMDBackingStoreTransactionSource:(NSUInteger)arg1;
+ (id)logCategory;
+ (id)defaultPreferencesOptions;
+ (id)defaultResidenceOptions;
+ (id)defaultMetadataCloudOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultIDSOptions;
+ (id)localPushBackOptions;
+ (id)cloudRequiresPushOptions;
+ (id)defaultCloudOptions;
+ (id)defaultXPCOptions;
+ (id)defaultLocalOptions;
+ (id)optionsWithSource:(NSUInteger)arg1 destination:(NSUInteger)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL mustPush; // @synthesize mustPush=_mustPush;
@property(readonly, nonatomic) BOOL mustReplay; // @synthesize mustReplay=_mustReplay;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSDate *committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) NSUInteger destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSUInteger source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (id)debugString:(BOOL)arg1;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(NSUInteger)arg1 destination:(NSUInteger)arg2;
- (id)initWithSource:(NSUInteger)arg1 destination:(NSUInteger)arg2 label:(id)arg3 mustReplay:(BOOL)arg4 mustPush:(BOOL)arg5;

@end

