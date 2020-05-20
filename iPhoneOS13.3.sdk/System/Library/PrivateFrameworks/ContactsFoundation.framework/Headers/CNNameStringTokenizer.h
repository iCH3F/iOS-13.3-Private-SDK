//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CNNameStringTokenizer : NSObject
{
    struct __CFStringTokenizer _tokenizer;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)setInferredNameOrder:(long long )arg1 toTokenizerNameOrder:(int)arg2;
+ (id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long )arg3;
+ (id)tokenizeNameString:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(readonly, nonatomic) struct __CFStringTokenizer tokenizer; // @synthesize tokenizer=_tokenizer;
// - (void).cxx_destruct;
- (id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long )arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

