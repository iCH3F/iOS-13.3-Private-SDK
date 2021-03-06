//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSArray, NSString, TSTFunctionEndNode;

__attribute__((visibility("hidden")))
@interface TSTFunctionNode : TSTExpressionNode
{
    TSTFunctionEndNode *_functionEndNode;
    int _functionIndex;
    NSString *_whitespaceAfterLeftParen;
    NSArray *_whitespaceAfterDelimiters;
    NSString *_whitespaceAfterFunctionName;
    NSString *_invalidFunctionName;
}

+ (id)newSumNodeWithContext:(id)arg1 children:(id)arg2;
+ (id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2;
@property(retain, nonatomic) NSString *invalidFunctionName; // @synthesize invalidFunctionName=_invalidFunctionName;
@property(retain, nonatomic) NSString *whitespaceAfterFunctionName; // @synthesize whitespaceAfterFunctionName=_whitespaceAfterFunctionName;
@property(retain, nonatomic) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain) NSString *whitespaceAfterLeftParen; // @synthesize whitespaceAfterLeftParen=_whitespaceAfterLeftParen;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
// - (void).cxx_destruct;
- (void)p_resetArgumentSpecForChildren;
- (id)p_functionSpec;
- (void)saveToArchive:(struct FunctionNodeArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct FunctionNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(unsigned char)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (id)formulaPlainText;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 unwrapped:(BOOL)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)string;
- (int)tokenType;
@property(readonly, nonatomic, getter=isInvalidFunction) BOOL invalidFunction;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (BOOL)isDescendantOfChild:(id)arg1;
- (BOOL)isMissingRequiredArgument;
- (BOOL)isEmptyFunctionNode;
- (void)resurrectModeTokens;
- (id)mostSpecificNodeContainingIndex:(NSUInteger)arg1 correspondingIndex:(NSUInteger)arg2;
@property(retain, nonatomic) TSTFunctionEndNode *functionEndNode;
- (void)setChildren:(id)arg1;
@property(readonly, nonatomic) short maxArguments;
@property(readonly, nonatomic) short minArguments;
@property(readonly, nonatomic) NSUInteger numArguments;
- (NSUInteger)lastIndexOfSubtree;
- (BOOL)isFunctionNode;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5;

@end

