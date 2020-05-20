//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration
{
    long long _sourceType;
    IKColor *_color;
}

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;
@property(retain, nonatomic) IKColor *color; // @synthesize color=_color;
@property long long sourceType; // @synthesize sourceType=_sourceType;
// - (void).cxx_destruct;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long )arg2;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long )arg2;
- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end

