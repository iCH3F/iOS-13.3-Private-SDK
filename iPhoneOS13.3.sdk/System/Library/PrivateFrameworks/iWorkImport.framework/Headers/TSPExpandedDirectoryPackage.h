//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPDirectoryPackage.h>

__attribute__((visibility("hidden")))
@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage
{
}

+ (BOOL)isValidPackageAtURL:(id)arg1;
+ (BOOL)hasZipArchive;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2;

@end

