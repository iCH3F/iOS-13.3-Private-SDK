//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCSharingModifyShareOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareURLOperation : BRCSharingModifyShareOperation
{
    NSString *_appName;
}

// - (void).cxx_destruct;
- (void)main;
- (void)_completedWithURL:(id)arg1 error:(id)arg2;
- (id)createActivity;
- (id)initWithShare:(id)arg1 zone:(id)arg2 appName:(id)arg3;
- (BOOL)shouldRetryForError:(id)arg1;

@end

