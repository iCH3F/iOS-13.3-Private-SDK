//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TMLArray : NSObject
{
    NSMutableArray *_array;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
// - (void).cxx_destruct;
- (void)removeAllObjects;
- (void)remove:(NSUInteger)arg1;
- (void)append:(id)arg1;
- (void)set:(NSUInteger)arg1 value:(id)arg2;
- (id)get:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

