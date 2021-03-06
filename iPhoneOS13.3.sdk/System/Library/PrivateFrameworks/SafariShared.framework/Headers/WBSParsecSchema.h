//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface WBSParsecSchema : NSObject
{
    BOOL _optional;
    id /* CDUnknownBlockType */ _validationBlock;
    id /* CDUnknownBlockType */ _specializedSchemaBlock;
    Class _expectedClass;
    NSError *_associatedError;
}

+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
+ (id)schemaWithExpectedClass:(Class)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1;
+ (id)schemaForArrayWithElementSchema:(id)arg1;
+ (id)schemaWithConstantValue:(id)arg1;
@property(retain, nonatomic) NSError *associatedError; // @synthesize associatedError=_associatedError;
@property(retain, nonatomic) Class expectedClass; // @synthesize expectedClass=_expectedClass;
@property(nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(copy, nonatomic) id /* CDUnknownBlockType */ specializedSchemaBlock; // @synthesize specializedSchemaBlock=_specializedSchemaBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ validationBlock; // @synthesize validationBlock=_validationBlock;
// - (void).cxx_destruct;
- (BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;
- (void)validateObject:(id)arg1 withErrorHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;

@end

