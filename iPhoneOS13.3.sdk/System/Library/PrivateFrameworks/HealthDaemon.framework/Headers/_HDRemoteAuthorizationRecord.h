//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject
{
    HKAuthorizationRequestRecord *_record;
    id /* CDUnknownBlockType */ _requestSentHandler;
    id /* CDUnknownBlockType */ _requestFinishedHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ requestFinishedHandler; // @synthesize requestFinishedHandler=_requestFinishedHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ requestSentHandler; // @synthesize requestSentHandler=_requestSentHandler;
@property(readonly, nonatomic) HKAuthorizationRequestRecord *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)initWithRequestRecord:(id)arg1 requestSentHandler:(id /* CDUnknownBlockType */)arg2 requestFinishedHandler:(id /* CDUnknownBlockType */)arg3;

@end
