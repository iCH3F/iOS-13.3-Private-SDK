//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import <iWorkImport/TSDTextSelection-Protocol.h>

@class NSString, TSWPRangeArray;

__attribute__((visibility("hidden")))
@interface TSWPSelection : TSKSelection <TSDTextSelection>
{
    int _type;
    _NSRange _range;
    NSUInteger _headCharIndex;
    NSUInteger _tailCharIndex;
    BOOL _leadingEdge;
    NSUInteger _leadingCharIndex;
    BOOL _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    _NSRange _smartFieldRange;
    TSWPRangeArray *_visualRanges;
}

+ (BOOL)p_checkEndOfLineFlagForRange:(inout _NSRange )arg1 leadingEdge:(inout BOOL )arg2 type:(inout int )arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionFromWPSelection:(id)arg1;
+ (id)selectionWithRange:(_NSRange)arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;
+ (id)selectionWithRange:(_NSRange)arg1;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) int caretAffinity; // @synthesize caretAffinity=_caretAffinity;
@property(readonly, nonatomic) int styleInsertionBehavior; // @synthesize styleInsertionBehavior=_styleInsertionBehavior;
@property(readonly, nonatomic) BOOL validVisualRanges; // @synthesize validVisualRanges=_validVisualRanges;
@property(readonly, nonatomic) NSUInteger leadingCharIndex; // @synthesize leadingCharIndex=_leadingCharIndex;
@property(readonly, nonatomic) BOOL leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) NSUInteger tailCharIndex; // @synthesize tailCharIndex=_tailCharIndex;
@property(nonatomic) NSUInteger headCharIndex; // @synthesize headCharIndex=_headCharIndex;
@property(readonly, nonatomic) _NSRange smartFieldRange; // @synthesize smartFieldRange=_smartFieldRange;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _NSRange rawRange; // @synthesize rawRange=_range;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isAtEndOfLine;
- (void)saveToArchive:(struct SelectionArchive )arg1 archiver:(id)arg2;
- (BOOL)intersectsRange:(_NSRange)arg1;
- (BOOL)containsCharacterAtIndex:(NSUInteger)arg1;
- (NSUInteger)visualRangeCount;
- (void)setHeadCharIndex:(NSUInteger)arg1 tailCharIndex:(NSUInteger)arg2;
- (id)visualRangesArray;
- (id)i_visualRanges;
- (id)visualRanges;
- (void)i_setVisualRanges:(id)arg1;
- (_NSRange)superRange;
- (NSUInteger)end;
- (NSUInteger)start;
- (id)copyWithVisualRanges:(id)arg1 headCharIndex:(NSUInteger)arg2 tailCharIndex:(NSUInteger)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithNewVisualRanges:(id)arg1;
- (id)constrainToRange:(_NSRange)arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewRange:(_NSRange)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewRange:(_NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(_NSRange)arg1 head:(NSUInteger)arg2 tail:(NSUInteger)arg3;
- (id)copyWithNewType:(int)arg1 range:(_NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(_NSRange)arg2;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isInsertionPoint;
@property(readonly, nonatomic) BOOL isRange;
@property(readonly, nonatomic) BOOL isVisual;
- (long long)compare:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)p_isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithArchive:(const struct SelectionArchive )arg1;
- (id)initWithRange:(_NSRange)arg1;
- (id)initWithType:(int)arg1 range:(_NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(_NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(_NSRange)arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (id)initWithType:(int)arg1 range:(_NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(_NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(NSUInteger)arg7;
@property(readonly, nonatomic) _NSRange range;
- (NSUInteger)insertionChar;

@end

