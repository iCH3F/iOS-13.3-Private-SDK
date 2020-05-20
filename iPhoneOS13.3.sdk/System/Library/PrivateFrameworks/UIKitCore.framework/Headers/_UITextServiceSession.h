//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIResponder, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate>
{
    long long _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    BOOL _dismissed;
    id /* CDUnknownBlockType */ _dismissedHandler;
}

+ (id)textServiceSessionForType:(long long)arg1;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(_NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5;
+ (BOOL)shouldPresentServiceInSameWindowAsView:(id)arg1;
+ (BOOL)canShowTextServices;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
// - (void).cxx_destruct;
- (void)_endSession;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)dismissTextServiceAnimated:(BOOL)arg1;
- (long long)type;
- (BOOL)isDisplaying;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)sessionDidDismiss;

@end

