//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIWordTokenizer : NSObject
{
    NSString *m_string;
    struct {
        unsigned short buffer[64];
        struct __CFString theString;
        unsigned short directUniCharBuffer;
        char directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } m_inlineBuffer;
    _NSRange m_tokenRange;
    _NSRange m_searchRange;
    NSUInteger m_bufferOffset;
}

// - (void).cxx_destruct;
- (id)allTokensForString:(id)arg1;
- (_NSRange)rangeOfCurrentToken;
- (_NSRange)advanceToNextToken;
- (void)setString:(id)arg1 withSearchRange:(_NSRange)arg2;
- (id)init;

@end

