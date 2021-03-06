//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSManagedObjectContext, NSSet, NSString, NSURL, PLManagedAsset, PLPhotoLibraryPathManager, PLResourceDataStoreOptions, PLResourceLocalAvailabilityRequestOptions, PLValidatedExternalResource;
@protocol PLAssetID, PLResource, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@protocol PLResourceDataStore <NSObject>
+ (NSArray *)supportedRecipes;
+ (BOOL)keyDataIsValid:(NSData *)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeClassID;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
- (void)requestStreamingURLForResource:(id <PLResource>)arg1 asset:(PLManagedAsset *)arg2 intent:(NSUInteger)arg3 inContext:(NSManagedObjectContext *)arg4 completion:(void (^)(NSError *, NSURL *, NSDate *))arg5;
- (BOOL)canStreamResource:(id <PLResource>)arg1;
- (BOOL)videoResource:(id <PLResource>)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id <PLResource>)arg2 asset:(PLManagedAsset *)arg3 inContext:(NSManagedObjectContext *)arg4 options:(id)arg5 completion:(void (^)(NSError *, PLInternalResource *))arg6;
- (void)cancelLocalAvailabilityChangeRequest:(NSUInteger)arg1;
- (NSUInteger)requestLocalAvailabilityChange:(short)arg1 forResource:(id <PLResource>)arg2 asset:(PLManagedAsset *)arg3 inContext:(NSManagedObjectContext *)arg4 options:(PLResourceLocalAvailabilityRequestOptions *)arg5 completion:(void (^)(NSError *, long long, PLInternalResource *))arg6;
- (BOOL)storeExternalResource:(PLValidatedExternalResource *)arg1 forAsset:(PLManagedAsset *)arg2 inContext:(NSManagedObjectContext *)arg3 options:(PLResourceDataStoreOptions *)arg4 error:(id )arg5 resultingResource:(id )arg6;
- (id <PLUniformTypeIdentifierIdentity>)guessUTIForExternalResource:(PLValidatedExternalResource *)arg1 forAssetKind:(short)arg2 managedObjectContext:(NSManagedObjectContext *)arg3;
- (BOOL)canStoreExternalResource:(PLValidatedExternalResource *)arg1;
- (NSArray *)virtualResourcesForAsset:(PLManagedAsset *)arg1;
- (NSSet *)updateDerivativeResourcesForAsset:(PLManagedAsset *)arg1 forLifecycleEvent:(unsigned int)arg2;
- (NSURL *)resourceURLForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (NSData *)resourceDataForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (id <PLResourceDataStoreKey>)keyFromKeyStruct:(const void )arg1;
- (NSString *)descriptionForSubtype:(long long)arg1;
- (NSString *)name;
- (id)initWithPathManager:(PLPhotoLibraryPathManager *)arg1;
@end

