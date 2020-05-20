//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateExtraLargeProgressRingImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
    CLKProgressProvider *_progressProvider;
    long long _ringStyle;
}

@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(copy, nonatomic) CLKProgressProvider *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
// - (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end
