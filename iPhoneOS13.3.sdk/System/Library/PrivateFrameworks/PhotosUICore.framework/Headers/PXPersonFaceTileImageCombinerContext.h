//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject
{
    BOOL _isLTR;
    double _displayScale;
    double _imageSize;
    double _imageOffset;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
}

@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double imageOffset; // @synthesize imageOffset=_imageOffset;
@property(readonly, nonatomic) double imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) BOOL isLTR; // @synthesize isLTR=_isLTR;
@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
// - (void).cxx_destruct;
- (id)initWithDisplayScale:(double)arg1 isLTR:(BOOL)arg2 imageSize:(double)arg3 imageOffset:(double)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(double)arg7;

@end

