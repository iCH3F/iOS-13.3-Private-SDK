//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@protocol OS_dispatch_queue, TSPComponentWriteChannel;

__attribute__((visibility("hidden")))
@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    char _uncompressedBuffer[65536];
    NSUInteger _uncompressedLength;
    id <TSPComponentWriteChannel> _writeChannel;
}

// - (void).cxx_destruct;
- (void)close;
- (void)writeBlock;
- (void)writeData:(id)arg1;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1;

@end

