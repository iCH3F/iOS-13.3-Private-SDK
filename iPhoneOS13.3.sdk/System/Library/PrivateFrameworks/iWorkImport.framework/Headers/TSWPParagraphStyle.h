//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface TSWPParagraphStyle : TSSStyle <TSTCellDiffing, TSSPreset, TSDMixing>
{
    struct __CTParagraphStyle _coreTextParagraphStyle;
    NSMapTable *_styleCache;
    NSMapTable *_scalePercentStyleCaches;
    BOOL _allowsMissingPropertiesWithNoParentStyleForUpgrade;
}

+ (id)styleSummaryForPropertyMap:(id)arg1;
+ (id)presetStyleDescriptor;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)p_normalDecimalSeparator;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisParagraphProperties;
+ (id)deprecatedProperties;
+ (id)paragraphProperties;
+ (id)properties;
+ (id)presetStyleDescriptorForOrdinal:(NSUInteger)arg1;
+ (id)cellDiffProperties;
+ (id)defaultStyleWithDefaultPropertiesInContext:(id)arg1;
@property(nonatomic) BOOL allowsMissingPropertiesWithNoParentStyleForUpgrade; // @synthesize allowsMissingPropertiesWithNoParentStyleForUpgrade=_allowsMissingPropertiesWithNoParentStyleForUpgrade;
// - (void).cxx_destruct;
- (id)styleSummary;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3;
- (BOOL)transformsFontSizes;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (id)parentStyleForFixingOrphanVariation;
- (void)addMissingClassProperties;
- (void)localizeForBidi:(BOOL)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)fallbackFontColorWhenUnableToReadCharacterFillColor;
- (void)saveToArchive:(struct ParagraphStyleArchive )arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ParagraphStyleArchive )arg1 unarchiver:(id)arg2;
- (id)initialListStyle;
- (void)setInitialListStyle:(id)arg1;
- (id)followingParagraphStyle;
- (id)p_coreTextCharacterStyle:(id)arg1 allowLigatures:(BOOL)arg2 scalePercent:(NSUInteger)arg3;
- (struct __CTParagraphStyle )p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTFont )findCachedFontForCharacterStyle:(id)arg1 scalePercent:(NSUInteger)arg2;
- (id)getTypesetterAttributes:(id)arg1 scalePercent:(NSUInteger)arg2 isRightToLeft:(BOOL)arg3;
- (void)clearStyleCaches;
- (void)willModify;
- (id)fullPropertyMap;
- (void)setOverridePropertyMap:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (double)ascent;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (BOOL)p_contentTagIsBody;
@property(readonly, nonatomic) BOOL allowAsBookmarkSuggestionStyle;
@property(readonly, nonatomic) BOOL showInSuggestedBookmarksList;

@end

