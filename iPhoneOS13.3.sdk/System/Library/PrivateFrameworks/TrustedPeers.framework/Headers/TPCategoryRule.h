//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>
{
    NSString *_prefix;
    NSString *_category;
}

+ (BOOL)supportsSecureCoding;
+ (id)ruleWithPrefix:(id)arg1 category:(id)arg2;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCategoryRule:(id)arg1;

@end

