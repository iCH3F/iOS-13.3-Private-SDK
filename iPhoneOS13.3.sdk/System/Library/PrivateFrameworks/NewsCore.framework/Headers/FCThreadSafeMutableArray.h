//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableArray;

@interface FCThreadSafeMutableArray : NSObject
{
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *readOnlyArray;
- (void)enumerateObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

