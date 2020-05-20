//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_backgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) long long schemeStyle;
- (id)initWithColorSchemeDictionary:(id)arg1;

@end

