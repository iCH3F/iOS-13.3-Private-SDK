//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHManager, PSConfirmationSpecifier, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIResetStatisticsGroup : NSObject
{
    id <PSUIResetStatisticsGroupDelegate> _delegate;
    NSUInteger _policy;
    PSSpecifier *_groupSpecifier;
    PSConfirmationSpecifier *_resetButtonSpecifier;
    CHManager *_callHistoryManager;
}

@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier; // @synthesize resetButtonSpecifier=_resetButtonSpecifier;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) NSUInteger policy; // @synthesize policy=_policy;
@property(nonatomic) __weak id <PSUIResetStatisticsGroupDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)specifiers;
- (id)initWithPolicy:(NSUInteger)arg1;

@end

