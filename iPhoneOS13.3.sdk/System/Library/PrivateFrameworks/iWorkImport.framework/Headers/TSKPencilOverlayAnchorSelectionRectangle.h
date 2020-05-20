//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKPencilOverlayAnchorSelectionRectangle : NSObject
{
    CGColor _strokeColor;
    CGColor _fillColor;
    CGRect _rectangle;
}

@property(nonatomic) CGColor fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) CGColor strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)pencilAnchorBloopAnimationStartingAtElapsedTime:(double)arg1;
- (id)anchorOverlayLayerForElapsedAnimationTime:(double)arg1;
- (void)dealloc;
- (id)initWithRectangle:(CGRect)arg1 strokeColor:(CGColor )arg2 fillColor:(CGColor )arg3;

@end

