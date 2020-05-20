//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorImage;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent
{
    CUINamedVectorImage *_vectorImage;
    struct {
        unsigned int isPDF:1;
        unsigned int isSVG:1;
    } coreFlags;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (double)vectorScale;
- (CGSVGDocument )CGSVGDocument;
- (BOOL)isCGSVGDocument;
- (CGPDFPage )CGPDFPage;
- (BOOL)isCGPDFPage;
- (CGImage )_CGImageWithSize:(CGSize)arg1 scale:(double)arg2;
- (void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContext )arg2;
- (void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContext )arg2;
- (id)contentWithCGImage:(CGImage )arg1;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (id)initWithCGImage:(CGImage )arg1 CUIVectorImage:(id)arg2 scale:(double)arg3;

@end

