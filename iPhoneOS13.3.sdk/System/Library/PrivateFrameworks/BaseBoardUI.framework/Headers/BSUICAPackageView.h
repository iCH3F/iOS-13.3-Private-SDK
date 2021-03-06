//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <BaseBoardUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSArray, NSDictionary, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface BSUICAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CALayer *_rootLayer;
    CGSize _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    id /* CDUnknownBlockType */ _pendingCompletion;
    NSDictionary *_publishedObjectMap;
}

// - (void).cxx_destruct;
- (void)_clearPendingCompletion;
- (void)_setPendingCompletion:(id /* CDUnknownBlockType */)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (BOOL)setState:(id)arg1 onLayer:(id)arg2 animated:(BOOL)arg3 transitionSpeed:(double)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)setState:(id)arg1 animated:(BOOL)arg2 transitionSpeed:(double)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)setState:(id)arg1 animated:(BOOL)arg2;
- (BOOL)setState:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end

