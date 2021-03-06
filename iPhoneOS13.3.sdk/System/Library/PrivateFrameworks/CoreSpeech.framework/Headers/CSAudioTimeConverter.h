//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _anchorSampleCount;
    NSUInteger _anchorHostTime;
}

+ (id)sharedInstance;
@property(nonatomic) NSUInteger anchorHostTime; // @synthesize anchorHostTime=_anchorHostTime;
@property(nonatomic) NSUInteger anchorSampleCount; // @synthesize anchorSampleCount=_anchorSampleCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (NSUInteger)sampleCountFromHostTime:(NSUInteger)arg1;
- (NSUInteger)hostTimeFromSampleCount:(NSUInteger)arg1;
- (void)processSampleCount:(NSUInteger)arg1 hostTime:(NSUInteger)arg2;
- (id)init;

@end

