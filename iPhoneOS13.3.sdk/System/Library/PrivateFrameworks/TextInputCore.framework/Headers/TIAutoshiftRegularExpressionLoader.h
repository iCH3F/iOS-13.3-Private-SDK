//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface TIAutoshiftRegularExpressionLoader : NSObject
{
    NSString *_sentenceDelimitingCharacters;
    NSString *_sentenceTrailingCharacters;
    NSString *_nextSentencePrefixCharacters;
    NSRegularExpression *_regex;
}

+ (id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3;
@property(retain, nonatomic) NSRegularExpression *regex; // @synthesize regex=_regex;
@property(readonly, nonatomic) NSString *nextSentencePrefixCharacters; // @synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters;
@property(readonly, nonatomic) NSString *sentenceTrailingCharacters; // @synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters;
@property(readonly, nonatomic) NSString *sentenceDelimitingCharacters; // @synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters;
// - (void).cxx_destruct;
- (void)startBackgroundLoad;
- (id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3;

@end

