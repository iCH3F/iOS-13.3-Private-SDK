//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSDHint;

__attribute__((visibility("hidden")))
@interface TNHintCacheEntry : NSObject
{
    id <TSDHint> mHint;
    BOOL mIsValid;
    CGPoint mOrigin;
}

@property CGPoint origin; // @synthesize origin=mOrigin;
@property(getter=isValid) BOOL valid; // @synthesize valid=mIsValid;
@property(retain) id <TSDHint> hint; // @synthesize hint=mHint;
- (void)dealloc;
- (id)initWithHint:(id)arg1 origin:(CGPoint)arg2;

@end

