//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class CIMCandidateData, NSOperationQueue, NSString, TIMathSymbolPunctuationController, TIWordSearch;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja
{
    TIWordSearch *_wordSearch;
    BOOL _isInCompletionMode;
    BOOL _shouldLearnAcceptedCandidate;
    BOOL _isAlphabeticPlane;
    BOOL _duringDeleteFromInputWithContext;
    NSString *_language;
    NSString *_modeName;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    NSString *_pairedPunctuationOpenQuote;
    NSString *_pairedPunctuationSelectedText;
    NSString *_currentKeyHint;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (id)pairedPunctuationDictionary;
+ (Class)wordSearchClass;
+ (BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2;
+ (id)unicodeCandidateFromString:(id)arg1;
+ (id)GB18030CandidateFromString:(id)arg1;
+ (id)punctuationPredictionsForString:(id)arg1;
@property BOOL duringDeleteFromInputWithContext; // @synthesize duringDeleteFromInputWithContext=_duringDeleteFromInputWithContext;
@property(readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController; // @synthesize mathSymbolPunctuationController=_mathSymbolPunctuationController;
@property(copy, nonatomic) NSString *currentKeyHint; // @synthesize currentKeyHint=_currentKeyHint;
@property(copy, nonatomic) NSString *pairedPunctuationSelectedText; // @synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText;
@property(copy, nonatomic) NSString *pairedPunctuationOpenQuote; // @synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote;
@property(nonatomic) BOOL isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) BOOL shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property(nonatomic) BOOL isInCompletionMode; // @synthesize isInCompletionMode=_isInCompletionMode;
@property(copy, nonatomic) NSString *modeName; // @synthesize modeName=_modeName;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)wordSearch;
// - (void).cxx_destruct;
- (id)searchStringForMarkedText;
- (BOOL)handlePairedPunctuationInput:(id)arg1 context:(id)arg2;
- (BOOL)supportsPairedPunctutationInput;
- (void)acceptFirstCandidateWithContext:(id)arg1;
- (id)firstCandidate;
- (void)setLearnsCorrection:(BOOL)arg1;
- (id)outputByConvertingDecimalPointForInput:(id)arg1;
- (BOOL)shouldSearchCompletionForSubstrings;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) CIMCandidateData *candidateData; // @synthesize candidateData=_candidateData;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (NSUInteger)initialSelectedIndex;
- (id)completionCandidateResultSetForKeyHint:(id)arg1;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (id)generateCompletions;
@property(readonly, nonatomic) NSUInteger predictionOptions;
- (void )mecabraCandidateRefFromPointerValue:(id)arg1;
- (BOOL)hasIdeographicCandidates;
- (BOOL)showingFacemarkCandidates;
- (BOOL)isFacemarkInput:(id)arg1;
- (id)candidateResultSetUsedForCompletionQuery;
- (void)willExitCompletionMode;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (id)wordCharacters;
- (id)replacementForDoubleSpace;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)deleteFromInput:(NSUInteger )arg1;
- (void)setInput:(id)arg1;
- (void)clearInput;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)arg1;
- (void)loadFavoniusTypingModel;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (void)syncToLayoutState:(id)arg1;
- (struct TIInputManager )initImplementationWithMode:(id)arg1 andLanguage:(id)arg2;
- (void)resetCommitHistory;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;

@end

