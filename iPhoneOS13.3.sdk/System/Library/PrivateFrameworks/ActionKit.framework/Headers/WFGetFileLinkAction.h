//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFStorageServiceInputAction.h>

@interface WFGetFileLinkAction : WFStorageServiceInputAction
{
}

- (void)uploadWorkflowRecords:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)uploadInput:(id)arg1 storageService:(id)arg2 useShortURL:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end

