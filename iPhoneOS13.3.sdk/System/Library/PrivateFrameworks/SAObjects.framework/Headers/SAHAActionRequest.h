//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject
{
}

+ (id)actionRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)actionRequest;
@property(retain, nonatomic) SAHAFilter *filter;
@property(nonatomic) long long executionOrder;
@property(copy, nonatomic) NSArray *actions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

