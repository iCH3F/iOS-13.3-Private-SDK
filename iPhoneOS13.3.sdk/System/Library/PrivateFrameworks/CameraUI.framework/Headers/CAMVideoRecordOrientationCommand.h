//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordOrientationCommand : CAMCaptureCommand
{
    BOOL __enabled;
}

@property(readonly, nonatomic, getter=_isEnabled) BOOL _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(BOOL)arg1;

@end

