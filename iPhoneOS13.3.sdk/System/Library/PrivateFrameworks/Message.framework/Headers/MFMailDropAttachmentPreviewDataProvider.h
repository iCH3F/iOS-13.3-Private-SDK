//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachmentLibraryDataProvider.h>

@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider
{
}

+ (id)fullResolutionAttachmentURLForAttachmentURL:(id)arg1;
+ (id)fullResolutionAttachmentForAttachment:(id)arg1;
+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg1 withMessage:(id)arg2;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;

@end

