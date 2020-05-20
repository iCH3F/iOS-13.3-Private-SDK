//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)possibleStatuses;
+ (id)possibleRoles;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
- (BOOL)isCurrentUser;
- (id)status;
- (id)role;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentation:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (BOOL)canGenerateContact;
- (id)participant;

@end

