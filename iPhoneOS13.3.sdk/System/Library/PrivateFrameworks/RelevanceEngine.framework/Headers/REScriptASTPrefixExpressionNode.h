//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode
{
    REScriptToken *_prefixOperator;
    REScriptASTNode *_node;
}

+ (id)parseBuffer:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) REScriptASTNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) REScriptToken *prefixOperator; // @synthesize prefixOperator=_prefixOperator;
// - (void).cxx_destruct;
- (id)dependencies;
- (id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2;

@end

