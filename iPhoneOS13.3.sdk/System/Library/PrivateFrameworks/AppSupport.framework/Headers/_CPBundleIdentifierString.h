//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface _CPBundleIdentifierString : NSString
{
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}

- (void)getCharacters:(unsigned short )arg1 range:(_NSRange)arg2;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (NSUInteger)length;
- (BOOL)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;
- (void)dealloc;
- (id)_initWithExecutablePath:(id)arg1;

@end

