//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFAlert;

@interface WFAlertButton : NSObject
{
    BOOL _preferred;
    NSString *_title;
    long long _style;
    id /* CDUnknownBlockType */ _handler;
    WFAlert *_alert;
}

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(BOOL)arg3 handler:(id /* CDUnknownBlockType */)arg4;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
+ (id)okButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)okButtonWithHandler:(id /* CDUnknownBlockType */)arg1;
+ (id)cancelButtonWithHandler:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) __weak WFAlert *alert; // @synthesize alert=_alert;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(readonly, nonatomic, getter=isPreferred) BOOL preferred; // @synthesize preferred=_preferred;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3 preferred:(BOOL)arg4;

@end
