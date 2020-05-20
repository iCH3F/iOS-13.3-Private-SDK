//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIColor, UIImage, UIImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView
{
    UIImage _image;
    UIColor _tintColor;
    UIImageView _imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)performSetup;

@end

