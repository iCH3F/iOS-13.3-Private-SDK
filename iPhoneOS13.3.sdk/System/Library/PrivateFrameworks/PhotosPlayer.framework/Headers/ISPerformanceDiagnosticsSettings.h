//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

__attribute__((visibility("hidden")))
@interface ISPerformanceDiagnosticsSettings : ISSettings
{
    BOOL _shouldTracePerformance;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) BOOL shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;

@end

