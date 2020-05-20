//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSUInteger _itemIndex;
    NSUInteger _supportedZoomingImageTransitionDirections;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) NSUInteger supportedZoomingImageTransitionDirections; // @synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections;
@property(nonatomic) NSUInteger itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
// - (void).cxx_destruct;

@end

