//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, UIScrollView;

__attribute__((visibility("hidden")))
@interface _TVNeedsMoreContentEvaluator : NSObject
{
    UIScrollView *_scrollView;
    long long _axis;
    long long _state;
    IKViewElement *_viewElement;
    double _threshold;
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (void)reset;
- (void)evaluateForState:(long long)arg1;
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;
- (id)init;

@end

