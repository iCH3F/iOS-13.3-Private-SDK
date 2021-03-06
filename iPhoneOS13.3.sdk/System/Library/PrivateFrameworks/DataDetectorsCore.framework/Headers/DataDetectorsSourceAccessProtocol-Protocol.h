//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSFileHandle, NSMutableArray, NSNumber, NSString;

@protocol DataDetectorsSourceAccessProtocol
- (void)writeSourceFromRawData:(NSMutableArray *)arg1 source:(NSNumber *)arg2 signature:(NSString *)arg3 withReply:(void (^)(BOOL))arg4;
- (void)writeSourceFromJSONFile:(NSFileHandle *)arg1 source:(NSNumber *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)filesForSourceRead:(NSArray *)arg1 resourceType:(NSUInteger)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)fileForSourceRead:(NSNumber *)arg1 resourceType:(NSUInteger)arg2 withReply:(void (^)(NSFileHandle *))arg3;
@end

