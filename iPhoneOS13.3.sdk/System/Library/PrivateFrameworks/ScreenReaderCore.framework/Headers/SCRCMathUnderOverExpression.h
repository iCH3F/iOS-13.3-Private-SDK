//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathUnderOverExpression : SCRCMathExpression
{
    SCRCMathExpression *_under;
    SCRCMathExpression *_over;
    SCRCMathExpression *_base;
}

@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
@property(retain, nonatomic) SCRCMathExpression *over; // @synthesize over=_over;
@property(retain, nonatomic) SCRCMathExpression *under; // @synthesize under=_under;
// - (void).cxx_destruct;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(NSUInteger)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (BOOL)isRangeSubSuperscript;
- (NSUInteger)fractionLevel;
- (id)subExpressions;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

