//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSNumber, NSString, PLPTPAssetHandle;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying>
{
    NSData *_event;
    PLPTPAssetHandle *_assetHandle;
    NSString *_filename;
    NSString *_createdFilename;
    BOOL _deleted;
    NSString *_originalFilename;
    NSString *_fullDirectoryPath;
    BOOL _exifAvailable;
    NSNumber *_objectCompressedSize;
    NSString *_originatingAssetID;
    NSNumber *_thumbOffset;
    NSNumber *_thumbCompressedSize;
    CGSize _imagePixSize;
    CGSize _thumbPixSize;
    long long _desiredOrientation;
    NSString *_modificationDateString;
    NSString *_captureDateString;
    NSString *_durationString;
    NSString *_locationString;
    NSString *_groupUUID;
    NSString *_burstUUID;
    BOOL _burstPicked;
    BOOL _burstFavorite;
    BOOL _burstFirstPicked;
    BOOL _highFrameRateVideo;
    BOOL _timeLapseVideo;
    NSString *_relatedUUID;
    NSString *_spatialOverCaptureGroupIdentifier;
    long long _conversionGroup;
}

@property(readonly, copy, nonatomic) NSData *event; // @synthesize event=_event;
@property(readonly, nonatomic) long long conversionGroup; // @synthesize conversionGroup=_conversionGroup;
@property(readonly, copy, nonatomic) NSString *relatedUUID; // @synthesize relatedUUID=_relatedUUID;
@property(readonly, nonatomic, getter=isTimeLapseVideo) BOOL timeLapseVideo; // @synthesize timeLapseVideo=_timeLapseVideo;
@property(readonly, nonatomic, getter=isHighFrameRateVideo) BOOL highFrameRateVideo; // @synthesize highFrameRateVideo=_highFrameRateVideo;
@property(readonly, nonatomic, getter=isBurstFirstPicked) BOOL burstFirstPicked; // @synthesize burstFirstPicked=_burstFirstPicked;
@property(readonly, nonatomic, getter=isBurstFavorite) BOOL burstFavorite; // @synthesize burstFavorite=_burstFavorite;
@property(readonly, nonatomic, getter=isBurstPicked) BOOL burstPicked; // @synthesize burstPicked=_burstPicked;
@property(readonly, copy, nonatomic) NSString *burstUUID; // @synthesize burstUUID=_burstUUID;
@property(readonly, copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier; // @synthesize spatialOverCaptureGroupIdentifier=_spatialOverCaptureGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(readonly, copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(readonly, copy, nonatomic) NSString *captureDateString; // @synthesize captureDateString=_captureDateString;
@property(readonly, copy, nonatomic) NSString *modificationDateString; // @synthesize modificationDateString=_modificationDateString;
@property(readonly, nonatomic) long long desiredOrientation; // @synthesize desiredOrientation=_desiredOrientation;
@property(readonly, nonatomic) CGSize thumbPixSize; // @synthesize thumbPixSize=_thumbPixSize;
@property(readonly, nonatomic) CGSize imagePixSize; // @synthesize imagePixSize=_imagePixSize;
@property(readonly, copy, nonatomic) NSNumber *thumbCompressedSize; // @synthesize thumbCompressedSize=_thumbCompressedSize;
@property(readonly, copy, nonatomic) NSNumber *thumbOffset; // @synthesize thumbOffset=_thumbOffset;
@property(readonly, copy, nonatomic) NSString *originatingAssetID; // @synthesize originatingAssetID=_originatingAssetID;
@property(readonly, copy, nonatomic) NSNumber *objectCompressedSize; // @synthesize objectCompressedSize=_objectCompressedSize;
@property(readonly, nonatomic, getter=isExifAvailable) BOOL exifAvailable; // @synthesize exifAvailable=_exifAvailable;
@property(readonly, copy, nonatomic) NSString *fullDirectoryPath; // @synthesize fullDirectoryPath=_fullDirectoryPath;
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic, getter=isDeleted) BOOL deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSString *createdFilename; // @synthesize createdFilename=_createdFilename;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) PLPTPAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
// - (void).cxx_destruct;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *cacheKey;
- (id)description;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPTPAsset:(id)arg1;

@end

