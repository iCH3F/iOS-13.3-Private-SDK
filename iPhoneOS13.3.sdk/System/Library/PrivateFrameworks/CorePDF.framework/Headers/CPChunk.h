//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPObject.h>

__attribute__((visibility("hidden")))
@interface CPChunk : CPObject
{
    CGRect bounds;
    BOOL shrinksWithChildren;
    BOOL dirtyBounds;
    unsigned int position;
    long long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;
- (double)rotationAngle;
- (void)setChunkPosition:(unsigned int)arg1;
- (unsigned int)chunkPosition;
- (void)translateObjectYBy:(double)arg1;
- (BOOL)intersectsChild:(CGRect)arg1;
- (void)setShrinksWithChildren:(BOOL)arg1;
- (BOOL)shrinksWithChildren;
- (BOOL)boundsEqualsRect:(CGRect)arg1 accuracy:(double)arg2;
- (BOOL)geometricallyContains:(id)arg1;
- (BOOL)overlapsVerticallyWith:(id)arg1;
- (BOOL)overlapsHorizontallyWith:(id)arg1;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (int)clusterLevelHint;
- (CGSize)advance;
- (float)fontSize;
- (double)bottom;
- (double)top;
- (double)center;
- (double)right;
- (double)left;
- (long long)compareChunkPosition:(id)arg1;
- (long long)compareYDescendingX:(id)arg1;
- (long long)compareYDescending:(id)arg1;
- (long long)compareTopDescending:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (long long)compareY:(id)arg1;
- (long long)compareLinearBounds:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareZDescending:(id)arg1;
- (long long)compareZ:(id)arg1;
- (long long)compareInsertionOrder:(id)arg1;
- (long long)compareX:(id)arg1;
- (long long)compareAnchorYDescending:(id)arg1;
- (long long)compareAnchorX:(id)arg1;
- (long long)compareCommonAnchorX:(id)arg1;
- (long long)compareAnchorY:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (long long)insertionOrder;
- (void)setInsertionOrder:(long long)arg1;
- (void)resizeWith:(id)arg1;
- (void)fitBoundsToChildren;
- (float)referenceAdvanceWidth;
- (float)absoluteGapTo:(id)arg1;
- (float)advanceDeltaAfterSpace;
- (float)clusterGapTo:(id)arg1;
- (CGPoint)anchor;
- (void)setAnchor:(CGPoint)arg1;
- (id)describeBounds;
- (CGRect)renderedBounds;
- (CGRect)adjustToPointBoundary:(CGRect)arg1;
- (CGRect)bounds;
- (void)setBounds:(CGRect)arg1;
- (void)setChildren:(id)arg1;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)removeAll;
- (void)remove:(id)arg1;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)add:(id)arg1;
- (float)opticalLeading;
- (void)accept:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

