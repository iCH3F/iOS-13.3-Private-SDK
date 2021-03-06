//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/_CATRemoteConnectionSendContext-Protocol.h>

@class NSData, NSInputStream, NSMutableData;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    NSUInteger mBytesRead;
    NSInputStream *_stream;
    NSUInteger _dataLength;
    NSUInteger _bufferSize;
    id _userInfo;
    NSUInteger _bytesWritten;
}

@property(nonatomic) NSUInteger bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSUInteger bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) NSUInteger dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, copy, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
// - (void).cxx_destruct;
- (id)bufferedDataWithError:(id )arg1;
@property(readonly, nonatomic) NSUInteger clientBytesWritten;
@property(readonly, nonatomic) BOOL hasBytesRemaining;
- (void)dealloc;
- (id)initWithStream:(id)arg1 length:(NSUInteger)arg2 bufferSize:(NSUInteger)arg3 userInfo:(id)arg4;

@end

