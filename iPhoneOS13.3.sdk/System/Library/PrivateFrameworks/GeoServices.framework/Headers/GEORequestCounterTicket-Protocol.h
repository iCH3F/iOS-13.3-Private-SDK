//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURLSessionTask;
@protocol GEORequestCounterTicket;

@protocol GEORequestCounterTicket <NSObject>
- (void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)startingRequestWithTask:(NSURLSessionTask *)arg1;
- (id <GEORequestCounterTicket>)createSubtask:(BOOL)arg1;
@end

