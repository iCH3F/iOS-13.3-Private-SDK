//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSchema.h>

@class NSArray, NSDictionary, NUPattern;

@interface NUArraySchema : NUSchema
{
    NSDictionary *_aliasToIdentifier;
    NSDictionary *_identifierToAlias;
    long long _contentType;
    NUPattern *_pattern;
}

+ (id)deserializePatternFromDictionary:(id)arg1 error:(out id )arg2;
+ (long long)deserializeContentTypeFromDictionary:(id)arg1 error:(out id )arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id )arg2;
+ (id)supportedAttributes;
@property(readonly, nonatomic) NUPattern *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSDictionary *contents; // @synthesize contents=_aliasToIdentifier;
// - (void).cxx_destruct;
- (NSArray )schemaDependencies;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id )arg2;
- (id)deserializeArray:(id)arg1 error:(out id )arg2;
- (id)serializeArray:(id)arg1 error:(out id )arg2;
- (id)deserialize:(id)arg1 error:(out id )arg2;
- (id)serialize:(id)arg1 error:(out id )arg2;
- (id)makeJSValueFromArray:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (id)copyArray:(id)arg1;
- (id)copy:(id)arg1;
@property(readonly, nonatomic) NSArray *defaultArray;
- (BOOL)validateArrayContents:(id)arg1 error:(out id )arg2;
- (BOOL)validateArrayOrder:(id)arg1 error:(out id )arg2;
- (BOOL)validateArray:(id)arg1 error:(out id )arg2;
- (BOOL)validate:(id)arg1 error:(out id )arg2;
- (BOOL)validateContents:(out id )arg1;
- (BOOL)validateDefaultArray:(id)arg1 error:(out id )arg2;
- (BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id )arg3;
- (BOOL)validateAttributes:(out id )arg1;
- (BOOL)isValid:(out id )arg1;
- (id)initWithIdentifier:(id)arg1 contentType:(long long)arg2 contents:(NSDictionary )arg3 pattern:(id)arg4 attributes:(id)arg5;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (long long)type;

@end

