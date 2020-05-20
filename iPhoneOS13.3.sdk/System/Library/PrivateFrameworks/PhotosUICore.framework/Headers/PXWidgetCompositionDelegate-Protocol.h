//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXWidgetComposition;
@protocol NSObject, PXWidget;

@protocol PXWidgetCompositionDelegate <NSObject>
- (NSObject )widgetComposition:(PXWidgetComposition *)arg1 viewControllerHostingWidget:(id <PXWidget>)arg2;

@optional
- (void)widgetComposition:(PXWidgetComposition *)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id <NSObject>)arg2;
- (void)widgetComposition:(PXWidgetComposition *)arg1 widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg2;
- (BOOL)widgetComposition:(PXWidgetComposition *)arg1 widget:(id <PXWidget>)arg2 transitionToViewController:(NSObject )arg3 withTransitionType:(long long)arg4;
- (long long)widgetComposition:(PXWidgetComposition *)arg1 loadingPriorityForWidget:(id <PXWidget>)arg2;
- (BOOL)widgetComposition:(PXWidgetComposition *)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id <PXWidget>)arg2;
- (BOOL)widgetCompositionHasContentAbove:(PXWidgetComposition *)arg1;
- (BOOL)widgetComposition:(PXWidgetComposition *)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
@end

