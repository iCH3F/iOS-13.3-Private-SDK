//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PLJournal;

@interface PLJournalFile : NSObject
{
    NSURL *_url;
    PLJournal *_journal;
}

+ (BOOL)fileExistsAtURL:(id)arg1;
+ (BOOL)writeData:(id)arg1 toURL:(id)arg2 atomically:(BOOL)arg3 error:(id )arg4;
+ (BOOL)moveURL:(id)arg1 toURL:(id)arg2 error:(id )arg3;
+ (BOOL)createEmptyURL:(id)arg1 error:(id )arg2;
+ (BOOL)removeURL:(id)arg1 error:(id )arg2;
@property(nonatomic) __weak PLJournal *journal; // @synthesize journal=_journal;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (BOOL)fileExists;
@property(readonly, nonatomic) NSUInteger allocatedFileSize;
@property(readonly, nonatomic) NSUInteger fileSize;
- (BOOL)moveToURL:(id)arg1 error:(id )arg2;
- (BOOL)createEmptyFileWithError:(id )arg1;
- (BOOL)removeFileWithError:(id )arg1;
- (BOOL)appendEntries:(id)arg1 error:(id )arg2;
- (BOOL)openForWritingUsingBlock:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (BOOL)enumerateEntriesUsingBlock:(id /* CDUnknownBlockType */)arg1 decodePayload:(BOOL)arg2 error:(id )arg3;
- (BOOL)openForReadingUsingBlock:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (id)initWithURL:(id)arg1 journal:(id)arg2;

@end

