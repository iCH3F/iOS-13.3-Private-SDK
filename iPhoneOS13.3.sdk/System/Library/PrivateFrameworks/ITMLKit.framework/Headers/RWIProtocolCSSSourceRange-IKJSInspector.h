//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolCSSSourceRange.h>

@interface RWIProtocolCSSSourceRange (IKJSInspector)
+ (id)ik_cssSourceRangeForRange:(_NSRange)arg1 withNewLineIndexSet:(id)arg2;
+ (id)ik_emptySourceRange;
+ (id)ik_newLineIndexSetForStyleMarkup:(id)arg1;
+ (id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;
- (_NSRange)ik_rangeWithNewLineIndexSet:(id)arg1;
@end

