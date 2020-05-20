//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSPersistence)
+ (id)tsp_stringWithExtensionFieldComponent:(unsigned int)arg1;
+ (id)tsp_stringForDigest:(const char )arg1 length:(NSUInteger)arg2;
+ (id)regexStringForSearchString:(id)arg1 options:(NSUInteger)arg2;
+ (id)stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(BOOL)arg3;
+ (id)stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (NSUInteger)numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (NSUInteger)numberForString:(id)arg1 withListNumberFormat:(int)arg2;
- (id)tsp_stringByAppendingExtensionFieldComponent:(unsigned int)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(NSUInteger)arg3 range:(_NSRange)arg4 replacementCount:(NSUInteger )arg5;
- (id)stringByCapitalizingToMatchString:(id)arg1 range:(_NSRange)arg2 searchOptions:(NSUInteger)arg3;
- (_NSRange)rangeOfString:(id)arg1 searchOptions:(NSUInteger)arg2 updatingSearchRange:(_NSRange )arg3;
- (unsigned int)utf32CharacterAtIndex:(NSUInteger)arg1;
- (int)contentsScriptInRange:(_NSRange)arg1;
- (int)contentsScript;
- (id)replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(NSUInteger)arg2 replaceString:(id)arg3;
- (BOOL)isAllWhitespaceInRange:(_NSRange)arg1;
- (_NSRange)rangeOfWordAtCharacterIndex:(NSUInteger)arg1 range:(_NSRange)arg2 includePreviousWord:(BOOL)arg3;
- (_NSRange)rangeOfCharactersFromSet:(id)arg1 index:(NSUInteger)arg2;
- (NSUInteger)findIndexOfCharacter:(unsigned short)arg1 range:(_NSRange)arg2;
- (id)stringByNormalizingParagraphBreaks;
@end

