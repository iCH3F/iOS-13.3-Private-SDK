//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKUIViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupLayout : NSObject
{
    long long _bottomLeftLayoutStyle;
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_middleLeftViewElements;
    SKUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

@property(readonly, nonatomic) long long bottomLeftLayoutStyle; // @synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle;
// - (void).cxx_destruct;
- (CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2;
- (CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;
- (CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2;
- (id)viewElementsForSection:(long long)arg1;
- (double)topPaddingForViewElement:(id)arg1;
- (struct SKUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1;
- (double)metadataWidthForWidth:(double)arg1;
- (BOOL)hasBottomRightElementWithRightAlignment;
- (struct SKUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1;
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (double)bottomPaddingForViewElement:(id)arg1;
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

