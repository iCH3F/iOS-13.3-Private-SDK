//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CTCarrierSpaceUsagePlanItemMessages : NSObject <NSSecureCoding>
{
    NSString *_capacity;
    NSString *_used;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *used; // @synthesize used=_used;
@property(retain, nonatomic) NSString *capacity; // @synthesize capacity=_capacity;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

