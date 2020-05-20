//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSDictionary;

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2;
+ (id)itemsWithPlistFileRepresentation:(id)arg1;
+ (id)itemsWithJSONFileRepresentation:(id)arg1;
+ (id)propertyBuilders;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (id)preferredFileType;
@property(readonly, nonatomic) NSDictionary *dictionary;

@end

