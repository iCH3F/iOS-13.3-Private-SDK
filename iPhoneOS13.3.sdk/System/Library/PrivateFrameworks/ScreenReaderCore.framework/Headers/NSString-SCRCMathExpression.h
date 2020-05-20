//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCRCMathExpression)
+ (id)stringWithDollarCode:(id)arg1;
+ (id)stringWithCGRect:(CGRect)arg1;
- (id)stringWrappedInMathMLTag:(id)arg1 withAttributes:(id)arg2;
- (id)stringWrappedInMathMLTag:(id)arg1;
- (id)scrc_composedCharacterEnumerator;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_encodeUnicodeForKVO;
- (BOOL)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)scrc_countNumberOfGlyphs;
- (BOOL)scrc_containsOnlyOneGlyph;
- (id)scrc_composedCharacterAtIndex:(NSUInteger)arg1;
- (id)stringWithMathIndicators;
- (_NSRange)previousWordFromPosition:(long long)arg1;
- (_NSRange)nextWordFromPosition:(long long)arg1;
- (BOOL)containsAttachmentCharSet;
- (id)contentsOfEmbeddedCommand:(id)arg1;
- (unsigned int)fourCharCodeValue;
- (_NSRange)sentenceBreakInDirection:(BOOL)arg1 fromIndex:(NSUInteger)arg2 skipCurrent:(BOOL)arg3;
- (_NSRange)enclosingSentenceRangeForRange:(_NSRange)arg1;
- (BOOL)hasMultipleWordsWithLocaleName:(const char )arg1 ignorePunctuation:(BOOL)arg2;
- (id)stringByTrimmingEmptySpaceEdges;
- (id)scrStringByTrimmingTrailingNewlines;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByTruncatingToWordAtIndex:(NSUInteger)arg1 addElipses:(BOOL)arg2;
- (int)character32AtIndex:(NSUInteger)arg1 returningNumberOfComposedChars:(NSUInteger )arg2;
- (id)threadDescription;
@end

