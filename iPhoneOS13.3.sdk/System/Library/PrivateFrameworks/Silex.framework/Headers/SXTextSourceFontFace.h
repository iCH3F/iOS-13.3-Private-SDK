//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFace-Protocol.h>

@class NSString;
@protocol SXFontAttributes;

@interface SXTextSourceFontFace : NSObject <SXFontFace>
{
    NSString *_fontName;
    id <SXFontAttributes> _fontAttributes;
}

+ (id)basicFontAttributesForFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2;
@property(readonly, nonatomic) id <SXFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
// - (void).cxx_destruct;

@end

