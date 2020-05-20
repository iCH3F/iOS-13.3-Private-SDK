//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICDocCamDocumentInfoCollection, NSString;

__attribute__((visibility("hidden")))
@interface DCActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>
{
    ICDocCamDocumentInfoCollection *_docInfoCollection;
}

@property(nonatomic) __weak ICDocCamDocumentInfoCollection *docInfoCollection; // @synthesize docInfoCollection=_docInfoCollection;
// - (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
@property(readonly, copy, nonatomic) NSString *attachmentTypeUTI;
- (id)initWithDocumentInfoCollection:(id)arg1;

@end
