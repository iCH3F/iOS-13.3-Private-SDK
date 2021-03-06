//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPinyinString.h>

@interface PRPinyinString : NSPinyinString
{
    NSUInteger _originalLength;
    NSUInteger _originalCheckedLength;
    NSUInteger _modificationCount;
    NSUInteger _modificationTypes;
    _NSRange _originalRanges;
    _NSRange _finalRanges;
    _NSRange _originalSyllableRanges;
    _NSRange _originalAdditionalSyllableRanges;
}

+ (id)correctionsForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;
+ (id)alternativesForInputString:(id)arg1;
- (id)nonPinyinIndexSet;
- (_NSRange)nonPinyinRangeAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfDeletions;
- (NSUInteger)numberOfInsertions;
- (NSUInteger)numberOfTranspositions;
- (NSUInteger)numberOfReplacements;
- (NSUInteger)numberOfNonPinyinRanges;
- (NSUInteger)indexOfFirstModification;
- (_NSRange)originalAdditionalSyllableRangeForModificationAtIndex:(NSUInteger)arg1;
- (_NSRange)originalSyllableRangeForModificationAtIndex:(NSUInteger)arg1;
- (_NSRange)finalRangeForModificationAtIndex:(NSUInteger)arg1;
- (_NSRange)originalRangeForModificationAtIndex:(NSUInteger)arg1;
- (NSUInteger)typeOfModificationAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfModifications;
- (NSUInteger)finalCheckedLength;
- (NSUInteger)originalCheckedLength;
- (NSUInteger)originalLength;
- (NSUInteger)score;
- (BOOL)lastSyllableIsPartial;
- (NSUInteger)syllableCount;
- (id)string;
- (id)description;
- (id)annotatedString;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 syllableCount:(NSUInteger)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(NSUInteger)arg4 originalLength:(NSUInteger)arg5 originalCheckedLength:(NSUInteger)arg6 numberOfModifications:(NSUInteger)arg7 modificationTypes:(NSUInteger )arg8 originalModificationRanges:(_NSRange )arg9 finalModificationRanges:(_NSRange )arg10 originalSyllableRanges:(_NSRange )arg11 originalAdditionalSyllableRanges:(_NSRange )arg12;
- (id)initWithUncheckedString:(id)arg1 score:(NSUInteger)arg2 originalLength:(NSUInteger)arg3;
- (id)initWithString:(id)arg1 syllableCount:(NSUInteger)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(NSUInteger)arg4 originalLength:(NSUInteger)arg5 modificationType:(NSUInteger)arg6 originalModificationRange:(_NSRange)arg7 finalModificationRange:(_NSRange)arg8 originalSyllableRange:(_NSRange)arg9 originalAdditionalSyllableRange:(_NSRange)arg10;
- (id)initWithString:(id)arg1 syllableCount:(NSUInteger)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(NSUInteger)arg4 originalLength:(NSUInteger)arg5 modificationType:(NSUInteger)arg6 originalModificationRange:(_NSRange)arg7 finalModificationRange:(_NSRange)arg8 originalSyllableRange:(_NSRange)arg9;
- (id)initWithString:(id)arg1 syllableCount:(NSUInteger)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(NSUInteger)arg4 originalLength:(NSUInteger)arg5 modificationType:(NSUInteger)arg6 originalModificationRange:(_NSRange)arg7 finalModificationRange:(_NSRange)arg8;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (NSUInteger)length;

@end

