//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAuxiliaryImage-Protocol.h>

@class AVPortraitEffectsMatte;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage>
{
    long long _auxiliaryImageType;
    AVPortraitEffectsMatte *_avPortraitEffectsMatte;
}

@property(readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte; // @synthesize avPortraitEffectsMatte=_avPortraitEffectsMatte;
@property(readonly) long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
// - (void).cxx_destruct;
- (struct __CVBuffer )cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id )arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer )arg1 error:(id )arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)underlyingAVPortraitEffectsMatte;
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1;

@end

