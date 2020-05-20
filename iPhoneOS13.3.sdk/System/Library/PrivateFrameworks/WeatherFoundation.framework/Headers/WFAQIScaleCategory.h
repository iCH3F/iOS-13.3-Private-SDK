//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _categoryIndex;
    NSString *_localizedCategoryDescription;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedCategoryDescription; // @synthesize localizedCategoryDescription=_localizedCategoryDescription;
@property(readonly, nonatomic) NSUInteger categoryIndex; // @synthesize categoryIndex=_categoryIndex;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToScaleCategory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCategoryIndex:(NSUInteger)arg1 localizedCategoryDescription:(id)arg2;

@end

