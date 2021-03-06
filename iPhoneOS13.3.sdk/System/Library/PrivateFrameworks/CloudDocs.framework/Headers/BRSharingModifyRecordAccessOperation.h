//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation
{
    NSURL *_fileURL;
    BOOL _allowAccess;
    id /* CDUnknownBlockType */ _allowAccessCompletionBlock;
    id /* CDUnknownBlockType */ _accessAllowedCompletionBlock;
}

@property(copy) id /* CDUnknownBlockType */ accessAllowedCompletionBlock; // @synthesize accessAllowedCompletionBlock=_accessAllowedCompletionBlock;
@property(copy) id /* CDUnknownBlockType */ allowAccessCompletionBlock; // @synthesize allowAccessCompletionBlock=_allowAccessCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2;

@end

