//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/BUZipArchive.h>

@class BUZipEntry;

@interface BUContainedZipArchive : BUZipArchive
{
    BUZipArchive *_zipArchive;
    BUZipEntry *_entry;
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(NSUInteger)arg3 error:(id )arg4;
// - (void).cxx_destruct;
- (BOOL)isValid;
- (id)newArchiveReadChannel;
- (NSUInteger)archiveLength;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;
- (id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2;
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(NSUInteger)arg3;

@end

