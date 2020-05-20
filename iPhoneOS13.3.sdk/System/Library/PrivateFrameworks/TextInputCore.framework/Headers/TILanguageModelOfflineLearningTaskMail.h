//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@class NSCharacterSet, NSSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask
{
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id <TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;
- (id)dataSource;
// - (void).cxx_destruct;
- (id)forwardedMessageSeparators;
- (id)linePaddingCharacters;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2;

@end

