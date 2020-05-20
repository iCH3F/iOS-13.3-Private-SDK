//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
{
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;
}

- (id)deniedAction;
- (void)setDeniedAction:(id)arg1;
- (id)confirmedAction;
- (void)setConfirmedAction:(id)arg1;
- (void)_setConfirmed:(BOOL)arg1;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)init;

@end

