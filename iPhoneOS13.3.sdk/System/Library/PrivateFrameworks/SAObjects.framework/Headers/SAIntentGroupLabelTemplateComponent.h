//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject
{
}

+ (id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)labelTemplateComponent;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *labelTemplateComponentStyle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

