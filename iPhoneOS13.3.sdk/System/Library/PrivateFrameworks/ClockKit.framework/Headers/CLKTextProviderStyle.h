//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLKFont, NSDictionary;

@interface CLKTextProviderStyle : NSObject <NSCopying>
{
    BOOL _uppercase;
    BOOL _shouldEmbedTintColors;
    BOOL _shouldStyleForTritium;
    CLKFont *_font;
    CLKFont *_smallCapsBaseFont;
    NSDictionary *_otherAttributes;
    double _minimumScaleFactor;
}

+ (id)otherAttributesWithParagraphStyle:(id)arg1;
+ (id)otherAttributesWithParagraphStyle:(id)arg1 kerning:(double)arg2;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(BOOL)arg6;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(BOOL)arg6 shouldStyleForTritium:(BOOL)arg7;
@property(nonatomic) BOOL shouldStyleForTritium; // @synthesize shouldStyleForTritium=_shouldStyleForTritium;
@property(nonatomic) BOOL shouldEmbedTintColors; // @synthesize shouldEmbedTintColors=_shouldEmbedTintColors;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(copy, nonatomic) NSDictionary *otherAttributes; // @synthesize otherAttributes=_otherAttributes;
@property(nonatomic) BOOL uppercase; // @synthesize uppercase=_uppercase;
@property(copy, nonatomic) CLKFont *smallCapsBaseFont; // @synthesize smallCapsBaseFont=_smallCapsBaseFont;
@property(copy, nonatomic) CLKFont *font; // @synthesize font=_font;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

