//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIContextDescribing-Protocol.h>

@class CAContext, CALayer, _UIContextBinder;

@protocol _UIContextBindable <_UIContextDescribing>
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
- (BOOL)_isVisible;
- (double)_bindableLevel;
- (CALayer *)_bindingLayer;
@end

