//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder : CMLineShapeBuilder
{
    OADPath *_path;
    CGSize _space;
}

// - (void).cxx_destruct;
- (CGPoint)_renderPathElement:(id)arg1 withTransform:(CGAffineTransform)arg2 inPath:(CGPath )arg3;
- (CGPath )copyShapeWithTransform:(CGAffineTransform)arg1;
- (CGAffineTransform)affineTransform;
- (void)setSpace:(CGSize)arg1;
- (void)setPath:(id)arg1;

@end

