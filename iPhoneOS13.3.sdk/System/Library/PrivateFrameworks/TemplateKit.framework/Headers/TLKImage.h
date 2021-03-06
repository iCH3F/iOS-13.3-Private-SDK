//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class UIImage;

@interface TLKImage : TLKObject
{
    BOOL _isTemplate;
    BOOL _shouldCropToCircle;
    BOOL _useFastPathShadow;
    UIImage *_uiImage;
    double _cornerRadius;
    CGSize _size;
}

@property(nonatomic) BOOL useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL shouldCropToCircle; // @synthesize shouldCropToCircle=_shouldCropToCircle;
@property(nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
// - (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (id)init;
@property(readonly, nonatomic) UIImage *uiImageToRender;

@end

