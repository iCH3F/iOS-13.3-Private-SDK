//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTTaskGroup : NSObject
{
    NSArray *_tasks;
    id /* CDUnknownBlockType */ _completionBlock;
}

+ (id)taskGroupWithTasks:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
// - (void).cxx_destruct;
- (id)description;

@end

