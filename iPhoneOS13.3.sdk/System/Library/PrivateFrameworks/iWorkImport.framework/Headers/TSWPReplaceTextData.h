//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPReplaceTextData : NSObject
{
    NSString *_language;
    NSString *_dictationAndAutocorrection;
    NSArray *_attachments;
}

+ (id)replaceTextData;
+ (id)replaceTextDataWithAttachments:(id)arg1;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) NSString *dictationAndAutocorrection; // @synthesize dictationAndAutocorrection=_dictationAndAutocorrection;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
// - (void).cxx_destruct;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg1;
- (id)replaceTextDataByChangingLanguage:(id)arg1;
- (id)init;
- (id)initWithAttachments:(id)arg1;
- (id)initWithDictationAndAutocorrection:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;

@end

