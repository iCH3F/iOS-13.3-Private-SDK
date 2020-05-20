//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, PXImageRequester, UIView;

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile>
{
    NSUInteger _requestCount;
    long long _livePhotoRequestID;
    ISLivePhotoUIView *_livePhotoView;
    ISLivePhotoPlayer *_livePhotoPlayer;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    ISPlayerItem *__playerItem;
}

@property(retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
// - (void).cxx_destruct;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(NSUInteger)arg3 expectedRequestID:(long long)arg4;
- (CGSize)_targetSize;
- (void)_requestLivePhotoIfNeeded;
- (void)_updateLivePhotoView;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;

@end

