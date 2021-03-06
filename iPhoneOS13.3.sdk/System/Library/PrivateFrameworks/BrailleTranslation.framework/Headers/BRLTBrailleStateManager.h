//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BRLTBrailleBuffer, BRLTBrailleString, BRLTScriptString, NSMutableArray, NSRecursiveLock;
@protocol BRLTBrailleStateManagerDelegate, BRLTBrailleTranslationDelegateProtocol;

@interface BRLTBrailleStateManager : NSObject <NSCopying>
{
    BRLTScriptString *_scriptString;
    BRLTBrailleBuffer *_brailleBuffer;
    BRLTBrailleString *_staticBrailleString;
    _NSRange _scriptForwardEditingRegion;
    _NSRange _scriptBackwardEditingRegion;
    _NSRange _scriptMergeEditingRegion;
    _NSRange _brailleForwardEditingRegion;
    _NSRange _brailleBackwardEditingRegion;
    _NSRange _brailleMergeEditingRegion;
    _NSRange _activeScriptEditingRegion;
    _NSRange _activeBrailleEditingRegion;
    _NSRange _brailleSelection;
    _NSRange _brailleFocus;
    BOOL _brailleDirty;
    BOOL _scriptDirty;
    id <BRLTBrailleStateManagerDelegate> _delegate;
    id <BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
    _NSRange _pendingScriptSelection;
    NSRecursiveLock *_apiLock;
    NSMutableArray *_runningScriptStringHistory;
    double _lastScriptStringOutputTime;
    BOOL _editable;
    NSUInteger _inputTranslationMode;
    NSUInteger _outputTranslationMode;
}

@property(nonatomic) NSUInteger outputTranslationMode; // @synthesize outputTranslationMode=_outputTranslationMode;
@property(nonatomic) NSUInteger inputTranslationMode; // @synthesize inputTranslationMode=_inputTranslationMode;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
// - (void).cxx_destruct;
- (_NSRange)scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(NSUInteger)arg1;
- (_NSRange)scriptRangeForBrailleRange:(_NSRange)arg1;
- (_NSRange)brailleRangeForScriptRange:(_NSRange)arg1;
- (NSUInteger)brailleLocationForScriptLocation:(NSUInteger)arg1;
- (NSUInteger)scriptLocationForBrailleLocation:(NSUInteger)arg1;
- (_NSRange)scriptEditingRange;
- (id)outputScriptString;
- (_NSRange)brailleFocus;
- (_NSRange)brailleSelection;
- (id)brailleDisplayString;
- (void)_translate:(BOOL)arg1;
- (void)translateForced:(BOOL)arg1;
- (void)translate;
- (_NSRange)_brailleRangeForTextRange:(_NSRange)arg1 textPositions:(id)arg2 brailleLength:(NSUInteger)arg3;
- (_NSRange)_textRangeForBrailleRange:(_NSRange)arg1 textPositions:(id)arg2 scriptLength:(long long)arg3;
- (BOOL)_setBrailleSelection:(_NSRange)arg1;
- (void)setBrailleSelection:(_NSRange)arg1;
- (void)setBrailleSelection:(_NSRange)arg1 needsForwardToScreenReader:(out BOOL )arg2;
- (BOOL)_forwardDeleteBrailleCharSilently:(BOOL)arg1;
- (BOOL)forwardDeleteBrailleCharSilently;
- (BOOL)forwardDeleteBrailleChar;
- (BOOL)_deleteBrailleCharSilently:(BOOL)arg1;
- (BOOL)deleteBrailleCharSilently;
- (BOOL)deleteBrailleChar;
- (BOOL)_generateBrailleBuffer:(BOOL)arg1;
- (BOOL)_selectionIsValidForInsert;
- (BOOL)_selectionIsValidForDelete;
- (_NSRange)deleteMergeAtomForScriptString:(id)arg1;
- (_NSRange)backwardEditingAtomForScriptString:(id)arg1;
- (_NSRange)forwardEditingAtomForScriptString:(id)arg1;
- (BOOL)_generateBrailleBufferForDelete;
- (void)_generateBrailleBufferForInsert;
- (void)insertBrailleChar:(id)arg1 silently:(BOOL)arg2;
- (void)insertBrailleChar:(id)arg1;
- (void)setScriptString:(id)arg1;
@property(readonly, nonatomic) BRLTBrailleBuffer *brailleBuffer;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)translationDelegate;
- (void)setTranslationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 translationDelegate:(id)arg2;

@end

