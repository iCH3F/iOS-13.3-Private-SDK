//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface TSKCenterTilingImageView : UIView
{
    UIImage *mLeftCapImage;
    UIImage *mCenterTileImage;
    UIImage *mRightCapImage;
}

@property(retain, nonatomic) UIImage *rightCapImage; // @synthesize rightCapImage=mRightCapImage;
@property(retain, nonatomic) UIImage *centerTileImage; // @synthesize centerTileImage=mCenterTileImage;
@property(retain, nonatomic) UIImage *leftCapImage; // @synthesize leftCapImage=mLeftCapImage;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;

@end
