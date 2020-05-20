//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface DDRange : NSObject
{
    DOMNode *_node;
    long long _startOffset;
    long long _endOffset;
}

+ (id)rangeWithDOMRange:(id)arg1;
@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithDOMRange:(id)arg1;

@end

