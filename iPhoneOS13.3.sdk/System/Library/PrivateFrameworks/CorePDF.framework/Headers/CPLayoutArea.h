//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPLayoutArea : CPRegion
{
    BOOL isFirstLayout;
}

- (id)description;
- (id)properties;
- (double)selectionBottom;
- (CGRect)layoutAreaBounds;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)addColumnBreaks;
- (void)setIsFirstLayout:(BOOL)arg1;
- (BOOL)isFirstLayout;
- (BOOL)isSimilarTo:(id)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

