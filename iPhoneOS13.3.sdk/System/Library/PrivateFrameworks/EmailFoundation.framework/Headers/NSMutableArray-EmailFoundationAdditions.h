//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (EmailFoundationAdditions)
- (void)ef_trimToCount:(NSUInteger)arg1 fromStart:(BOOL)arg2;
- (void)ef_addOptionalObject:(id)arg1;
- (NSUInteger)ef_removeObject:(id)arg1 usingSortFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg2 context:(void )arg3;
- (NSUInteger)ef_removeObject:(id)arg1 usingComparator:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)ef_insertObject:(id)arg1 usingSortFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg2 context:(void )arg3 allowDuplicates:(BOOL)arg4;
- (NSUInteger)ef_insertObject:(id)arg1 usingComparator:(id /* CDUnknownBlockType */)arg2 allowDuplicates:(BOOL)arg3;
- (NSUInteger)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;
- (void)ef_reverseObjects;
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;
- (void)ef_moveObjectAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (BOOL)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (BOOL)ef_addObjectIfAbsent:(id)arg1;
@end

