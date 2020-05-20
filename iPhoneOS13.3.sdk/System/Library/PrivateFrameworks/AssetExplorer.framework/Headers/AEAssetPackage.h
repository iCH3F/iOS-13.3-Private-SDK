//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetExplorer/PUCAMReviewAsset-Protocol.h>

@class AVAsset, AVAudioMix, CLLocation, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSURL, PFAssetAdjustments, PHLivePhoto, UIImage;
@protocol OS_dispatch_queue;

@interface AEAssetPackage : NSObject <PUCAMReviewAsset, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *__packageContentQueue;
    NSMutableDictionary *__contentQueue_finalURLs;
    NSMutableDictionary *__contentQueueSidecar;
    NSMutableSet *__contentQueue_suppressedTypes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableSet *_contentQueue_suppressedTypes; // @synthesize _contentQueue_suppressedTypes=__contentQueue_suppressedTypes;
@property(readonly, nonatomic) NSMutableDictionary *_contentQueueSidecar; // @synthesize _contentQueueSidecar=__contentQueueSidecar;
@property(readonly, nonatomic) NSMutableDictionary *_contentQueue_finalURLs; // @synthesize _contentQueue_finalURLs=__contentQueue_finalURLs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_packageContentQueue; // @synthesize _packageContentQueue=__packageContentQueue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)sidecarImageForKey:(id)arg1;
- (CDStruct_198678f7)sidecarTimeForKey:(id)arg1;
- (id)sidecarDateForKey:(id)arg1;
- (id)sidecarNumberForKey:(id)arg1;
- (id)sidecarPropertyListForKey:(id)arg1;
- (id)_sidecarObjectForKey:(id)arg1;
- (id)currentURLForType:(id)arg1;
- (id)suppressedTypesSnapshot;
- (id)sidecarSnapshot;
- (id)durableURLsSnapshotApplyingSuppression:(BOOL)arg1;
- (id)durableURLsSnapshot;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 suppressedTypes:(id)arg3 sidecar:(id)arg4;
- (id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 sidecar:(id)arg3;
- (BOOL)isURLSuppressedForType:(id)arg1;
- (id)reviewAssetFromPackageMetadata;
@property(readonly, nonatomic) AVAudioMix *providedAudioMix;
@property(readonly, nonatomic) AVAsset *providedAVAsset;
@property(readonly, nonatomic) PHLivePhoto *providedLivePhoto;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderVideoURL;
@property(readonly, nonatomic) NSURL *providedVideoURL;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderImageURL;
@property(readonly, nonatomic) NSURL *providedFullsizeImageURL;
@property(readonly, nonatomic) UIImage *providedPreviewImage;
@property(readonly, nonatomic) PFAssetAdjustments *assetAdjustments;
@property(readonly, nonatomic) NSDictionary *providedImageMetadata;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property(readonly, nonatomic) CDStruct_198678f7 livePhotoDuration;
@property(readonly, nonatomic) CDStruct_198678f7 livePhotoSynchronizedDisplayTime;
@property(readonly, nonatomic, getter=isHDR) BOOL HDR;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isLivePhotoPlaceholder) BOOL livePhotoPlaceholder;
@property(readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property(readonly, nonatomic) BOOL isAnimatedImage;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSUInteger pixelHeight;
@property(readonly, nonatomic) NSUInteger pixelWidth;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) NSUInteger mediaType;
@property(readonly, nonatomic) BOOL canPlayLoopingVideo;
@property(readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property(readonly, nonatomic) BOOL canPlayPhotoIris;
@property(readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property(readonly, nonatomic) NSUInteger deferredLogInfo;
- (NSUInteger)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisStillDisplayTime;
@property(readonly, nonatomic) NSUInteger originalFilesize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
- (BOOL)containsSuppressedLivePhoto;
- (BOOL)containsLivePhotoContent;
- (long long)mediaOrigin;
- (id)browserItemPayload;
- (long long)_sendSourceFromMediaOrigin:(long long)arg1;

@end

