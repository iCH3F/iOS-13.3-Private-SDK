//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject
{
    BOOL _enabled;
    JSManagedValue *_managedValue;
}

@property(retain, nonatomic) JSManagedValue *managedValue; // @synthesize managedValue=_managedValue;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (id)value;
- (id)initWithListener:(id)arg1 forNode:(id)arg2;

@end

