//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber;
@protocol NSObject><NSSecureCoding;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding>
{
    id <NSObject><NSSecureCoding> _value;
    NSNumber *_authorized;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueKey;
+ (Class)valueTypeClass;
@property(readonly, nonatomic) NSNumber *authorized; // @synthesize authorized=_authorized;
@property(readonly, nonatomic) id <NSObject><NSSecureCoding> value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)entryBySettingAuthorized:(BOOL)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 authorized:(id)arg2;

@end

