//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISPlayerState : NSObject
{
    NSString *_diagnosticLabel;
    double _photoBlurRadius;
    double _videoAlpha;
    double _videoBlurRadius;
}

+ (id)outputInfoWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4;
@property(readonly, nonatomic) double videoBlurRadius; // @synthesize videoBlurRadius=_videoBlurRadius;
@property(readonly, nonatomic) double videoAlpha; // @synthesize videoAlpha=_videoAlpha;
@property(readonly, nonatomic) double photoBlurRadius; // @synthesize photoBlurRadius=_photoBlurRadius;
@property(readonly, nonatomic) NSString *diagnosticLabel; // @synthesize diagnosticLabel=_diagnosticLabel;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4;

@end

