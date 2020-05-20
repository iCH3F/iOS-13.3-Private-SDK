//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFFileStorageServiceOperation;

@interface WFSaveFileAction : WFStorageServiceAction
{
    id <WFFileStorageServiceOperation> _saveOperation;
}

@property(retain, nonatomic) id <WFFileStorageServiceOperation> saveOperation; // @synthesize saveOperation=_saveOperation;
// - (void).cxx_destruct;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (id)showPickerKey;
- (id)filePathKey;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end

