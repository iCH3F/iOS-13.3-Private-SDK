//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TKPickerItem : NSObject
{
    long long _section;
}

@property(nonatomic, setter=_setSection:) long long section; // @synthesize section=_section;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(BOOL)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)description;

@end

