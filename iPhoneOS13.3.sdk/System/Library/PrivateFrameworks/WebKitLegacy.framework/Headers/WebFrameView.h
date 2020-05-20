//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebCoreFrameView-Protocol.h>

@class WebFrame, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : WAKView <WebCoreFrameView>
{
    WebFrameViewPrivate *_private;
}

+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;
- (void)printDocumentView;
@property(readonly, nonatomic) BOOL documentViewShouldHandlePrint;
- (id)_webcore_effectiveFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardMouseEvent:(id)arg1;
- (BOOL)_firstResponderIsFormControl;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (float)_horizontalPageScrollDistance;
- (float)_horizontalKeyboardScrollDistance;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (void)_goForward;
- (void)_goBack;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_isVerticalDocument;
- (BOOL)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(CGSize)arg1;
- (CGRect)visibleRect;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isOpaque;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property(nonatomic) BOOL allowsScrolling;
@property(readonly, nonatomic) WebFrame *webFrame;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (struct Frame )_web_frame;
- (float)_verticalKeyboardScrollDistance;
- (void)_frameSizeChanged;
- (void)_install;
- (Class)_viewClassForMIMEType:(id)arg1;
- (float)_verticalPageScrollDistance;
- (id)_scrollView;
- (void)_setWebFrame:(id)arg1;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (void)_setDocumentView:(id)arg1;
- (id)_webView;
- (Class)_customScrollViewClass;
- (id)_contentView;
- (id)_largestChildWithScrollBars;
- (BOOL)_hasScrollBars;
- (id)_largestScrollableChild;
- (BOOL)_isScrollable;
- (float)_area;
- (void)frameSizeChanged;

@end

