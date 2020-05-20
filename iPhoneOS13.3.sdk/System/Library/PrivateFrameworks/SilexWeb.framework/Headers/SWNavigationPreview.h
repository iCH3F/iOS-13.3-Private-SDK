//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLRequest, UIViewController;
@protocol SWNavigationHandler;

@interface SWNavigationPreview : NSObject
{
    UIViewController *_viewController;
    id <SWNavigationHandler> _navigationHandler;
    NSURLRequest *_request;
}

@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SWNavigationHandler> navigationHandler; // @synthesize navigationHandler=_navigationHandler;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;

@end

