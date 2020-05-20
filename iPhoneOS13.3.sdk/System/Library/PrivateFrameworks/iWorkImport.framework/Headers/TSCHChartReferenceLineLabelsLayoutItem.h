//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property(readonly, retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
// - (void).cxx_destruct;
- (id)p_areaLayoutItem;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (CGRect)p_drawingRectForModel:(id)arg1;
- (CGRect)calcDrawingRect;
- (CGSize)calcMinSize;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;

@end

