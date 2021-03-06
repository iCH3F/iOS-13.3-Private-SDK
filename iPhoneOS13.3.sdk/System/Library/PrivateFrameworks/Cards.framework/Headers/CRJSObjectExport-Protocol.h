//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/JSExport-Protocol.h>

@class JSValue;

@protocol CRJSObjectExport <JSExport>
+ (id)objectWithClassName:(JSValue *)arg1 objectType:(JSValue *)arg2;
- (JSValue *)backingObjectValueForKey:(JSValue *)arg1;
- (void)setBackingObjectValue:(JSValue *)arg1 forKey:(JSValue *)arg2;

@optional
+ (id)objectWithClassName:(JSValue *)arg1 objectType:(JSValue *)arg2 __JS_EXPORT_AS__objectWithClassName:(id)arg3;
- (JSValue *)backingObjectValueForKey:(JSValue *)arg1 __JS_EXPORT_AS__value:(id)arg2;
- (void)setBackingObjectValue:(JSValue *)arg1 forKey:(JSValue *)arg2 __JS_EXPORT_AS__setValue:(id)arg3;
@end

