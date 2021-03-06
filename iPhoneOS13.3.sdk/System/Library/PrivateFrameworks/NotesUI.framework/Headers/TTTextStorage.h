//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextStorage.h>

#import <NotesUI/TTMergeableStringDelegate-Protocol.h>
#import <NotesUI/TTTextUndoTarget-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSObject, NSUndoManager, TTMergeableAttributedString, TTMergeableStringUndoGroup, TTMergeableStringVersionedDocument;
@protocol TTTextStorageStyler, TTTextUndoTarget;

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate, TTTextUndoTarget>
{
    NSMutableAttributedString *_attributedString;
    NSUInteger _temporaryAttributeEditing;
    BOOL _directlyEditing;
    BOOL _previouslyHadMarkedText;
    BOOL _wantsUndoCommands;
    BOOL _wantsUpdateTrackingForInitialLoading;
    BOOL _convertAttributes;
    BOOL _shouldConvertTablesToTabs;
    BOOL _retainOriginalFormatting;
    BOOL _filterSubstringAttributes;
    BOOL _filterPastedAttributes;
    BOOL _filterSubstringAttributesForPlainText;
    BOOL _disableUndoCoalesceBreaking;
    BOOL _isDictating;
    BOOL _isPerformingAccessibilityUndoableTextInsertion;
    BOOL _isHandlingTextCheckingResults;
    BOOL _isTypingOrMarkingText;
    BOOL _isSelectingText;
    BOOL _hasEditedCharactersAfterTextSelection;
    BOOL _isDragging;
    BOOL _isDropping;
    BOOL _isResettingBaseWritingDirection;
    BOOL _isReadingSelectionFromPasteboard;
    BOOL _shouldRemoveLeadingWhitespaceForChecklistDrop;
    BOOL _isChangingSelectionByGestures;
    BOOL _isApplyingUndoCommand;
    BOOL _isEndingEditing;
    BOOL _isFixing;
    BOOL _pendingFixupAfterEditing;
    BOOL _delayedFixupAfterEditingWantsUndoCommand;
    NSUndoManager *_undoManager;
    NSObject<TTTextUndoTarget> *_overrideUndoTarget;
    id <TTTextStorageStyler> _styler;
    NSMutableArray *_deletedRanges;
    TTMergeableStringVersionedDocument *_document;
    NSArray *_pasteboardTypes;
    NSMutableArray *_undoCommands;
    TTMergeableStringUndoGroup *_coalescingUndoGroup;
    NSUInteger _editingCount;
    NSUInteger _ttEditedMask;
    long long _ttChangeInLength;
    _NSRange _beforeEndEditedRange;
    _NSRange _lastUndoEditRange;
    _NSRange _ttEditedRange;
}

+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(_NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4 fixAttachments:(BOOL)arg5 insertListMarkers:(BOOL)arg6;
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1 forPlainText:(BOOL)arg2 forStandardizedText:(BOOL)arg3;
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(BOOL)arg2;
+ (id)removeDataDetectorLinksForAttributedString:(id)arg1;
+ (id)standardizedAttributedStringFromAttributedString:(id)arg1 withStyler:(id)arg2 fixAttachments:(BOOL)arg3 translateTTFont:(BOOL)arg4;
+ (double)listItemGlyphPointSizeForUnorderedListStyle:(unsigned int)arg1 withStyler:(id)arg2;
+ (id)bulletTextAttributesWithTextFont:(UIFont )arg1 paragraphStyle:(id)arg2 letterpress:(BOOL)arg3 withStyler:(id)arg4;
@property(nonatomic) BOOL delayedFixupAfterEditingWantsUndoCommand; // @synthesize delayedFixupAfterEditingWantsUndoCommand=_delayedFixupAfterEditingWantsUndoCommand;
@property(nonatomic) long long ttChangeInLength; // @synthesize ttChangeInLength=_ttChangeInLength;
@property(nonatomic) NSUInteger ttEditedMask; // @synthesize ttEditedMask=_ttEditedMask;
@property(nonatomic) _NSRange ttEditedRange; // @synthesize ttEditedRange=_ttEditedRange;
@property(nonatomic) BOOL pendingFixupAfterEditing; // @synthesize pendingFixupAfterEditing=_pendingFixupAfterEditing;
@property(nonatomic) BOOL isFixing; // @synthesize isFixing=_isFixing;
@property(nonatomic) NSUInteger editingCount; // @synthesize editingCount=_editingCount;
@property(nonatomic) _NSRange lastUndoEditRange; // @synthesize lastUndoEditRange=_lastUndoEditRange;
@property(retain, nonatomic) TTMergeableStringUndoGroup *coalescingUndoGroup; // @synthesize coalescingUndoGroup=_coalescingUndoGroup;
@property(retain, nonatomic) NSMutableArray *undoCommands; // @synthesize undoCommands=_undoCommands;
@property(nonatomic) BOOL isEndingEditing; // @synthesize isEndingEditing=_isEndingEditing;
@property(nonatomic) BOOL isApplyingUndoCommand; // @synthesize isApplyingUndoCommand=_isApplyingUndoCommand;
@property(nonatomic) BOOL isChangingSelectionByGestures; // @synthesize isChangingSelectionByGestures=_isChangingSelectionByGestures;
@property(nonatomic) BOOL shouldRemoveLeadingWhitespaceForChecklistDrop; // @synthesize shouldRemoveLeadingWhitespaceForChecklistDrop=_shouldRemoveLeadingWhitespaceForChecklistDrop;
@property(nonatomic) BOOL isReadingSelectionFromPasteboard; // @synthesize isReadingSelectionFromPasteboard=_isReadingSelectionFromPasteboard;
@property(nonatomic) BOOL isResettingBaseWritingDirection; // @synthesize isResettingBaseWritingDirection=_isResettingBaseWritingDirection;
@property(nonatomic) BOOL isDropping; // @synthesize isDropping=_isDropping;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) BOOL hasEditedCharactersAfterTextSelection; // @synthesize hasEditedCharactersAfterTextSelection=_hasEditedCharactersAfterTextSelection;
@property(nonatomic) BOOL isSelectingText; // @synthesize isSelectingText=_isSelectingText;
@property(nonatomic) BOOL isTypingOrMarkingText; // @synthesize isTypingOrMarkingText=_isTypingOrMarkingText;
@property(nonatomic) BOOL isHandlingTextCheckingResults; // @synthesize isHandlingTextCheckingResults=_isHandlingTextCheckingResults;
@property(nonatomic) BOOL isPerformingAccessibilityUndoableTextInsertion; // @synthesize isPerformingAccessibilityUndoableTextInsertion=_isPerformingAccessibilityUndoableTextInsertion;
@property(nonatomic) BOOL isDictating; // @synthesize isDictating=_isDictating;
@property(nonatomic) BOOL disableUndoCoalesceBreaking; // @synthesize disableUndoCoalesceBreaking=_disableUndoCoalesceBreaking;
@property(nonatomic) BOOL filterSubstringAttributesForPlainText; // @synthesize filterSubstringAttributesForPlainText=_filterSubstringAttributesForPlainText;
@property(nonatomic) BOOL filterPastedAttributes; // @synthesize filterPastedAttributes=_filterPastedAttributes;
@property(nonatomic) BOOL filterSubstringAttributes; // @synthesize filterSubstringAttributes=_filterSubstringAttributes;
@property(nonatomic) BOOL retainOriginalFormatting; // @synthesize retainOriginalFormatting=_retainOriginalFormatting;
@property(copy, nonatomic) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property(nonatomic) BOOL shouldConvertTablesToTabs; // @synthesize shouldConvertTablesToTabs=_shouldConvertTablesToTabs;
@property(nonatomic) BOOL convertAttributes; // @synthesize convertAttributes=_convertAttributes;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(nonatomic) _NSRange beforeEndEditedRange; // @synthesize beforeEndEditedRange=_beforeEndEditedRange;
@property(readonly, nonatomic) NSMutableArray *deletedRanges; // @synthesize deletedRanges=_deletedRanges;
@property(retain, nonatomic) id <TTTextStorageStyler> styler; // @synthesize styler=_styler;
@property(nonatomic) BOOL wantsUpdateTrackingForInitialLoading; // @synthesize wantsUpdateTrackingForInitialLoading=_wantsUpdateTrackingForInitialLoading;
@property(nonatomic) BOOL wantsUndoCommands; // @synthesize wantsUndoCommands=_wantsUndoCommands;
@property __weak NSObject<TTTextUndoTarget> *overrideUndoTarget; // @synthesize overrideUndoTarget=_overrideUndoTarget;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString;
- (_NSRange)safeCharacterRangeForRange:(_NSRange)arg1;
- (id)attributedSubstringFromRange:(_NSRange)arg1;
- (id)filteredAttributedSubstringFromRange:(_NSRange)arg1;
- (id)filteredAttributedSubstringFromRange:(_NSRange)arg1 insertListMarkers:(BOOL)arg2;
- (id)dataFromRange:(_NSRange)arg1 documentAttributes:(id)arg2 error:(id )arg3;
- (id)standardizedAttributedStringFixingTextAttachmentsForRange:(_NSRange)arg1 styler:(id)arg2;
- (id)standardizedAttributedStringFixingTextAttachmentsForRange:(_NSRange)arg1;
- (id)standardizedAttributedStringFixingTextAttachments;
- (void)styleTextInRange:(_NSRange)arg1;
- (BOOL)isEditing;
@property(readonly, nonatomic) BOOL isEditingTemporaryAttributes;
- (void)endTemporaryAttributeEditing;
- (void)beginTemporaryAttributeEditing;
- (void)endTemporaryAttributes;
- (void)beginTemporaryAttributes;
- (void)setAttributes:(id)arg1 range:(_NSRange)arg2;
- (BOOL)ic_containsAttribute:(id)arg1 InRange:(_NSRange)arg2;
- (void)removeAttribute:(id)arg1 range:(_NSRange)arg2;
- (void)dd_resetResults;
- (void)dd_makeLinksForResultsInAttributesOfType:(NSUInteger)arg1 context:(id)arg2 range:(_NSRange)arg3;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(_NSRange)arg3;
- (void)replaceCharactersInRange:(_NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(_NSRange)arg1 withAttributedString:(id)arg2;
- (id)correctParagraphStyleReuseForRange:(_NSRange)arg1 withNewAttributedString:(id)arg2;
- (void)convertNSTablesToTabs:(id)arg1;
- (BOOL)shouldBreakUndoCoalescingWithReplacementRange:(_NSRange)arg1 replacementLength:(NSUInteger)arg2;
- (BOOL)isDeletingContentAttachmentWithReplacementRange:(_NSRange)arg1 replacementLength:(NSUInteger)arg2;
- (BOOL)textViewHasMarkedText:(UITextView )arg1;
- (BOOL)isEditingOrConvertingMarkedText:(BOOL)arg1;
- (BOOL)isDeletingDictationAttachmentWithReplacementRange:(_NSRange)arg1 replacementLength:(NSUInteger)arg2;
- (void)preReplaceCharactersInRange:(_NSRange)arg1 withStringLength:(NSUInteger)arg2;
- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (void)replaceWithDocument:(id)arg1;
- (NSUInteger)mergeWithDocument:(id)arg1;
- (void)saveSelectionDuringBlock:(id /* CDUnknownBlockType */)arg1 affinity:(NSUInteger)arg2;
- (void)saveSelectionDuringBlock:(id /* CDUnknownBlockType */)arg1;
- (void)restoreSelection:(id)arg1;
- (id)savedSelectionWithSelectionAffinity:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *textViews;
- (void)beginEditing;
- (void)coordinateAccess:(id /* CDUnknownBlockType */)arg1;
- (void)coordinateEditing:(id /* CDUnknownBlockType */)arg1;
- (void)coordinateReading:(id /* CDUnknownBlockType */)arg1;
- (id)mergeableStringReplicaUUIDAtIndex:(NSUInteger)arg1;
- (BOOL)mergeableStringIsEqualAfterSerialization:(id)arg1;
- (void)endEditing;
- (void)fixupAfterEditingDelayedToEndOfRunLoop;
- (void)executeDelayedFixupAfterEditing;
- (void)forceFixupAfterEditingIfDelayed;
- (void)fixupAfterEditing;
- (void)resetUndoManager;
- (void)breakUndoCoalescing;
- (id)newCoalescingUndoGroup;
- (void)applyUndoWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)applyUndoGroup:(id)arg1;
- (void)addUndoCommand:(id)arg1;
@property(readonly, nonatomic) NSObject<TTTextUndoTarget> *undoTarget;
- (void)edited:(NSUInteger)arg1 range:(_NSRange)arg2 changeInLength:(long long)arg3;
@property(readonly, nonatomic) TTMergeableAttributedString *mergeableString;
- (_NSRange)logicalRangeForLocation:(NSUInteger)arg1;
- (id)string;
- (NSUInteger)length;
- (void)editedAttributeRange:(_NSRange)arg1;
- (void)editedRange:(_NSRange)arg1 changeInLength:(long long)arg2;
- (BOOL)_usesSimpleTextEffects;
- (void)resetTTEdits;
- (void)restoreAttributedString:(id)arg1;
@property(readonly, nonatomic) BOOL hasAnyTextViewWithDarkAppearance;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2 sourceZoomController:(id)arg3 keepSourceZoomController:(BOOL)arg4;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)itemProviderForRange:(_NSRange)arg1 andNote:(id)arg2;
- (id)filteredAttributedStringForUTI:(id)arg1 range:(_NSRange)arg2;
- (id)copyDataForUTI:(id)arg1 range:(_NSRange)arg2 persistenceHelper:(id)arg3;
- (id)customPasteboardDataFromRange:(_NSRange)arg1 persistenceHelper:(id)arg2;

@end

