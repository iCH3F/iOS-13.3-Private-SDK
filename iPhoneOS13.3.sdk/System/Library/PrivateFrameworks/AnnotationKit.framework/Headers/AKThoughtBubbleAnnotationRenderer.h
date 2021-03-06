//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer
{
}

+ (CGPath )_newPathTransformedFromUnitToModelSpace:(CGPath )arg1 forAnnotation:(id)arg2;
+ (CGPath )_newCloudPathScaledToModelSpaceForAnnotation:(id)arg1;
+ (CGPath )_newSmallBubblePathForAnnotation:(id)arg1 atCenter:(CGPoint)arg2 withSize:(CGSize)arg3;
+ (CGPath )_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (CGPath )_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (double)_templateToUnitPointyPointScaleForAnnotation:(id)arg1;
+ (CGPoint)_templatePointyPointToCircleIntersect;
+ (double)_unitCloudRadius;
+ (CGPoint)_unitCloudCenter;
+ (CGPoint)_unitAnnotationPointyPointForAnnotation:(id)arg1;
+ (BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContext )arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (void)_fillAndStrokePath:(CGPath )arg1 forAnnotation:(id)arg2 inContext:(CGContext )arg3;
+ (CGPath )_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2;
+ (CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2;
+ (CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3;
+ (CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

