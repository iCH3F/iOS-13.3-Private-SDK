//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, _CSIRenditionBlockData, _CUIThemePixelRendition;

__attribute__((visibility("hidden")))
@interface CSIHelper : NSObject
{
    struct _slice slice;
    NSData *csiData;
    struct _csibitmap bmp;
    int renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *sharedBlockDataGray;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    NSString *blockDataCacheKeyGray;
    NSUInteger sourceRowbytes;
    unsigned int shouldCache:1;
    unsigned int usedForDataProvider:1;
    unsigned int _reserved:30;
}

@end

