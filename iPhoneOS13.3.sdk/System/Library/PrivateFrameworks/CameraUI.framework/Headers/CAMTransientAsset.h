//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/PUTransientDisplayAsset-Protocol.h>

@class CLLocation, NSDate, NSString, NSURL, UIImage;

@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset>
{
    BOOL _canPlayPhotoIris;
    BOOL _canPlayLoopingVideo;
    BOOL _isPhotoIrisPlaceholder;
    BOOL _HDR;
    BOOL _representsBurst;
    NSDate *_localCreationDate;
    NSString *_uuid;
    NSUInteger _mediaType;
    NSUInteger _mediaSubtypes;
    long long _playbackStyle;
    long long _playbackVariation;
    NSUInteger _pixelWidth;
    NSUInteger _pixelHeight;
    double _duration;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSURL *_persistenceURL;
    UIImage *_placeholderImage;
    NSString *_burstIdentifier;
    NSUInteger _numberOfRepresentedAssets;
    CDStruct_1b6d18a9 _photoIrisStillDisplayTime;
    CDStruct_1b6d18a9 _photoIrisVideoDuration;
}

@property(readonly, nonatomic) NSUInteger numberOfRepresentedAssets; // @synthesize numberOfRepresentedAssets=_numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic) BOOL representsBurst; // @synthesize representsBurst=_representsBurst;
@property(readonly, nonatomic, getter=isHDR) BOOL HDR; // @synthesize HDR=_HDR;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, copy, nonatomic) NSURL *persistenceURL; // @synthesize persistenceURL=_persistenceURL;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration; // @synthesize photoIrisVideoDuration=_photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime; // @synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime;
@property(readonly, nonatomic) BOOL isPhotoIrisPlaceholder; // @synthesize isPhotoIrisPlaceholder=_isPhotoIrisPlaceholder;
@property(readonly, nonatomic) BOOL canPlayLoopingVideo; // @synthesize canPlayLoopingVideo=_canPlayLoopingVideo;
@property(readonly, nonatomic) BOOL canPlayPhotoIris; // @synthesize canPlayPhotoIris=_canPlayPhotoIris;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSUInteger pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) NSUInteger pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) long long playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(readonly, nonatomic) NSUInteger mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) NSUInteger mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
// - (void).cxx_destruct;
- (NSUInteger)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) BOOL hasPhotoColorAdjustments;
- (id)initWithAsset:(id)arg1 convertible:(id)arg2;
- (void)_populateVideoTransientAssetFromConvertible:(id)arg1;
- (void)_populateStillImageTransientAssetFromConvertible:(id)arg1;
- (id)initWithAsset:(id)arg1 uuid:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSUInteger deferredLogInfo;
@property(readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property(readonly, nonatomic) BOOL isAnimatedImage;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSUInteger originalFilesize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;

@end

