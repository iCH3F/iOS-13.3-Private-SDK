//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying>
{
    vector_b5e32e34 _rangeVector;
}

+ (id)rangeArrayWithRange:(_NSRange)arg1;
+ (id)rangeArray;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (NSUInteger)p_finish;
- (NSUInteger)p_start;
- (id)rangesIntersecting:(_NSRange)arg1;
- (id)intersection:(_NSRange)arg1;
- (NSUInteger)indexForRange:(_NSRange)arg1;
- (BOOL)intersectsRange:(_NSRange)arg1;
- (_NSRange)rangeContainingPosition:(NSUInteger)arg1;
- (BOOL)containsRange:(_NSRange)arg1;
- (BOOL)containsCharacterAtIndex:(NSUInteger)arg1 inclusive:(BOOL)arg2;
- (BOOL)containsCharacterAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger indexCount;
- (void)enumerateRangesInRange:(_NSRange)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)reverseEnumerateRanges:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateRanges:(id /* CDUnknownBlockType */)arg1;
- (_NSRange)rangeAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) _NSRange superRange;
@property(readonly, nonatomic) NSUInteger rangeCount;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRangeArray:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRangeVector:(const vector_b5e32e34 )arg1;
- (id)initWithRange:(_NSRange)arg1;
- (id)init;

@end

