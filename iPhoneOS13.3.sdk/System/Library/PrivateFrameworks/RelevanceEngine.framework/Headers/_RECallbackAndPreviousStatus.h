//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _RECallbackAndPreviousStatus : NSObject
{
    int _status;
    id /* CDUnknownBlockType */ _invalidationCallback;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationCallback; // @synthesize invalidationCallback=_invalidationCallback;
@property(nonatomic) int status; // @synthesize status=_status;
// - (void).cxx_destruct;

@end
