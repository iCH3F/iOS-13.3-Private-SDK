//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIEventEnvironmentClearTouchesContext : NSObject
{
    UIView *_view;
    UIWindow *_window;
}

@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)initWithView:(id)arg1 window:(id)arg2;

@end

