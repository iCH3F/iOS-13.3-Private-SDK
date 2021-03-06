//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDBezierPath;

@interface TSWPRenderer : NSObject
{
    CGContext _context;
    BOOL _flipShadows;
    double _viewScale;
    TSDBezierPath *_interiorClippingPath;
    BOOL _preventClipToColumn;
}

+ (struct __CTFont )invisiblesFont;
@property(nonatomic) BOOL preventClipToColumn; // @synthesize preventClipToColumn=_preventClipToColumn;
@property(retain, nonatomic) TSDBezierPath *interiorClippingPath; // @synthesize interiorClippingPath=_interiorClippingPath;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) BOOL flipShadows; // @synthesize flipShadows=_flipShadows;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawInvisiblesBreakLine:(const struct TSWPAdornmentLine )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (void)p_drawAdornments:(const struct TSWPAdornments )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (void)p_drawAdornmentGlyphs:(const struct TSWPAdornments )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (void)p_drawAttachmentAdornments:(const struct TSWPAdornments )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(NSUInteger)arg1 state:(const struct TSWPDrawingState )arg2;
- (void)p_drawHiddenDeletionsAdornments:(const struct TSWPAdornments )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (void)p_drawInvisiblesAdornments:(const struct TSWPAdornments )arg1 lineFragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3;
- (void)p_drawAttachmentGlyphAtPosition:(CDStruct_316206b0)arg1 fragment:(const struct TSWPLineFragment )arg2;
- (void)p_drawTextInRunsForLine:(struct __CTLine )arg1 fragment:(const struct TSWPLineFragment )arg2 state:(const struct TSWPDrawingState )arg3 tateChuYoko:(BOOL)arg4 baseRange:(_NSRange)arg5 isFirstLineRef:(BOOL)arg6;
- (void)p_calculateMarkAdornments:(vector_5a1d2cc3 )arg1 drawingState:(const struct TSWPDrawingState )arg2 lineFragment:(const struct TSWPLineFragment )arg3;
- (void)p_strokeWavyLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 width:(double)arg3;
- (void)p_strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 width:(double)arg3;
- (void)p_drawAdornmentLineBackgroundRect:(const struct TSWPAdornmentLine )arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const struct TSWPDrawingState )arg3 bounds:(CGRect)arg4;
- (void)p_drawAdornmentLine:(const struct TSWPAdornmentLine )arg1 drawingState:(const struct TSWPDrawingState )arg2 lineFragment:(const struct TSWPLineFragment )arg3 lineFragmentStart:(CGPoint)arg4 vertical:(BOOL)arg5;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2;
- (void)p_drawUngrammaticMarkingsFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2;
- (void)p_drawMisspelledWordMarkingsFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment )arg1 color:(id)arg2 ranges:(const struct TSWPRangeVector )arg3 suppressRange:(_NSRange)arg4 drawingState:(const struct TSWPDrawingState )arg5;
- (BOOL)p_shouldClipFragment:(const struct TSWPLineFragment )arg1 drawingState:(const struct TSWPDrawingState )arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(CGRect)arg4 outClipRect:(CGRect )arg5;
- (void)drawAdornmentRects:(const vector_e65b05c3 )arg1 forColumn:(id)arg2 foreground:(BOOL)arg3;
- (void)drawFragment:(const struct TSWPLineFragment )arg1 updateRect:(CGRect)arg2 drawingState:(const struct TSWPDrawingState )arg3 runState:(CDStruct_3b6efdb6 )arg4 lineDrawFlags:(unsigned int)arg5;
- (void)didRenderFragments;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState )arg1;
- (CGSize)convertSizeToDeviceSpace:(CGSize)arg1;
- (CGRect)getClipBoundingBox;
- (void)dealloc;
- (id)initWithContext:(CGContext )arg1;

@end

