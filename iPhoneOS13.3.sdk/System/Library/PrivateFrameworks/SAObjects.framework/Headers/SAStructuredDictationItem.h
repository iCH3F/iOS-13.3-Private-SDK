//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray;

@interface SAStructuredDictationItem : AceObject <SAAceSerializable>
{
}

+ (id)structuredDictationItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)structuredDictationItem;
@property(copy, nonatomic) NSArray *resultOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

