//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKSandboxExtension : NSObject
{
    NSString *_token;
    long long _handle;
}

@property long long handle; // @synthesize handle=_handle;
@property(retain) NSString *token; // @synthesize token=_token;
// - (void).cxx_destruct;
- (void)expel;
- (void)consume;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

@end
