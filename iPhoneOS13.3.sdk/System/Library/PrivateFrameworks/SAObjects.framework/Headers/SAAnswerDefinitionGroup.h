//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>
{
}

+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)definitionGroup;
@property(copy, nonatomic) NSArray *synonyms;
@property(copy, nonatomic) NSString *partOfSpeech;
@property(copy, nonatomic) NSString *origin;
@property(copy, nonatomic) NSArray *definitionEntries;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

