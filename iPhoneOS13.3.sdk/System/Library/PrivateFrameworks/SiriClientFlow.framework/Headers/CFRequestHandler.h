//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CFServiceHelper;

@interface CFRequestHandler : NSObject
{
    CFServiceHelper *_serviceHelper;
}

@property(retain) CFServiceHelper *serviceHelper; // @synthesize serviceHelper=_serviceHelper;
// - (void).cxx_destruct;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (BOOL)isTimeoutDisabled;
- (void)handleCommand:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)handleCommandCompletionWithResponse:(id)arg1 forCommand:(id)arg2 startOfExecution:(double)arg3;

@end

