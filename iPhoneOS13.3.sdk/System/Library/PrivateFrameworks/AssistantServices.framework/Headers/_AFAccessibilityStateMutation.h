//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAccessibilityStateMutating-Protocol.h>

@class AFAccessibilityState;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating>
{
    AFAccessibilityState *_baseModel;
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsVoiceOverTouchEnabled:1;
        unsigned int hasIsVibrationDisabled:1;
    } _mutationFlags;
}

// - (void).cxx_destruct;
- (id)generate;
- (void)setIsVibrationDisabled:(long long)arg1;
- (void)setIsVoiceOverTouchEnabled:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

@end

