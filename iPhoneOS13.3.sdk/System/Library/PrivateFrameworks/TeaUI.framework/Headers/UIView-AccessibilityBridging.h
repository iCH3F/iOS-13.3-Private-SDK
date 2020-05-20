//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TUGutterView;

@interface UIView (AccessibilityBridging)
+ (void)ts_executeWithAnimated:(BOOL)arg1 duration:(double)arg2 setupBlock:(id /* CDUnknownBlockType */)arg3 animationBlock:(id /* CDUnknownBlockType */)arg4 completion:(id /* CDUnknownBlockType */)arg5;
@property(nonatomic) NSUInteger ts_accessibilityInterfaceStyleIntent;
- (void)ts_setPlusLCompositingFilter;
- (void)ts_setPlusDCompositingFilter;
- (BOOL)ts_safeAreaWidthExceedsReadableWidth;
- (void)ts_setFrameUsingCenterAndBounds:(CGRect)arg1;
@property(nonatomic, readonly) CGRect ts_frameUsingCenterAndBounds;
- (void)expandWidthToGutterViewBounds;
- (void)unclipUpToGutterView;
@property(nonatomic, readonly) TUGutterView *gutterView;
@end

