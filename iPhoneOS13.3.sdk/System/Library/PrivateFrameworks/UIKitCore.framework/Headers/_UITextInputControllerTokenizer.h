//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITextInputStringTokenizer.h"

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer
{
    UITextInputController *_textInput;
    struct __CFStringTokenizer _tokenizer;
    int _tokenizerType;
    BOOL _tokenizerIsInvalid;
}

// - (void).cxx_destruct;
- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (id)_positionFromPosition:(id)arg1 offset:(NSUInteger)arg2 affinity:(long long)arg3;
- (BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (long long)_writingDirectionAtPosition:(id)arg1;
- (void)invalidateTokenizer;
- (void)dealloc;
- (id)initWithTextInputController:(id)arg1;

@end

