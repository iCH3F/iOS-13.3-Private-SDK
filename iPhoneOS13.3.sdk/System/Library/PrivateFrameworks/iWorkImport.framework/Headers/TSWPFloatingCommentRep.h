//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeRep.h>

__attribute__((visibility("hidden")))
@interface TSWPFloatingCommentRep : TSWPShapeRep
{
}

- (BOOL)p_shouldDraw;
- (void)recursivelyDrawChildrenInContext:(CGContext )arg1 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg2;
- (void)drawInContext:(CGContext )arg1;
- (BOOL)forcesPlacementOnTop;
- (BOOL)modelIsReadOnly;
- (id)documentRoot;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

