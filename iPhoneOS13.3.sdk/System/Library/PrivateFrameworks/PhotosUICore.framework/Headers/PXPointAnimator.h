//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutablePointAnimator-Protocol.h>
#import <PhotosUICore/PXNumberAnimatorDisplayLinkTarget-Protocol.h>

@class NSString, PXNumberAnimator;
@protocol PXMutableNumberAnimator;

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget>
{
    PXNumberAnimator<PXMutableNumberAnimator> *_xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> *_yAnimator;
    BOOL _isAnimating;
    NSString *_label;
    CGPoint _value;
    CGPoint _presentationValue;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) CGPoint presentationValue; // @synthesize presentationValue=_presentationValue;
@property(readonly, nonatomic) CGPoint value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
@property(readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;
@property(readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(CGPoint)arg3 changes:(id /* CDUnknownBlockType */)arg4;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(CGPoint)arg1 changes:(id /* CDUnknownBlockType */)arg2;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(id /* CDUnknownBlockType */)arg3;
- (void)performChangesWithoutAnimation:(id /* CDUnknownBlockType */)arg1;
- (void)_setInternalValue:(CGPoint)arg1;
- (void)_update;
- (CGPoint)approximateVelocity;
@property(readonly, nonatomic) double epsilon;
@property(readonly, copy) NSString *description;
- (id)initWithValue:(CGPoint)arg1 epsilon:(double)arg2;
- (id)initWithValue:(CGPoint)arg1;
- (id)init;

@end

