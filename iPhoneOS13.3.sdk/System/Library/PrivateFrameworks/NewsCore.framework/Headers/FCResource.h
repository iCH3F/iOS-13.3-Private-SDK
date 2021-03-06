//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, FCInterestToken, NSString, NSURL, NTPBResourceRecord;

@interface FCResource : NSObject
{
    NSString *_resourceID;
    FCAssetHandle *_assetHandle;
    NTPBResourceRecord *_resourceRecord;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBResourceRecord *resourceRecord; // @synthesize resourceRecord=_resourceRecord;
@property(readonly, nonatomic) FCAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
@property(readonly, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnDisk) BOOL onDisk;
@property(readonly, nonatomic) NSURL *fileURL;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3;
- (id)initWithResourceID:(id)arg1 assetHandle:(id)arg2;

@end

