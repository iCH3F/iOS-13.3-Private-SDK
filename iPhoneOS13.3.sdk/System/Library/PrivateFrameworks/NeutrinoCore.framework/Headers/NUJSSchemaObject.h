//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;
@protocol NUIdentifiable;

@interface NUJSSchemaObject : NUJSModelObject
{
}

+ (id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (BOOL)hasProperty:(id)arg1;
@property(readonly, nonatomic) id <NUIdentifiable> item;
@property(readonly, nonatomic) NUSchema *schema;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;

@end

