//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPForwardsCompatibleField-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSPKnownField : NSObject <TSPForwardsCompatibleField>
{
    int _type;
    int _number;
    struct FieldInfo _fieldInfo;
}

+ (id)knownFieldWithFieldDescriptor:(const struct FieldDescriptor )arg1 fieldInfo:(const struct FieldInfo )arg2 message:(const struct Message )arg3 reflection:(const struct Reflection )arg4;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)debugDescription;
- (void)updateMessageInfo:(struct MessageInfo )arg1;
- (void)mergeToMessage:(struct Message )arg1 reflection:(const struct Reflection )arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet )arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (const struct FieldInfo )fieldInfo;
@property(readonly, nonatomic) BOOL hasUnknownValues;
@property(readonly, nonatomic) BOOL hasKnownValues;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor )arg1 fieldInfo:(const struct FieldInfo )arg2 message:(const struct Message )arg3 reflection:(const struct Reflection )arg4;
- (id)init;

@end

