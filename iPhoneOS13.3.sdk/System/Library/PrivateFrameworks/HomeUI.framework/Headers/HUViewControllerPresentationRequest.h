//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject
{
    BOOL _animated;
    UIViewController *_viewController;
    NSUInteger _preferredPresentationType;
}

+ (id)requestWithViewController:(id)arg1;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) NSUInteger preferredPresentationType; // @synthesize preferredPresentationType=_preferredPresentationType;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;

@end

