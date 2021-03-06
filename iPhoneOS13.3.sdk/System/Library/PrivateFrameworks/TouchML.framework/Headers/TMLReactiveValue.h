//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLBinder-Protocol.h>
#import <TouchML/TMLValue-Protocol.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue>
{
    NSArray *_bindings;
    id _targetWeak;
    id _targetUnsafe;
    NSString *_keyPath;
    NSUInteger _valueType;
}

+ (void)removeReactiveValuesForTarget:(id)arg1;
+ (id)valueForTarget:(id)arg1 withKeyPath:(id)arg2;
@property(readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
// - (void).cxx_destruct;
- (void)bindingValueChanged:(id)arg1;
- (void)unassign;
- (void)assignToTarget:(id)arg1 withKeyPath:(id)arg2;
- (NSUInteger)valueType;
- (id)value;
@property(readonly, nonatomic) long long bindingOrder;
- (id)initWithBindings:(id)arg1 valueType:(NSUInteger)arg2;

@end

