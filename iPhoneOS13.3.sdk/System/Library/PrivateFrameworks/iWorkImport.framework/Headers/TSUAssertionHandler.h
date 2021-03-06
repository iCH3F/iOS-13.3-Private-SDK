//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char )arg5;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 format:(id)arg5 args:(struct __va_list_tag [1])arg6;
+ (void)simulateCrashWithMessage:(id)arg1;
+ (id)packedBacktraceStringWithReturnAddresses:(id)arg1;
+ (id)packedBacktraceString;
+ (void)_logBacktraceWithCallStackSymbols:(id)arg1;
+ (void)logFullBacktrace;
+ (void)logBacktraceThrottled;
+ (id)p_performBlockIgnoringAssertions:(id /* CDUnknownBlockType */)arg1 onlyFatal:(BOOL)arg2;
+ (id)performBlockIgnoringQAFatalAssertions:(id /* CDUnknownBlockType */)arg1;
+ (id)performBlockIgnoringFatalAssertions:(id /* CDUnknownBlockType */)arg1;
+ (id)performBlockIgnoringAssertions:(id /* CDUnknownBlockType */)arg1;
+ (void)initialize;

@end

