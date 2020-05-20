//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <AvatarUI/AVTMSStickerViewDelegate-Protocol.h>

@class AVTMSStickerView, NSUUID, UIImageView;
@protocol AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate>
{
    BOOL _stickerViewIsAnimating;
    NSUUID *_displaySessionUUID;
    id <AVTStickerCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    AVTMSStickerView *_stickerView;
    CGSize _fullImageSize;
    CGRect _clippingRect;
}

+ (double)imageInsetForWidth:(double)arg1;
+ (id)cellIdentifier;
@property(nonatomic) CGSize fullImageSize; // @synthesize fullImageSize=_fullImageSize;
@property(nonatomic) BOOL stickerViewIsAnimating; // @synthesize stickerViewIsAnimating=_stickerViewIsAnimating;
@property(readonly, nonatomic) AVTMSStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <AVTStickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
// - (void).cxx_destruct;
- (void)stickerViewWasTapped:(id)arg1;
- (void)stickerViewDidBeginPeel:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithImage:(id)arg1 sticker:(id)arg2 animated:(BOOL)arg3;
- (CGSize)imageSizeFromURL:(id)arg1;
- (CGRect)stickerViewFrameForImageSize:(CGSize)arg1 clippingRect:(CGRect)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property(nonatomic) BOOL allowsPeel;
- (id)initWithFrame:(CGRect)arg1;

@end

