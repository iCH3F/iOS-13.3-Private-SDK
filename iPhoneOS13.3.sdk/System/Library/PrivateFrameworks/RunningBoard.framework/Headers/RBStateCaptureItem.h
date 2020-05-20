//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBStateCaptureItem : NSObject
{
    id <BSInvalidatable> _invalidatable;
    id /* CDUnknownBlockType */ _block;
    NSString *_title;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;

@end

