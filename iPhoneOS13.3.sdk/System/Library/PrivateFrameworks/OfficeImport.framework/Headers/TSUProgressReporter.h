//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSProgress;

__attribute__((visibility("hidden")))
@interface TSUProgressReporter : NSObject <NSProgressReporting>
{
    NSProgress *_progress;
}

// - (void).cxx_destruct;
@property(readonly) NSProgress *progress;
- (id)initWithTotalUnitCount:(long long)arg1;

@end

