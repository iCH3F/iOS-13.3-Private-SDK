//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface AirQualityIndexModel : NSObject
{
    double _fraction;
    NSString *_localizedIndex;
    UIColor *_tintColor;
    NSArray *_spectrum;
    NSArray *_spectrumTicks;
}

+ (id)airQualityIndexModelForConditions:(id)arg1 location:(id)arg2 indexNumberFormatter:(id)arg3 useRoundedVariant:(BOOL)arg4;
@property(readonly, nonatomic) NSArray *spectrumTicks; // @synthesize spectrumTicks=_spectrumTicks;
@property(readonly, nonatomic) NSArray *spectrum; // @synthesize spectrum=_spectrum;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) NSString *localizedIndex; // @synthesize localizedIndex=_localizedIndex;
@property(readonly, nonatomic) double fraction; // @synthesize fraction=_fraction;
// - (void).cxx_destruct;

@end

