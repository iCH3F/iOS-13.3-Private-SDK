//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface OITSUHTMLLog : NSObject
{
    NSString *_path;
    NSString *_title;
    NSString *_stylesheet;
    NSString *_script;
    NSFileHandle *_handle;
    BOOL _logStarted;
    NSUInteger _uniquifier;
    NSUInteger _tableRow;
}

@property(copy, nonatomic) NSString *script; // @synthesize script=_script;
@property(copy, nonatomic) NSString *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)openInBrowser;
- (void)logEnd;
- (void)logBegin;
- (void)clear;
- (void)close;
- (void)writeText:(id)arg1;
- (void)writeMarkup:(id)arg1;
- (void)_writeMarkupData:(id)arg1;
- (id)uniqueIdentifierWithPrefix:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
