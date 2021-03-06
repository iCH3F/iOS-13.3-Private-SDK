//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableData, NSString;

@interface WFGetExternalAddressOperation : NSOperation
{
    BOOL _useIPv6;
    NSString *_result;
    NSError *_error;
    NSMutableData *_data;
    struct __CFReadStream _stream;
}

@property(nonatomic) struct __CFReadStream stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(nonatomic) BOOL useIPv6; // @synthesize useIPv6=_useIPv6;
// - (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)update;
- (void)handleStreamEvent:(NSUInteger)arg1;
- (void)dealloc;
- (void)start;

@end

