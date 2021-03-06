//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, TSWPAttachment, TSWPCharacterStyle, TSWPFootnoteReferenceAttachment, TSWPParagraphStyle, TSWPSmartField;
@protocol TSWPCoreTextPropertiesFilterDelegate;

@protocol TSWPTextSource <NSObject>
- (NSUInteger)storageLength;
- (BOOL)adjustRangesByDelta:(long long)arg1;
- (NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(_NSRange )arg3;
- (_NSRange)charRangeMappedFromStorage:(_NSRange)arg1;
- (_NSRange)charRangeMappedToStorage:(_NSRange)arg1;
- (NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg1;
- (NSUInteger)charIndexMappedToStorage:(NSUInteger)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(_NSRange)arg2 locale:(struct __CFLocale )arg3 hyphenChar:(unsigned int )arg4;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (_NSRange)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2;
- (TSWPCharacterStyle *)characterStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg1;
- (TSWPParagraphStyle *)paragraphStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (TSWPAttachment *)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg1;
- (TSWPAttachment *)attachmentAtCharIndex:(NSUInteger)arg1;
- (TSWPFootnoteReferenceAttachment *)footnoteReferenceAtCharIndex:(NSUInteger)arg1;
- (NSArray *)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(_NSRange)arg2;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(_NSRange )arg1 filterDelegate:(id <TSWPCoreTextPropertiesFilterDelegate>)arg2;
- (struct __CFDictionary )createFilteredCoreTextAttributes:(struct __CFDictionary )arg1 effectiveRange:(_NSRange )arg2 filterDelegate:(id <TSWPCoreTextPropertiesFilterDelegate>)arg3;
- (TSWPSmartField *)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(_NSRange )arg3;
- (void)attributesAtCharIndex:(NSUInteger)arg1 attributesOfInterest:(BOOL [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(_NSRange )arg4;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg1;
- (BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(_NSRange)arg2;
- (NSString *)string;
- (NSUInteger)length;

@optional
- (BOOL)hasSmartFieldsInRange:(_NSRange)arg1;
- (void)enumerateWithAttributeKind:(unsigned int)arg1 inRange:(_NSRange)arg2 usingBlock:(void (^)(id, _NSRange, BOOL ))arg3;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg1 inRange:(_NSRange)arg2 usingBlock:(void (^)(id, _NSRange, BOOL ))arg3;
- (NSString *)substringWithRange:(_NSRange)arg1;
@end

