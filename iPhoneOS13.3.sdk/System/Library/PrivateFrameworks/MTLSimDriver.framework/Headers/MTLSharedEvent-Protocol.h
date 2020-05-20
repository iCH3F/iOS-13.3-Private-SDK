//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLEvent-Protocol.h>

@class MTLSharedEventHandle, MTLSharedEventListener;

@protocol MTLSharedEvent <MTLEvent>
@property NSUInteger signaledValue;
- (MTLSharedEventHandle *)newSharedEventHandle;
- (void)notifyListener:(MTLSharedEventListener *)arg1 atValue:(NSUInteger)arg2 block:(void (^)(id <MTLSharedEvent>, NSUInteger))arg3;
@end

