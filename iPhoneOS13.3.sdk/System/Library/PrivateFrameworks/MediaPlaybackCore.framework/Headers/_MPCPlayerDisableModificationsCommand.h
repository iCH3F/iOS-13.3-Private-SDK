//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerDisableModificationsCommand-Protocol.h>

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand>
{
    BOOL _disabled;
}

@property(nonatomic, getter=isDisabled, setter=_setDisabled:) BOOL disabled; // @synthesize disabled=_disabled;
- (id)setDisabled:(BOOL)arg1;

@end

