//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoggingSupport/_OSLogIndexTimeRangable-Protocol.h>

@class _OSLogChunkStore, _OSLogIndex;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalog : NSObject <_OSLogIndexTimeRangable>
{
    _NSRange _chunkRange;
    _OSLogIndex *_index;
    struct catalog_s _catalog;
    struct tracev3_chunk_s _chunk;
    struct tracev3_chunk_s _fileHeader;
    _OSLogChunkStore *_store;
    NSUInteger _ot;
    NSUInteger _et;
}

@property(readonly, nonatomic) NSUInteger endTime; // @synthesize endTime=_et;
@property(readonly, nonatomic) NSUInteger oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) _OSLogChunkStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) struct tracev3_chunk_s fileHeader; // @synthesize fileHeader=_fileHeader;
@property(readonly, nonatomic) struct tracev3_chunk_s chunk; // @synthesize chunk=_chunk;
@property(readonly, nonatomic) __weak _OSLogIndex *index; // @synthesize index=_index;
// - (void).cxx_destruct;
- (void)enumerateSubchunksUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)unionWithRange:(_NSRange)arg1;
@property(readonly, nonatomic) struct catalog_s catalog; // @synthesize catalog=_catalog;
@property(readonly, nonatomic) const char bootUUID;
- (void)dealloc;
- (id)initWithStore:(id)arg1 index:(id)arg2 fileHeader:(struct tracev3_chunk_s )arg3 range:(_NSRange)arg4 chunk:(struct tracev3_chunk_s )arg5;

@end

