//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetTokenRequest, CKDAssetZone, NSArray, NSData, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDAssetBatch : NSObject
{
    BOOL _isFailed;
    BOOL _useMMCSEncryptionV2;
    NSMutableArray *_assetRecords;
    CKDAssetZone *_assetZone;
    NSData *_authPutRequest;
    NSData *_authPutResponse;
    NSDictionary *_authPutResponseHeaders;
    CKDAssetTokenRequest *_assetTokenRequest;
}

@property(nonatomic) BOOL useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) __weak CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) BOOL isFailed; // @synthesize isFailed=_isFailed;
@property(retain, nonatomic) NSDictionary *authPutResponseHeaders; // @synthesize authPutResponseHeaders=_authPutResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) CKDAssetZone *assetZone; // @synthesize assetZone=_assetZone;
@property(retain, nonatomic) NSMutableArray *assetRecords; // @synthesize assetRecords=_assetRecords;
// - (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (BOOL)isEmptyOfRereferencesAssets;
- (BOOL)isEmptyOfAssets;
- (BOOL)isRereferenceAssetBatch;
- (BOOL)isPackageSectionBatch;
- (id)firstMMCSItemError;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1;
@property(readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;
- (id)allMMCSAndSectionItems;
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
@property(readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int size;
@property(readonly) unsigned int sizeUpperBound;
- (void)addAssetRecord:(id)arg1;
- (id)initWithAssetZone:(id)arg1;

@end

