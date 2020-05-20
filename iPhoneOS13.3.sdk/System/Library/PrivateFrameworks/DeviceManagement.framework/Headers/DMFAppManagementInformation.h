//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _state;
    NSUInteger _options;
    NSString *_redemptionCode;
    NSString *_unusedRedemptionCode;
    NSString *_displayName;
}

+ (id)stringForState:(NSUInteger)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *unusedRedemptionCode; // @synthesize unusedRedemptionCode=_unusedRedemptionCode;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)_stringForOptions:(NSUInteger)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

