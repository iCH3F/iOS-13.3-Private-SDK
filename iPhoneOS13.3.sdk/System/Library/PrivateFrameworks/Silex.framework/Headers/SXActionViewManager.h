//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionViewManager-Protocol.h>

@protocol SXViewControllerPresenting;

@interface SXActionViewManager : NSObject <SXActionViewManager>
{
    id <SXViewControllerPresenting> _viewControllerPresenter;
}

@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenter; // @synthesize viewControllerPresenter=_viewControllerPresenter;
// - (void).cxx_destruct;
- (void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)initWithViewControllerPresenting:(id)arg1;

@end

