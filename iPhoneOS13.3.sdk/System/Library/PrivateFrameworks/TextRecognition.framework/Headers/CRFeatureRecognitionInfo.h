//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRTextFeature;

@interface CRFeatureRecognitionInfo : NSObject
{
    float _scale;
    CRTextFeature *_feature;
    CGRect _bounds;
    CGRect _rotatedROI;
}

+ (id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(CGRect)arg3 rotatedROI:(CGRect)arg4;
@property CGRect rotatedROI; // @synthesize rotatedROI=_rotatedROI;
@property CGRect bounds; // @synthesize bounds=_bounds;
@property float scale; // @synthesize scale=_scale;
@property(retain) CRTextFeature *feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;

@end

