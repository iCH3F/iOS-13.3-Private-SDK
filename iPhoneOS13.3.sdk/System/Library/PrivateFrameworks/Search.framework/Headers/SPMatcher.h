//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPMatcher : NSObject
{
    void _matcher;
}

+ (id)transcriptionForString:(id)arg1 withLanguage:(id)arg2;
- (BOOL)matchesUTF8String:(const char )arg1;
- (BOOL)matches:(id)arg1;
- (BOOL)matchesUTF8String:(const char )arg1 outMatchBits:(NSUInteger )arg2;
- (BOOL)matches:(id)arg1 outMatchBits:(NSUInteger )arg2;
- (NSUInteger)wordCount;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(NSUInteger)arg3;

@end
