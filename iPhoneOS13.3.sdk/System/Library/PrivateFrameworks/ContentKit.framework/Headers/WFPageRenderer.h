//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject
{
    BOOL _matchInputSize;
    BOOL _includeMargin;
    UIPrintPageRenderer *_renderer;
    CGSize _inputSize;
}

@property(nonatomic) BOOL includeMargin; // @synthesize includeMargin=_includeMargin;
@property(nonatomic) BOOL matchInputSize; // @synthesize matchInputSize=_matchInputSize;
@property(nonatomic) CGSize inputSize; // @synthesize inputSize=_inputSize;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double margin;
- (void)updateRendererSize;
@property(readonly, nonatomic) UIPrintPageRenderer *renderer; // @synthesize renderer=_renderer;
- (id)renderToImage;
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(CGSize)arg7 shouldDrawPageAtIndexHandler:(id /* CDUnknownBlockType */)arg8 completionHandler:(id /* CDUnknownBlockType */)arg9;
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (CGSize)sizeForPageAtIndex:(long long)arg1;

@end

