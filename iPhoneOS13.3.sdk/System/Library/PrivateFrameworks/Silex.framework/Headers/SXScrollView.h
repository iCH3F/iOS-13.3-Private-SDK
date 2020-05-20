//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDScrollView.h>

#import <Silex/SXAXElementOccluder-Protocol.h>

@class SXAXCustomRotorProvider;
@protocol SXScrollViewDelegate;

@interface SXScrollView : TSDScrollView <SXAXElementOccluder>
{
    id <SXScrollViewDelegate> _scrollViewDelegate;
    SXAXCustomRotorProvider *_customRotorProvider;
}

@property(retain, nonatomic) SXAXCustomRotorProvider *customRotorProvider; // @synthesize customRotorProvider=_customRotorProvider;
@property(nonatomic) __weak id <SXScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
// - (void).cxx_destruct;
- (BOOL)_accessibilityScrollingEnabled;
- (BOOL)shouldOccludeAccessibilityElement:(id)arg1;
- (id)accessibilityCustomRotors;
@property(readonly, nonatomic) BOOL isBouncing;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

