//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSPredicate, NSString;

@interface CKGenericCondition : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *negated;
    MISSING_TYPE *$__lazy_storage_$_sql;
}

+ (void)setSupportsSecureCoding:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(void )arg1;
- (BOOL)evaluateOn:(id)arg1;
- (id)or:(id)arg1;
- (id)and:(id)arg1;
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(BOOL)arg3;
- (id)initWithValue:(BOOL)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSPredicate *predicate;

@end

